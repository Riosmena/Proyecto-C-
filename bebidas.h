/* Bebidas
José Emiliano Riosmena Castañón
A01704245 */
#ifndef BEBIDAS_H_
#define BEBIDAS_H_
#include "menu.h"
#include <sstream>
using namespace std;
// Clase---------
class bebidas : public menu{
private:
	string bebida;
	
public:
	bebidas() : menu(){
		bebida="";
	}
	bebidas (string beb, float prec, int ta){
		bebida=beb;
		precio=prec;
		tam=ta;
	}
	string get_bebida();
	void set_bebida(string );
};
// Funciones-------
string bebidas::get_bebida(){
	return bebida;
}
void bebidas::set_bebida(string beb){
	bebida=beb;
}
#endif
