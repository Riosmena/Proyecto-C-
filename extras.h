/* Extras
José Emiliano Riosmena Castañón
A01704245 */
#ifndef EXTRAS_H_
#define EXTRAS_H_

#include <sstream>
using namespace std;
// Clase---------
class extras{
private:
	string extra;
	float precio;
	int tam;
	
public:
	extras(){};
	extras(string ext, float prec, int ta): extra(ext), precio(prec), tam(ta){};
	
	void set_extra(string );
	void set_precio(float );
	void set_tam(int );
	string to_string();
};
// Funciones-------
void extras::set_extra(string ext){
	extra=ext;
}
void extras::set_precio(float prec){
	precio=prec;
}
void extras::set_tam(int ta){
	tam=ta;
}
string extras::to_string(){
	stringstream aux;
	aux<<extra<<" "<<precio<<" "<<tam;
	return aux.str();
}
#endif
