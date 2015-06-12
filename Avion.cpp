#include "avion.hpp"
#include <sstream>
#include <string>

using std::string;
using std::stringstream;


Avion::Avion(Misil misil, Propulsores propulsor, Piloto piloto){
	this->misil=misil;
	this->propulsor=propulsor;
	this->piloto=piloto;
}

string Avion::toString()const{
	stringstream ss;
    ss <<"Propulsor = " <<propulsor << " " <<"Misil = "<<misil<< " " <<"Piloto = "<<piloto; 
    return ss.str();
}