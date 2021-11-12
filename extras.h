/* Extras
José Emiliano Riosmena Castañón
A01704245 */

#include <string>
using namespace std;
// Clase---------
class extras{
private:
	string extra;
	float precio;
	int tam;
	
public:
	extras(): extra(""), precio(0.0), tam(0){};
	extras(string ext, float prec, int ta): extra(ext), precio(prec), tam(ta){};
	
	string get_extra();
	float get_precio();
	int get_tam();
	
	void set_extra(string );
	void set_precio(float );
	void set_tam(int );
};
// Funciones-------
string extras::get_extra(){
	return extra;
}
float extras::get_precio(){
	return precio;
}
int extras::get_tam(){
	return tam;
}
void extras::set_extra(string ext){
	extra=ext;
}
void extras::set_precio(float prec){
	precio=prec;
}
void extras::set_tam(int ta){
	tam=ta;
}
