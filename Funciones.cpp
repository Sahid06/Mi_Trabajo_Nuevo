#include<iostream>
using namespace std;

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
    cout<<"Bienvenido "<<nombre;
}

int main()
{
    pedirN();
    mostrarN();


    return 0;
}