#pragma once
#include <string>
using std::string;

class Propulsores{
	int potencia;
	string serie;
	bool uso;
public:
	Propulsores();
	Propulsores(int potencia, string serie);
	const int getPotencia()const;
	const string getSerie()const;
	void setUso(bool);
	const bool getUso()const;
	string toString()const;
};
