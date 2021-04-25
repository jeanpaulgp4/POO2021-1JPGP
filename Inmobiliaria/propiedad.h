#ifndef PROPIEDAD_H
#define PROPIEDAD_H

#include <iostream>
#include <stdlib.h>

using std::string;
using std::cin;
using std::cout;
using std::endl;



class Propiedad{

private:
    int idPropiedad, numeroAlcobas, parqueadero, banos, precio;
    float area;
    string tipoPropiedad, tipo, descripcion, barrio;

public:
    Propiedad();
    Propiedad(int, int, int, int, float, string, string, string, int, string);
    void crearPropiedad(int idPropiedad);
    void mostrarPropiedad();
    int getIdPropiedad();
    int getPrecioPropiedad();
    string getBarrioPropiedad();
    string getTipoPropiedad();
    void setnumeroAlcobas();
    void setParqueadero();
	void setBanos();
    void setArea();
    void setTipoPropiedad();
    void setTipo();
    void setDescripcion();
    void setPrecio();
    void setBarrio();
}; 

#endif