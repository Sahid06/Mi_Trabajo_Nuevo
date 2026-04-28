#include<iostream>
using namespace std;

float peso, talla,imc;
string nombre;

void pedirN()
{
    cout<<"HOLA QUE TAL "<<endl;
    cout<<"Cual es tu nombre: "<<endl;
    getline(cin, nombre);

}

void mostrarN()
{
    cout<<"QUE TAL CABALLERO DE ELEGANCIA\n";
    cout<<"Bienvenido "<<nombre<<endl;
    cout<<"SU IMC ES "<< imc;
}
void pedirIMC()
{
    cout<<"INGRESE TALLA"<<endl;
    cin>>talla;
    cout<<"INGRESE PESO"<<endl;
    cin>>peso;
    imc=peso/(talla*talla);
}

int main()
{
    pedirN();
    pedirIMC();
    mostrarN();


    return 0;
}