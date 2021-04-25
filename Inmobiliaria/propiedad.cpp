#include "propiedad.h"

Propiedad::Propiedad(){
}

Propiedad::Propiedad(int idPropiedad, int numeroAlcobas, int parqueadero, int banos, float area, string tipoPropiedad, string tipo, string descripcion, int precio, string barrio){
    this->idPropiedad = idPropiedad;
    this->numeroAlcobas = numeroAlcobas;
    this->parqueadero = parqueadero;
    this->banos = banos;
    this->area = area;
    this->tipoPropiedad = tipoPropiedad; //arrendamiento/venta
    this->tipo = tipo; // tipo: apartamento, apartaestudio, casa, lote, casa con renta, finca
    this->descripcion = descripcion;
    this->precio = precio;
	this->barrio = barrio;
}

void Propiedad::crearPropiedad(int idPropiedad){
	Propiedad propiedad;
    int salida = 1, opcionUsuario, salida2 = 1;
	this->idPropiedad = idPropiedad;
    cout << " Digite el numero de alcobas: " << endl;
	cin >> numeroAlcobas;
    cout << " Digite el numero de parqueaderos: " << endl;
	cin >> parqueadero;
    cout << " Digite el numero de banos: " << endl;
	cin >> banos;
    cout << " Digite el area de la propiedad: " << endl;
	cin >> area;
    while(salida == 1){
		cout << " Digite alguna de estas opciones sobre tipo de propiedad:\n 1. Venta\n 2. Arrendamiento\n" << endl;  
		cin >> opcionUsuario;
		if(opcionUsuario < 1){
			cout << " Error, esta opcion no es valida" << endl; 
			salida = 1;
		}
		else if(opcionUsuario == 1){
			tipoPropiedad = "Venta";
			salida = 0;
		} 
		else if(opcionUsuario == 2){
			tipoPropiedad = "Arrendamiento";
			salida = 0;
		}
		else if(opcionUsuario > 2){
			cout << " Error!, esta opcion no es valida" << endl; 
			salida = 1;
		}
	}
    while(salida2 == 1){
		cout << " Digite alguna de estas opciones sobre tipo de vivienda:\n 1. Apartamento\n 2. Apartaestudio\n 3. Casa\n 4. Lote\n 5. Casa con renta\n 6. Finca\n" << endl;  
		cin >> opcionUsuario;
		if(opcionUsuario < 1){
			cout << " Error, esta opcion no es valida" << endl; 
			salida2 = 1;
		}
		else if(opcionUsuario == 1){
			tipo = "Apartamento";
			salida2 = 0;
		} 
		else if(opcionUsuario == 2){
			tipo = "Apartaestudio";
			salida2 = 0;
		}
        else if(opcionUsuario == 3){
			tipo = "Casa";
			salida2 = 0;
		}
        else if(opcionUsuario == 4){
			tipo = "Lote";
			salida2 = 0;
		}
        else if(opcionUsuario == 5){
			tipo = "Casa_con_renta";
			salida2 = 0;
		}
        else if(opcionUsuario == 6){
			tipo = "Finca";
			salida2 = 0;
		}
		else if(opcionUsuario > 6){
			cout << " Error!, esta opcion no es valida" << endl; 
			salida2 = 1;
		}
	}
    fflush(stdin);
    cout << " Digite la descripcion de la propiedad: " << endl;
	getline(cin, descripcion);
    fflush(stdin);
    cout << " Digite el precio de la propiedad: " << endl;
	cin >> precio;
	fflush(stdin);
    cout << " Digite el barrio de la propiedad: " << endl;
	getline(cin, barrio);
    fflush(stdin);
}

void Propiedad::mostrarPropiedad(){
	cout << " id de propiedad:: " << idPropiedad << endl;
	cout << " Numero de alcobas: " << numeroAlcobas << endl;
	cout << " Numero de parqueaderos: " << parqueadero << endl;
    cout << " Numero de banos: " << banos << endl;
    cout << " Area de la propiedad: " << area << endl;
    cout << " Tipo de la propiedad: " << tipoPropiedad << endl;
    cout << " Tipo de la vivienda: " << tipo << endl;
    cout << " Precio de la propiedad: " << precio << endl;
    cout << " Descripcion de la propiedad: " << descripcion << endl;
	cout << " Barrio de la propiedad: " << barrio << endl;

}

int Propiedad::getIdPropiedad(){
	return idPropiedad;
}

int Propiedad::getPrecioPropiedad(){
	return precio;
}

string Propiedad::getBarrioPropiedad(){
	return barrio;
}

string Propiedad::getTipoPropiedad(){
	return tipoPropiedad;
}


void Propiedad::setnumeroAlcobas(){
	cout << " Digite el numero de alcobas: " << endl;
	cin >> numeroAlcobas;
	this->numeroAlcobas = numeroAlcobas;
}

void Propiedad::setParqueadero(){
	cout << " Digite el numero de parqueaderos: " << endl;
	cin >> parqueadero;
	this->parqueadero = parqueadero;
}

void Propiedad::setBanos(){
	cout << " Digite el numero de banos: " << endl;
	cin >> banos;
	this->banos = banos;
}

void Propiedad::setArea(){
	cout << " Digite el area de la propiedad: " << endl;
	cin >> area;
	this->area = area;
}

void Propiedad::setTipoPropiedad(){
    int salida = 1, opcionUsuario;
	while(salida == 1){
		cout << " Digite alguna de estas opciones sobre tipo de propiedad:\n 1. Venta\n 2. Arrendamiento\n" << endl;  
		cin >> opcionUsuario;
		if(opcionUsuario < 1){
			cout << " Error, esta opcion no es valida" << endl; 
			salida = 1;
		}
		else if(opcionUsuario == 1){
			tipoPropiedad = "Venta";
			salida = 0;
		} 
		else if(opcionUsuario == 2){
			tipoPropiedad = "Arrendamiento";
			salida = 0;
		}
		else if(opcionUsuario > 2){
			cout << " Error!, esta opcion no es valida" << endl; 
			salida = 1;
		}
	}
	this->tipoPropiedad = tipoPropiedad;
}

void Propiedad::setTipo(){
    int salida2 = 1, opcionUsuario;
	while(salida2 == 1){
		cout << " Digite alguna de estas opciones sobre tipo de vivienda:\n 1. Apartamento\n 2. Apartaestudio\n 3. Casa\n 4. Lote\n 5. Casa con renta\n 6. Finca\n" << endl;  
		cin >> opcionUsuario;
		if(opcionUsuario < 1){
			cout << " Error, esta opcion no es valida" << endl; 
			salida2 = 1;
		}
		else if(opcionUsuario == 1){
			tipo = "Apartamento";
			salida2 = 0;
		} 
		else if(opcionUsuario == 2){
			tipo = "Apartaestudio";
			salida2 = 0;
		}
        else if(opcionUsuario == 3){
			tipo = "Casa";
			salida2 = 0;
		}
        else if(opcionUsuario == 4){
			tipo = "Lote";
			salida2 = 0;
		}
        else if(opcionUsuario == 5){
			tipo = "Casa_con_renta";
			salida2 = 0;
		}
        else if(opcionUsuario == 6){
			tipo = "Finca";
			salida2 = 0;
		}
		else if(opcionUsuario > 6){
			cout << " Error!, esta opcion no es valida" << endl; 
			salida2 = 1;
		}
	}
    this->tipo = tipo;
}

void Propiedad::setDescripcion(){
    fflush(stdin);
	cout << " Digite la descripcion: " << endl;
	getline(cin, descripcion);
    fflush(stdin);
	this->descripcion = descripcion;
}

void Propiedad::setBarrio(){
    fflush(stdin);
	cout << " Digite el barrio: " << endl;
	getline(cin, barrio);
    fflush(stdin);
	this->barrio = barrio;
}

void Propiedad::setPrecio(){
	cout << " Digite el precio de la propiedad: " << endl;
	cin >> precio;
	this->precio = precio;
}