#include <string>
#include <cstdlib>
#include <iostream>
#include <vector>

#include "Misil.hpp"
#include "Propulsores.hpp"
#include "Piloto.hpp"

using namespace std;

void agregar(vector<Misil*>&, vector<Propulsores*>&, vector<Piloto*>&);
void eliminar(vector<Misil*>&, vector<Propulsores*>&, vector<Piloto*>&);
void Listar(vector<Misil*>&, vector<Propulsores*>&, vector<Piloto*>&);

int main(int argc, char const *argv[]){
	int op=0;
	vector<Misil*> misiles;
	vector<Propulsores*> propulsores;
	vector<Piloto*> pilotos;
	do{
		try{
			cout<<"Menu\n1. Agregar Elementos\n2. Eliminar Elementos\n3. Listar componentes disponibles\n4. Salir\nIngrese su opcion: ";
			cin>>op;
			if(op==1){
				cout<<"Selecciono Agregar Elemento"<<endl<<endl;
				agregar(misiles, propulsores, pilotos);
				cout<<"se agrego exitosamente"<<endl<<endl;
			}else if(op==2){
				cout<<"Selecciono Eliminar Elemento"<<endl<<endl;
				eliminar(misiles, propulsores, pilotos);
				cout<<"se elimino exitosamente"<<endl<<endl;
			}else if(op==3){
				cout<<"Selecciono Listar Aviones"<<endl<<endl;

			}else if(op==4){
				cout<<"Salir"<<endl<<endl;
			}else{
				cout<<"Opcion no valida"<<endl<<endl;
			}
		

		}catch (const char* str){
       		cerr << "Error: " << str << endl;
    	}

	}while(op!=3);
	return 0;
}

void agregar(vector<Misil*>& misiles, vector<Propulsores*>& propulsores, vector<Piloto*>& pilotos){
	int op=0;
	cout<<"Menu\n1. Agregar Piloto\n2. Agregar Misil\n3. Agregar Propulsor\n4. Salir\nIngrese su opcion: ";
	cin>>op;

	if(op==1){
		string nombre;
		int edad, age;
		cout<<"Ingrese el nombre del piloto :";
		getline (cin, nombre);
		getline (cin, nombre);
		cout<<"Ingrese la edad: ";
		cin>>edad;
		cout<<"Ingrese los años de experiencia: ";
		cin>>age;
		pilotos.push_back(new Piloto(nombre, edad, age));


	}else if(op==2){
		double radio, alcance;
		cout<<"Ingrese el radio del misil: ";
		cin>>radio;
		cout<<"Ingrese el alcance del misil: ";
		cin>>alcance;
		misiles.push_back(new Misil(radio, alcance));

	}else if(op==3){
		int potencia;
		string serie;
		cout<<"Ingrese la potencia del propulsor: "<<endl;
		cin>>potencia;
		cout<<"Ingrese el numero de serie del propulsor: "<<endl;
		getline (cin, serie);
		getline (cin, serie);
		propulsores.push_back(new Propulsores(potencia, serie));

	}else if(op==4){
		cout<<"Salir"<<endl;
	}else{
		cout<<"Opcion no valida"<<endl;
	}
}

void eliminar(vector<Misil*>& misiles, vector<Propulsores*>& propulsores, vector<Piloto*>& pilotos){
	int op=0;
	cout<<"Menu\n1. Eliminar Piloto\n2. Eliminar Misil\n3. Eliminar Propulsor\n4. Salir\nIngrese su opcion: ";
	cin>>op;

	if(op==1){
		int op1;
		if(pilotos.size()>0){
			cout<<endl<<"Lista de Pilotos"<<endl;
			for (int i=0; i< pilotos.size(); i++){
       			cout << (i+1)<<". "<< pilotos[i]->toString() << endl;
       		}
       		cout<<endl<<"Seleccione un piloto a eliminar: ";
	    	cin>>op1;
	    	op1--;
	    	if(op1>=0 && op1<pilotos.size()){
	    		pilotos.erase(pilotos.begin()+op1);
	    	}else{
	    		throw "Ha ocurrido un error! ";
	    	}
    	}else{
    		throw "No hay elementos ";
    	}
    	

	}else if(op==2){
		int op1;
		if(misiles.size()>0){
			cout<<endl<<"Lista de Misiles"<<endl;
			for (int i=0; i< misiles.size(); i++){
       			cout << (i+1)<<". "<< misiles[i]->toString() << endl;
       		}
       		cout<<endl<<"Seleccione un misil a eliminar: ";
    		cin>>op1;
    		op1--;
    		if(op1>=0 && op1<misiles.size()){
    			misiles.erase(misiles.begin()+op1);
    		}else{
    			throw "Ha ocurrido un error! ";
    		}
    	}else{
    		throw "No hay elementos ";
    	}


	}else if(op==3){
		int op1;
		if(propulsores.size()>0){
			cout<<endl<<"Lista de Propulsores"<<endl;
			for (int i=0; i< propulsores.size(); i++){
       			cout << (i+1)<<". "<< propulsores[i]->toString() << endl;
       		}
       		cout<<endl<<"Seleccione un propulsor a eliminar: ";
    		cin>>op1;
    		op1--;
    		if(op1>=0 && op1<propulsores.size()){
    			propulsores.erase(propulsores.begin()+op1);
    		}else{
    			throw "Ha ocurrido un error! ";
    		}
    	}else{
    		throw "No hay elementos ";
    	}

	}else if(op==4){
		cout<<"Salir"<<endl;
	}else{
		cout<<"Opcion no valida"<<endl;
	}
}

void Listar(vector<Misil*>& misiles, vector<Propulsores*>& propulsores, vector<Piloto*>& pilotos){
	cout<<endl<<"Lista de Pilotos"<<endl;
		if(pilotos.size()>0){
			for (int i=0; i< pilotos.size(); i++){
       			cout << (i+1)<<". "<< pilotos[i]->toString() << endl;
       		}

		}
		if(misiles.size()>0){
			for (int i=0; i< misiles.size(); i++){
       			cout << (i+1)<<". "<< misiles[i]->toString() << endl;
       		}

		}
		if(propulsores.size()>0){
			for (int i=0; i< propulsores.size(); i++){
       			cout << (i+1)<<". "<< propulsores[i]->toString() << endl;
       		}

		}
}
