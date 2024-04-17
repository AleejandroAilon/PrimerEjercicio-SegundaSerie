#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream archivo("empleados.txt");
	
	if(!archivo.is_open()){
		cout << "Este archivo no pudo ser abierto." << endl;
		return 1;
	} // Fin del if
	
	string nombre, apellido;
	int edad, salario;
	
	while(true){
		cout << "Ingrese su nombre o 'fin' para salir: ";
		getline(cin, nombre);
		
		if(nombre == "fin") break;
		
		cout << "Ingrese su apellido: ";
		getline(cin, apellido);
		
		
		cout << "Ingrese su edad:  ";
		cin >> edad;
		
		cout << "Ingrese su salario: ";
		cin >> salario;
		cin.ignore();
		
		
		archivo << nombre << " " << apellido << " " << edad << " " << salario << endl;
	} // Fin del while
	
	archivo.close();
	
	ifstream Leer("empleados.txt");
	if(!Leer.is_open()){
		cout << "Este archivo genera error." << endl;
		return 1;
	}
	
	cout << "Ahora sus datos estan guardados en el archivo." << endl;
	while(Leer >> nombre >> apellido >> edad >> salario){
		cout << "Nombre: " << nombre << ". Apellido: " << apellido << ". Edad: " << edad << ". Salario: " << salario << endl;
	} // Fin del while
	
	Leer.close();
	
	return 0;
	
}




