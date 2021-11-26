/* Bebidas
José Emiliano Riosmena Castañón
A01704245 */
#ifndef BEBIDAS_H_
#define BEBIDAS_H_

#include <sstream>
using namespace std;
// Clase---------
class bebidas{
private:
	string bebida;
	float precio;
	int tam;
	
public:
	bebidas(){};
	bebidas(string beb, float prec, int ta): bebida(beb), precio(prec), tam(ta){};
		
	void set_bebida(string );
	void set_precio(float );
	void set_tam(int );
	string to_string();
};
// Funciones-------
void bebidas::set_bebida(string beb){
	bebida=beb;
}
void bebidas::set_precio(float prec){
	precio=prec;
}
void bebidas::set_tam(int ta){
	tam=ta;
}
string bebidas::to_string(){
	stringstream aux;
	aux<<bebida<<" "<<precio<<" "<<tam;
	return aux.str();
}
#endif
