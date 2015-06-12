#pragma once
#include "Misil.hpp"
#include "Propulsores.hpp"
#include "Piloto.hpp"
#include <string>

class Avion{
	Misil misil;
	Propulsores propulsor;
	Piloto piloto;
public:
	Avion();
	Avion(Misil misil, Propulsores propulsor, Piloto piloto);
	string toString()const;
};