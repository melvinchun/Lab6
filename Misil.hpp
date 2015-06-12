#pragma once
#include <string>
using std::string;

class Misil{
	double radio;
	double alcance;
	bool uso;
public:
	Misil();
	Misil(double radio, double alcance);
	const double getRadio()const; 
	const double getAlcance()const;
	void setUso(bool);
	const bool getUso()const;
	string toString()const;
};