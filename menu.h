/* Menú
José Emiliano Riosmena Castañón
A01704245
*/
#ifndef MENU_H_
#define MENU_H_

#include "alimentos.h"
#include "bebidas.h"
#include "extras.h"
using namespace std;

class menu{
	
	private:
	alimentos alimento[6];
	bebidas bebidal[7];
	extras extral[5];
	
	public:
	menu(){};
	void agrega_alimento(string, float, string, int);
	void agrega_bebida(string, float, int, int);
	void agrega_extra(string, float, int, int);
	string muestra_alimento();	
	string muestra_bebidal();
	string muestra_extral();
};

void menu::agrega_alimento(string comida, float precio, string tam, int i){
	alimento[i] = alimentos(comida, precio, tam);
}
void menu::agrega_bebida(string bebida, float precio, int tam, int i){
	bebidal[i] = bebidas(bebida, precio, tam);
}
void menu::agrega_extra(string extra, float precio, int tam, int i){
	extral[i] = extras(extra, precio, tam);
}
string menu::muestra_alimento(){
	stringstream aux;
	for (int i=0; i<6; i++){
		aux<<"Alimento "<< i <<" : "<<alimento[i].to_string()<<endl;
	}
	return aux.str();
}
string menu::muestra_bebidal(){
	stringstream aux;
	for (int i=0; i<7; i++){
		aux<<"Bebida "<< i <<" : "<<bebidal[i].to_string()<<endl;
	}
	return aux.str();
}
string menu::muestra_extral(){
	stringstream aux;
	for (int i=0; i<5; i++){
		aux<<"Extra "<< i <<" : "<<extral[i].to_string()<<endl;
	}
	return aux.str();
}

#endif
