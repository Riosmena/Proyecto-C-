/* Alimentos
José Emiliano Riosmena Castañón
A01704245 */
#ifndef ALIMENTOS_H_
#define ALIMENTOS_H_

#include <sstream>
using namespace std;
// Clase---------
class alimentos{
private:
	string comida;
	float precio;
	string tam;
	
public:
	alimentos(){};
	alimentos(string com, float prec, string ta): comida(com), precio(prec), tam(ta){};
	
	void set_comida(string );
	void set_precio(float );
	void set_tam(string );
	string to_string();
};
// Funciones-------
void alimentos::set_comida(string com){
	comida=com;
}
void alimentos::set_precio(float prec){
	precio=prec;
}
void alimentos::set_tam(string ta){
	tam=ta;
}
string alimentos::to_string(){
	stringstream aux;
	aux<<comida<<" "<<precio<<" "<<tam;
	return aux.str();
}
#endif
