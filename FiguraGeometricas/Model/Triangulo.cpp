#include "triangulo.h"

//CONSTRUCTORES TRIANGULO

Triangulo::Triangulo() {}

Triangulo::Triangulo(float base, float altura)
{

    this->base = base;
    this->altura = altura;
}

//METODOS TRIANGULO

void Triangulo::calcularArea()
{
    float area;
    this->area = (this->base * this->altura) / 2;
}

void Triangulo::calcularPerimetro()
{
    float perimetro, temp;
    temp = this->base / 2;
    this->perimetro = 2 * ((sqrt((temp * temp)) + (this->altura * this->altura))) + this->base;
}


void Triangulo::mostrarFigura()
{
    cout << "La base: " << base << " -- "
         << "La altura: " << altura << endl;
    if (this->area == 0) // si no he calculado el area
    {
        this->calcularArea();
    }
    if (this->perimetro == 0)
    {
        this->calcularPerimetro();
    }
    cout << "El area del triangulo es: " << this->area << endl;
    cout << "El perimetro del triangulo es : " << this->perimetro << endl;

    // LLamo al mostrarFigura delegado
    FiguraGeometrica::mostrarFigura();
}