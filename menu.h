/* Menú
José Emiliano Riosmena Castañón
A01704245
*/
#ifndef MENU_H_
#define MENU_H_
using namespace std;
//Clase
class menu{
protected:
	float precio;
	int tam;
	
public:
	menu(): precio(0.0), tam(0){};
	menu(float prec, int ta){
		precio=prec;
		tam=ta;
	} 
	float get_precio();
	int get_tam();
	void set_precio(float );
	void set_tam(int );
};
//Funciones
float menu::get_precio(){
	return precio;
}
int menu::get_tam(){
	return tam;
}
void menu::set_precio(float prec){
	precio=prec;
}
void menu::set_tam(int ta){
	tam=ta;
}
#endif
