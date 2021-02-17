#include <iostream>
#include <stdlib.h>

using namespace std;


void Sacar_iva(int valor){
    int valorTotal_iva,iva;
    iva=valor*0.19;
    valorTotal_iva=valor+iva;
    cout<<"\nel precio total con el iva es:\n"<< valorTotal_iva<<endl;
}


int main(){
    int valor;
    cout<<"Digite el precio a calcular el iva:\n"; 
    cin >> valor;
    Sacar_iva(valor);
    system("pause");
    return 0;
}


