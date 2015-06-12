#pragma once
#include <string>
using std::string;
class Piloto{
	string nombre;
	int edad;
	int age;
	bool uso;
public:
	Piloto();
	Piloto(string nombre, int edad, int age);
	const string getNombre()const; 
	const int getEdad()const;
	const int getAge()const;
	void setUso(bool);
	const bool getUso()const;
	string toString()const;
};