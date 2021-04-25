#include <iostream>
#include "menu.cpp"
#include "propiedad.h"
#include "registroPropiedades.h"

int main(){ 
	RegistroPropiedades registro;
	int salida = 1;
	do{
		int opcionUsuario = menu();
		switch(opcionUsuario){
			case 0:
				salida = 0;
				break;

			case 1:
				registro.guardarPropiedades();
				salida = 1;
				break;

			case 2: 
				registro.modificarPropiedad();
				salida = 1;
				break;

			case 3:
				registro.eliminarPropiedad();
				salida = 1;
				break;
				
			case 4:
				registro.mostrarPropiedades();
				salida = 1;
				break;
			case 5:
				registro.buscarPropiedadBarrio();
				salida = 1;
				break;
			case 6:
				registro.buscarPropiedadVenta();
				salida = 1;
				break;
			case 7:
				registro.buscarPrecioMayor();
				salida = 1;
				break;
			case 8:
				registro.buscarPrecioMenor();
				salida = 1;
				break;
			case 9:
				//registro.sort();
				salida = 1;
				break;
		}
	}while(salida == 1);
    return 0;
}
