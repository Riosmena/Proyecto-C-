/* Bebidas
José Emiliano Riosmena Castañón
A01704245 */

#include <string>
using namespace std;
// Clase---------
class bebidas{
private:
	string bebida;
	float precio;
	int tam;
	
public:
	bebidas(): bebida(""), precio(0.0), tam(0)	{};
	bebidas(string beb, float prec, int ta): bebida(beb), precio(prec), tam(ta){};
	
	string get_bebida();
	float get_precio();
	int get_tam();
	
	void set_bebida(string );
	void set_precio(float );
	void set_tam(int );
};
// Funciones-------
string bebidas::get_bebida(){
	return bebida;
}
float bebidas::get_precio(){
	return precio;
}
int bebidas::get_tam(){
	return tam;
}
void bebidas::set_bebida(string beb){
	bebida=beb;
}
void bebidas::set_precio(float prec){
	precio=prec;
}
void bebidas::set_tam(int ta){
	tam=ta;
}
