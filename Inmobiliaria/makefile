all: compilar
compilar: propiedad registroPropiedades main
		g++ -o Salida propiedad.o registroPropiedades.o main.o 
propiedad: propiedad.h propiedad.cpp
		g++ -c propiedad.cpp
registroPropiedades: registroPropiedades.h registroPropiedades.cpp
		g++ -c registroPropiedades.cpp
main: main.cpp propiedad.h registroPropiedades.h  
	  g++ -c main.cpp