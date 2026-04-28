#include<iostream>
#include<string>
using namespace std;
class Persona{
	public:
	string nombre,nacionalidad;
	int edad;
	float peso,altura;
	
		void Mostrar()
		{
			cout<<"Me llamo "<<nombre<<" y tengo "<<edad<<" ayos, "<<"peso "<<peso<<", mi altura es "<<altura<<" y soy de "<<nacionalidad;
		}	
};
int main(){

	Persona num1;
	num1.nombre="Samir";
	num1.edad=18;
	num1.peso=71;
	num1.altura=1.80;
	num1.nacionalidad="peruana";
	num1.Mostrar();
	return 0;
}