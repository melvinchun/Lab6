#include "Propulsores.hpp"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Propulsores::Propulsores(){
	potencia=0;
	serie="";
	uso=true;
}

Propulsores::Propulsores(int potencia, string serie){
	if(potencia>30 && potencia<50){
		this->potencia=potencia;
	}else{
		throw "No esta en el rango de potencia";
	}
	this->serie=serie;
	uso=true;
}

const int Propulsores::getPotencia()const{
	return potencia;
}

const string Propulsores::getSerie()const{
	return serie;
}

void Propulsores::setUso(bool uso){
	this->uso=uso;
}

const bool Propulsores::getUso()const{
	return uso;
}

string Propulsores::toString()const{
	stringstream ss;
    ss <<"Potencia = " <<potencia << " " <<"serie = "<<serie; 
    return ss.str();
}