#include "cuadrado.h"

//CONSTRUCTORES CUADRADO

Cuadrado::Cuadrado() {}

Cuadrado::Cuadrado(float lado)
{

    this->lado = lado;
}

//METODOS CUADRADO

void Cuadrado::calcularArea()
{
    float area;
    this->area = this->lado * this->lado;
}

void Cuadrado::calcularPerimetro()
{
    float perimetro;
    this->perimetro = this->lado * 4;
}


void Cuadrado::mostrarFigura()
{
    cout << "El lado: " << lado << endl;
    if (this->area == 0) // si no he calculado el area
    {
        this->calcularArea();
    }
    if (this->perimetro == 0)
    {
        this->calcularPerimetro();
    }
    cout << "El area del cuadrado es: " << this->area << endl;
    cout << "El perimetro del cuadrado es : " << this->perimetro << endl;

    // LLamo al mostrarFigura delegado
    FiguraGeometrica::mostrarFigura();
}