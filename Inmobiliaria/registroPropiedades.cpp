#include "registroPropiedades.h"


RegistroPropiedades::RegistroPropiedades(){
}


void RegistroPropiedades::guardarPropiedades(){
	Propiedad propiedad;
	propiedad.crearPropiedad(listaPropiedades.size());
    propiedad.mostrarPropiedad();
	listaPropiedades.push_back(propiedad);	
}


void RegistroPropiedades::mostrarPropiedades(){
	list<Propiedad>::iterator itPropiedad;
	for( itPropiedad = listaPropiedades.begin(); itPropiedad != listaPropiedades.end(); itPropiedad++ ){
		itPropiedad->mostrarPropiedad();
	}
}


void RegistroPropiedades::eliminarPropiedad(){
	int idPropiedad;          
	cout << " Digite el id de la propiedad que desea borrar: " << endl;
	cin >> idPropiedad;
	for( list<Propiedad>::iterator ItPropiedad = listaPropiedades.begin(); ItPropiedad != listaPropiedades.end(); ItPropiedad++){
		if(idPropiedad == ItPropiedad->getIdPropiedad()){
            listaPropiedades.erase(ItPropiedad);
            cout << " Propiedad eliminada con exito! " << endl;
		}
	}
    return;
}


void RegistroPropiedades::modificarPropiedad(){
	int idModificarPropiedad, opcionUsuario, salida = 1;
	cout << " Digite el id de la propiedad que desea modificar: " << endl;
	cin >> idModificarPropiedad;
	list<Propiedad>::iterator itModificarPropiedad;
	for(itModificarPropiedad = listaPropiedades.begin(); itModificarPropiedad != listaPropiedades.end(); itModificarPropiedad++ ){
		if( idModificarPropiedad == itModificarPropiedad->getIdPropiedad()){
			int salida = 1, opcionUsuario, salida2 = 1;
            itModificarPropiedad->setnumeroAlcobas();
            itModificarPropiedad->setParqueadero();
            itModificarPropiedad->setBanos();
            itModificarPropiedad->setArea();
            itModificarPropiedad->setTipoPropiedad();
            itModificarPropiedad->setTipo();
            itModificarPropiedad->setDescripcion();
            itModificarPropiedad->setPrecio();
			itModificarPropiedad->setBarrio();

        }
	}
}


void RegistroPropiedades::buscarPropiedadBarrio(){
	int opcionUsuario, salida = 1;
	string barrioModificarPropiedad;
	fflush(stdin);
	cout << " Digite el barrio: " << endl;
	getline(cin, barrioModificarPropiedad);
    fflush(stdin);
	list<Propiedad>::iterator itModificarPropiedad;
	for(itModificarPropiedad = listaPropiedades.begin(); itModificarPropiedad != listaPropiedades.end(); itModificarPropiedad++ ){
		if( barrioModificarPropiedad == itModificarPropiedad->getBarrioPropiedad()){
			itModificarPropiedad->mostrarPropiedad();

        }
	}
}


void RegistroPropiedades::buscarPropiedadVenta(){
	int opcionUsuario, salida = 1;
	list<Propiedad>::iterator itModificarPropiedad;
	for(itModificarPropiedad = listaPropiedades.begin(); itModificarPropiedad != listaPropiedades.end(); itModificarPropiedad++ ){
		if( "Venta" == itModificarPropiedad->getTipoPropiedad()){
			itModificarPropiedad->mostrarPropiedad();

        }
	}
}

void RegistroPropiedades::buscarPropiedadArriendo(){
	int opcionUsuario, salida = 1;
	list<Propiedad>::iterator itModificarPropiedad;
	for(itModificarPropiedad = listaPropiedades.begin(); itModificarPropiedad != listaPropiedades.end(); itModificarPropiedad++ ){
		if( "Arrendamiento" == itModificarPropiedad->getTipoPropiedad()){
			itModificarPropiedad->mostrarPropiedad();

        }
	}
}


void RegistroPropiedades::buscarPrecioMayor(){
	int precioMax;
	list<Propiedad>::iterator it;
	for( it = listaPropiedades.begin(); it != listaPropiedades.end(); it++ ){
		if(it->getPrecioPropiedad() > precioMax){
			precioMax = it->getPrecioPropiedad();
		}
	}
	list<Propiedad>::iterator it2;
	for( it2 = listaPropiedades.begin(); it2 != listaPropiedades.end(); it2++ ){
		if(precioMax == it2->getPrecioPropiedad()){
			precioMax = it2->getPrecioPropiedad();
			it2->mostrarPropiedad();
		}
	}

}

void RegistroPropiedades::buscarPrecioMenor(){
	int precioMin, temp;
	list<Propiedad>::iterator it;
	it=listaPropiedades.begin();
	precioMin=it->getPrecioPropiedad();
	for( it = listaPropiedades.begin(); it != listaPropiedades.end(); it++ ){
		if(it->getPrecioPropiedad() < precioMin){
			precioMin = it->getPrecioPropiedad();
		}
	}
	list<Propiedad>::iterator it2;
	for( it2 = listaPropiedades.begin(); it2 != listaPropiedades.end(); it2++ ){
		if(precioMin == it2->getPrecioPropiedad()){
			precioMin = it2->getPrecioPropiedad();
			it2->mostrarPropiedad();
		}
	}

}

/*
void RegistroPropiedades::sort(){
	list<Propiedad>::iterator it;
	for ( it = listaPropiedades.begin(); it != listaPropiedades.end(); ++it){
		cout << it->getPrecioPropiedad() << endl;
	}
	listaPropiedades.sort();
	for ( it = listaPropiedades.begin(); it != listaPropiedades.end(); ++it){
		it->mostrarPropiedad();
	}
}
*/


