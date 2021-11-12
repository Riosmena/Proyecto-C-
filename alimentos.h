/* Alimentos
José Emiliano Riosmena Castañón
A01704245 */

#include <string>
using namespace std;
// Clase---------
class alimentos{
private:
	string comida;
	float precio;
	string tam;
	
public:
	alimentos(): comida(""), precio(0.0), tam("")	{};
	alimentos(string com, float prec, string ta): comida(com), precio(prec), tam(ta){};
	
	string get_comida();
	float get_precio();
	string get_tam();
	
	void set_comida(string );
	void set_precio(float );
	void set_tam(string );
};
// Funciones-------
string alimentos::get_comida(){
	return comida;
}
float alimentos::get_precio(){
	return precio;
}
string alimentos::get_tam(){
	return tam;
}
void alimentos::set_comida(string com){
	comida=com;
}
void alimentos::set_precio(float prec){
	precio=prec;
}
void alimentos::set_tam(string ta){
	tam=ta;
}
