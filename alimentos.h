/* Alimentos
José Emiliano Riosmena Castañón
A01704245 */
#ifndef ALIMENTOS_H_
#define ALIMENTOS_H_
#include "menu.h"
#include <sstream>
using namespace std;
// Clase---------
class alimentos : public menu{
private:
	string comida;
	
public:
	alimentos() : menu(){
		comida="";
	}
	alimentos(string com, float prec, int ta){
		comida=com;
		precio=prec;
		tam=ta;
	}
	string get_comida();
	void set_comida(string );

};
// Funciones-------
string alimentos::get_comida(){
	return comida;
}
void alimentos::set_comida(string com){
	comida=com;
}
#endif
