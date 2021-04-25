#ifndef REGISTROPROPIEDADES_H
#define REGISTROPROPIEDADES_H

#include <iostream>
#include <stdlib.h>
#include "propiedad.h"
#include <list>
#include <algorithm>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::list;

class RegistroPropiedades{
private:
	list<Propiedad> listaPropiedades;
	
public:
	RegistroPropiedades();  
    void guardarPropiedades();  
	void mostrarPropiedades();  
	void eliminarPropiedad();  
	void modificarPropiedad();  
	void buscarPropiedadBarrio();
	void buscarPropiedadVenta();
	void buscarPropiedadArriendo();
	void buscarPrecioMayor();
	void buscarPrecioMenor();
	//void sort();

};

#endif