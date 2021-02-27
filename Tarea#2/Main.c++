/*Ejercicio 1: Construya una clase llamada Rectangulo que tenga los siguientes
atributos: largo y ancho, y los siguientes metodos: perimetro() y area()
Modificado de Curso de programación en c++ 
Canal programación ATS
*/

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class Rectangulo
{
private: //Atributos
    float largo, ancho;

public:                       //Metodos
    Rectangulo(float largo, float ancho); //Constructor
    Rectangulo();
    void calcularPerimetro();
    void calcularArea();
    void setLargo( float largo );
    void setAncho( float ancho );
};

void Rectangulo::setAncho ( float ancho ){
    this->ancho = ancho;
    return;
}

void Rectangulo::setLargo( float largo ){
    this->largo = largo;
    return;
}

class Circulo
{
private: //Atributos
    float radio, PI=3.1416;

public:                       //Metodos
    Circulo(float radio); //Constructor
    Circulo();
    void calcularPerimetro();
    void calcularArea();
    float getRadio();
    void setRadio( float radio );
};

Circulo::Circulo(float radio)
{
    this->radio = radio;
}

void Circulo::calcularPerimetro()
{
    float perimetro;

    perimetro = 2*PI*radio;

    cout << "El perimetro del circulo es: " << perimetro << endl;
}

void Circulo::calcularArea()
{
    float area;
    area = PI*(pow(radio, 2));
    cout << "El area del circulo es: " << area << endl;
}

void Circulo::setRadio( float radio ){
    this->radio = radio;
    return;
}

float Circulo::getRadio(){
    return radio;
}

Rectangulo::Rectangulo(float largo, float ancho){
    this->largo = largo;
    this->ancho = ancho;
}
Rectangulo::Rectangulo(){
    this->ancho = 0;
    this->largo = 0;
}

Circulo::Circulo(){
    this->radio = 0;
}

void Rectangulo::calcularPerimetro()
{
    float perimetro;

    perimetro = (2 * largo) + (2 * ancho);

    cout << "El perimetro es: " << perimetro << endl;
}

void Rectangulo::calcularArea()
{
    float area;

    area = largo * ancho;

    cout << "El area es: " << area << endl;
}



class Triangulo{
    private:
        float lado1, lado2, base, altura;
    public:
        Triangulo();
        Triangulo( float lado1, float lado2, float base, float altura );
        void calcularArea();
        void calcularPerimetro();
        void setLado1( float lado1 );
        void setLado2( float lado2 );
        void setBase( float base );
        void setAltura( float altura );
};

Triangulo::Triangulo(float lado1, float lado2, float base, float altura){
    this->lado1 = lado1;
    this->lado2 = lado2;
    this->base = base;
    this->altura = altura;
}

Triangulo::Triangulo(){
    this->lado1 = 0;
    this->lado2 = 0;
    this->base = 0;
    this->altura = 0;
}

void Triangulo::calcularPerimetro(){
    float perimetro;

    perimetro = lado1+lado2+base;

    cout << "El perimetro del triangulo es: " << perimetro << endl;
}

void Triangulo::calcularArea(){
    float area;

    area = (base * altura)/2;

    cout << "El area del triangulo es: " << area << endl;
}

void Triangulo::setLado1( float lado1 ){
    this->lado1 = lado1;
    return;
}

void Triangulo::setLado2( float lado2 ){
    this->lado2 = lado2;
    return;
}
void Triangulo::setBase( float base ){
    this->base = base;
    return;
}
void Triangulo::setAltura( float altura ){
    this->altura = altura;
    return;
}


int main()
{
    int opcion;
    const int CAPACIDAD = 10;
    int Totalcirculos = 0, Totalrectangulos = 0,Totaltriangulos = 0, i;
    Rectangulo rectangulos [ CAPACIDAD ];
    Circulo circulos [ CAPACIDAD ];
    Triangulo triangulos [ CAPACIDAD ];

    do{
        cout << "Menu de las figuras\n" << endl;
        cout << "--------------------------" << endl;
        cout << "1. Rectangulo" << endl;
        cout << "2. Circulo" << endl;
        cout << "3. Triangulo" << endl;
        cout << "0. Salir" << endl;
        cout << "Elije una opcion: ";
        cin >> opcion;

        switch (opcion){
        case 1:{
            if ( Totalrectangulos  < CAPACIDAD ){
                float largo, ancho;
                cout << "\nDigite el largo"  << endl;
                cin >> largo;
                cout << "\nDigite el ancho"  << endl;
                cin >> ancho;
                rectangulos[ Totalrectangulos ].setAncho( ancho );
                rectangulos[ Totalrectangulos ].setLargo( largo );
                Totalrectangulos++;
                } else {
                    cout << "ya estan llenos los espacios de los rectangulos" << endl;
                }
                for (i = 0; i < Totalrectangulos; i++){
                    cout << "Rectangulo " << i + 1 << ":" << endl;
                    rectangulos[ i ].calcularArea();
                    rectangulos[ i ].calcularPerimetro();
                }
            }
            break;
        case 2:{
            if ( Totalcirculos  < CAPACIDAD ){
                    float radiocirculo,radio;
                    cout << "\nDigite el radio del circulo" << endl;
                    cin >> radio;
                    circulos[ Totalcirculos ].setRadio( radio );
                    Totalcirculos ++;
                } 
                else{
                    cout << "No hay mas espacios para circulos" << endl;
                }
                for (i = 0; i < Totalcirculos; i++){
                    cout << "Circulo " << i + 1 << ":" << endl;
                    circulos[ i ].calcularArea();
                    circulos[ i ].calcularPerimetro();
                }
            }
            break;
        case 3:{
            if ( Totalcirculos  < CAPACIDAD ){
                    float base,altura,lado1,lado2;
                    cout << "\nDigite la base del triangulo" << endl;
                    cin >> base;
                    cout << "\nDigite la altura del triangulo" << endl;
                    cin >> altura;
                    cout << "\nDigite el lado 1 del triangulo" << endl;
                    cin >> lado1;
                    cout << "\nDigite el lado 2 del  triangulo" << endl;
                    cin >> lado2;
                    triangulos[ Totaltriangulos ].setLado1( lado1 );
                    triangulos[ Totaltriangulos ].setLado2( lado2 );
                    triangulos[ Totaltriangulos ].setBase( base );
                    triangulos[ Totaltriangulos ].setAltura( altura );
                    Totaltriangulos ++;
                } 
                else{
                    cout << "No hay mas espacios para triangulos" << endl;
                }
                for (i = 0; i < Totaltriangulos; i++){
                    cout << "Circulo " << i + 1 << ":" << endl;
                    triangulos[ i ].calcularArea();
                    triangulos[ i ].calcularPerimetro();
                }
            }
            break;
        default:{
            cout << "Opcion no valida.\n";
            }
            break;
        }

    }while(opcion!=0);
    system("pause");
    return 0;
}