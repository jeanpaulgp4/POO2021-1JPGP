#include "../Controller/FigurasController.h"

// Inicializacion constante estatica para elemento compartido
const int FigurasController::MAX_ITEMS = 10;

void FigurasController::agregarRectagulo(const float largo, const float ancho)
{
    try{
        if (listaRectangulo.size() < MAX_ITEMS){
            cout << "Agrego rectangulo" << endl;
            Rectangulo *pRectTemp = new Rectangulo(largo, ancho);
            listaRectangulo.push_back(*pRectTemp);
            pListaFiguras.push_back(pRectTemp);
        }
        else{
            throw "\nSe sobrepasa el limite\n";
        }
    }
    catch(const string *error){
        cout << " Error: " << error << endl;
    }
}

void FigurasController::agregarCirculo(float radio)
{
    try{
        if (listaCirculo.size() < MAX_ITEMS){
            cout << "Agrego circulo" << endl;
            Circulo *pcirculoTemp = new Circulo(radio);
            listaCirculo.push_back(*pcirculoTemp);
            pListaFiguras.push_back(pcirculoTemp);
        }
        else{
            throw "\nSe sobrepasa el limite\n";
        }
    }
    catch(const string *error){
        cout << " Error: " << error << endl;
    }
}

void FigurasController::agregarCuadrado(float lado)
{
    try{
        if (listaCuadrado.size() < MAX_ITEMS){
            cout << "Agrego cuadrado" << endl;
            Cuadrado *pcuadradoTemp = new Cuadrado( lado);
            listaCuadrado.push_back(*pcuadradoTemp);
            pListaFiguras.push_back(pcuadradoTemp);
        }
        else{
            throw "\nSe sobrepasa el limite\n";
        }
    }
    catch(const string *error){
        cout << " Error: " << error << endl;
    }
}

void FigurasController::agregarTriangulo(float base, float altura)
{
    try
    {
       if (listaTriangulo.size() < MAX_ITEMS){
            cout << "Agrego triangulo" << endl;
            Triangulo *ptrianguloTemp = new Triangulo(base, altura);
            listaTriangulo.push_back(*ptrianguloTemp);
            pListaFiguras.push_back(ptrianguloTemp);
        }
        else{
            throw "\nSe sobrepasa el limite\n";
        }
    }
    catch(const string *error){
        cout << " Error: " << error << endl;
    }
}

void FigurasController::llenarListaTodosDummy()
{
    Circulo *pMiCirculo = new Circulo(10);
    Rectangulo *pMiRectangulo = new Rectangulo(10, 10);
    Rectangulo *pMiRectangulo2 = new Rectangulo(20, 20);
    Cuadrado *pMicuadrado = new Cuadrado(2);
    Triangulo *pMitriangulo = new Triangulo(5,2);
    int arreglo[10];
    this->pListaFiguras.push_back(pMiCirculo);
    this->pListaFiguras.push_back(pMiRectangulo);
    this->pListaFiguras.push_back(pMiRectangulo2);
    this->pListaFiguras.push_back(pMicuadrado);
    this->pListaFiguras.push_back(pMitriangulo);
}

list<Rectangulo> &FigurasController::getListaRectangulo()
{
    // Creo la  referencia
    list<Rectangulo> &lista = listaRectangulo;
    return lista;
}

list<Triangulo> &FigurasController::getListaTriangulo()
{
    // Creo la  referencia
    list<Triangulo> &lista = listaTriangulo;
    return lista;
}

list<Cuadrado> &FigurasController::getListaCuadrado()
{
    // Creo la  referencia
    list<Cuadrado> &lista = listaCuadrado;
    return lista;
}

list<FiguraGeometrica *> &FigurasController::getListaFiguras()
{
    return pListaFiguras;
}

Rectangulo &FigurasController::encontrarMayorAncho()
{
    bool isFirst = true;
    int mayorAncho = 0;
    Rectangulo *pRectanguloMayor = NULL;
    for (list<Rectangulo>::iterator it = listaRectangulo.begin(); it != listaRectangulo.end(); ++it)
    {
        if (isFirst)
        {
            // Se inicializa el mayor ancho con el primer elemento
            int mayorAncho = listaRectangulo.begin()->getAncho();
            isFirst = false;
            pRectanguloMayor = &(*it); // It es un apuntador, para acceder al rectangulo se tiene que acceder al contenido
        }
        else
        {
            if (it->getAncho() > pRectanguloMayor->getAncho())
            {
                // Actaulizar el mayor
                pRectanguloMayor = &(*it);
            }
        }
    }
    // Se obtien el contenido del apuntador para luego retorar la referencia
    // a fin de facilitar el manejo de los objetos posteriormente
    return *pRectanguloMayor;
}