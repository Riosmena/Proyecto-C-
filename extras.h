/* Extras
José Emiliano Riosmena Castañón
A01704245 */
#ifndef EXTRAS_H_
#define EXTRAS_H_
#include <sstream>
#include "menu.h"
using namespace std;
// Clase---------
class extras : public menu{
private:
	string extra;
	
public:
	extras() : menu(){
		extra="";
	}
	extras(string ext, float prec, int ta){
		extra=ext;
		precio=prec;
		tam=ta;
	}
	string get_extra();
	void set_extra(string );
};
// Funciones-------
string extras::get_extra(){
	return extra;
}
void extras::set_extra(string ext){
	extra=ext;
}
#endif
