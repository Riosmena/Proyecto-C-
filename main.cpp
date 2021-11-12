/* Cafetería
José Emiliano Riosmena Castañón
A01704245
Primer avance */

#include <iostream>
#include <string>
#include "alimentos.h"
#include "bebidas.h"
#include "extras.h"
using namespace std;

int main(){
	
	cout<<"¡Bienvenido!"<< endl
		<<"Elige una opción"<< endl;
		
	cout<<"1. Alimentos" << " "
		<<"2. Bebidas" << " "\
		<<"3. Extras" << " "\
		<<"4. Salir" << endl;
		
	int opcion;
	cin >> opcion;
	if (opcion==1) {
			
		alimentos alimento1("Hamburgesa", 64.50, "M");
		cout<<alimento1.get_comida() << " "
		;cout<<alimento1.get_precio() << " "\
		;cout<<alimento1.get_tam() << endl;
		
		alimentos alimento2("Quesadilla", 28.30, "C");
		cout<<alimento2.get_comida() << " "
		;cout<<alimento2.get_precio() << " "\
		;cout<<alimento2.get_tam() << endl;
		
		alimentos alimento3("Pizza", 139.99, "G");
		cout<<alimento3.get_comida() << " "
		;cout<<alimento3.get_precio() << " "\
		;cout<<alimento3.get_tam() << endl;
			
	} else if (opcion==2) {
		
		bebidas bebida1("Refresco", 15.00, 600);
		cout<<bebida1.get_bebida() << " "
		;cout<<bebida1.get_precio() << " "\
		;cout<<bebida1.get_tam() << endl;
		
		bebidas bebida2("Cafe", 27.50, 281);
		cout<<bebida2.get_bebida() << " "
		;cout<<bebida2.get_precio() << " "\
		;cout<<bebida2.get_tam() << endl;
		
		bebidas bebida3("Agua", 9.00, 600);
		cout<<bebida3.get_bebida() << " "
		;cout<<bebida3.get_precio() << " "\
		;cout<<bebida3.get_tam() << endl;
		
		bebidas bebida4("Jugo", 24.00, 412);
		cout<<bebida4.get_bebida() << " "
		;cout<<bebida4.get_precio() << " "\
		;cout<<bebida4.get_tam() << endl;
		
	} else if (opcion==3) {
		
		extras extra1("Papas a la francesa", 9.50, 50);
		cout<<extra1.get_extra() << " "
		;cout<<extra1.get_precio() << " "\
		;cout<<extra1.get_tam() << endl;
		
		extras extra2("Ensalada", 12.00, 80);
		cout<<extra2.get_extra() << " "
		;cout<<extra2.get_precio() << " "\
		;cout<<extra2.get_tam() << endl;
		
	} else if (opcion==4) {
		
		cout<<"Hasta luego :)";
		
	} else {
		cout<<"Lo lamento, esa opción no esta disponible";
	}
}
//Fin del primer avance
