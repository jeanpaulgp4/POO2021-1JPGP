#include <iostream>
#include <stdlib.h>

using namespace std;

int Sacar_edad(){
    int edad;
    cout<<"Digite su edad:\n"; 
    cin >> edad;
    return edad;
}

float Sacar_estatura(){
    float estatura;
    cout<<"Digite su estatura:\n"; 
    cin >> estatura;
    return estatura;
}


int main(){
    int Edad;
    char Sexo;
    float Estatura;
    Estatura=Sacar_estatura();
    Edad=Sacar_edad();
    cout<<"Digite su sexo: \n";
    cin>>Sexo;
    cout<<"la edad es:\n"<<Edad<<"\nsu sexo es:\n"<<Sexo<<"\nsu estatura es:\n"<<Estatura<<"\n";
    system("pause");
    return 0;
}


