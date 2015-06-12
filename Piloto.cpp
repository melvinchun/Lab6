#include "Piloto.hpp"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Piloto::Piloto(){
	nombre="";
	edad=0;
	age=0;
	uso=true;

}

Piloto::Piloto(string nombre, int edad, int age){
	this->nombre=nombre;
	if(edad>0){
		this->edad=edad;
	}else{
		throw "La edad no puede ser menor o igual que 0";
	}
	
	if(age>0){
		this->age=age;
	}else{
		throw "La edad de experiencia no puede ser menor o igual que 0";
	}
	uso=true;

}

const string Piloto::getNombre()const{
	return nombre;
}

const int Piloto::getEdad()const{
	return edad;
}

const int Piloto::getAge()const{
	return age;
}

void Piloto::setUso(bool uso){
	this->uso=uso;
}

const bool Piloto::getUso()const{
	return uso;
}

string Piloto::toString()const{
	stringstream ss;
    ss <<"Nombre = " <<nombre << " " <<"Edad = "<<edad<< " " <<"Anos de Experiencia = "<<age; 
    return ss.str();
}