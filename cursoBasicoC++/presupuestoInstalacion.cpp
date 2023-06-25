//
// Created by pepe on 6/25/23.
//
#include <iostream>
using namespace std;

int main(){

    //variables y constantes
    double metrosMedia, metrosAlta;
    const double precioMedia = 35.5;
    const double precioAlta = 55.3;
    const double IVA = 0.21;
    const int expiraPresupuestoDias = 30;

    //titulo
    cout << endl;
    cout << "SOLICITUD AL CLIENTE" << endl;
    cout << endl;

    //pedir al usuario
    cout << "Cuantos metros quieres instalar con calidad media? ";
    cin >> metrosMedia;
    cout << "Cuantos metros quieres instalar con calidad alta? ";
    cin >> metrosAlta;

    //presupuesto
    cout << "\nPRESUPUESTO PARA LA INSTALACION:" << endl;
    cout << endl;

    //metros
    cout << "Numero de metros calidad media: " << metrosMedia << endl;
    cout << "Numero de metros calidad alta: " << metrosAlta <<  endl;
    cout << endl;

    //precios
    cout << "Precio calidad media: " << precioMedia << " $." << endl;
    cout << "Precio calidad alta: " << precioAlta << " $." << endl;
    cout << endl;

    cout << "*************************************************************" << endl;
    cout << endl;

    //importe
    cout << "IMPORTE: " << endl;
    cout << (precioMedia * metrosMedia)+(precioAlta * metrosAlta) << " $." << endl;
    cout << endl;

    //IVA
    cout << "IVA(21%):" << endl;
    cout << ((precioAlta*precioAlta)+(precioMedia*precioMedia))*IVA << " $." << endl;
    cout << endl;

    cout << "*************************************************************" << endl;
    cout << endl;

    //total
    cout << "IMPORTE TOTAL:" << endl;
    cout << (precioAlta*precioAlta)+(precioMedia*precioMedia)+
            (((precioAlta*precioAlta)+(precioMedia*precioMedia))*IVA) << " $." << endl;
    cout << endl;

    //validez
    cout << "Presupuesto valido durante: " << expiraPresupuestoDias << "dias.";
    cout << endl;

    return 0;
}