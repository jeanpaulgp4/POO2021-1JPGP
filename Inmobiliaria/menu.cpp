#ifndef MENU_H
#define MENU_H

#include "menu.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int menu(){
    int opcion;
    cout << "Menu de StarInmobiliaria\n" << endl;
    cout << "0. Salir" << endl;
    cout << "1. Crear una propiedad" << endl;
    cout << "2. Modificar una propiedad" << endl;
    cout << "3. Eliminar una propiedad" << endl;
    cout << "4. Mostrar todas las propiedades" << endl;
    cout << "5. Mostrar propiedades en un barrio" << endl;
    cout << "6. Mostrar propiedades en venta" << endl;
    cout << "7. Buscar propiedad con mayor precio" << endl;
    cout << "8. Buscar propiedad con menor precio" << endl;
    cout << "9. organizar de menor a mayor" << endl;
    cin >> opcion;
    return opcion;
} 


#endif