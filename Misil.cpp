#include "Misil.hpp"
#include <sstream>
#include <string>

using std::string;
using std::stringstream;


Misil::Misil(){
	radio=0.0;
	alcance=0.0;
	uso=true;
}

Misil::Misil(double radio, double alcance){
	if(radio>0){
		this->radio=radio;
	}else{
		throw "El radio no puede ser menor o igual que 0";
	}

	if(alcance>0){
		this->alcance=alcance;
	}else{
		throw "El alcance no puede ser menor o igual que 0";
	}
	uso=true;
}

const double Misil::getRadio()const{
	return radio;
} 

const double Misil::getAlcance()const{
	return alcance;
}

void Misil::setUso(bool uso){
	this->uso=uso;
}

const bool Misil::getUso()const{
	return uso;
}

string Misil::toString()const{
	stringstream ss;
    ss <<"Radio = " <<radio << " " <<"Alcance = "<<alcance; 
    return ss.str();
}