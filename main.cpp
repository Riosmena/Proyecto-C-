/* Cafetería
José Emiliano Riosmena Castañón
A01704245
Tercer avance */

#include <iostream>
#include <string>
#include "menu.h"
using namespace std;

void menup(){
	string lista[4] = {"1. Alimentos","2. Bebidas","3. Extras","4. Salir"};
	for (int i=0; i<4; i++){
		cout<<lista[i]<<endl;
	}
}

int main(){
	
	cout<<"¡Bienvenido!"<< endl
		<<"Elige una opción"<< endl;
		
	while (true){
		menup();	
		int opcion;
		cin >> opcion;
		if (opcion==1) {
			
			menu alimento;
			alimento.agrega_alimento("Hamburguesa", 64.50, "M", 0);
			alimento.agrega_alimento("Quesadillas", 28.30, "C", 1);
			alimento.agrega_alimento("Pizza", 139.99, "G", 2);
			alimento.agrega_alimento("Molletes", 38.50, "M", 3);
			alimento.agrega_alimento("Chilaquiles", 50.00, "G", 4);
			alimento.agrega_alimento("Sandwich", 25.30, "C", 5);
			cout<<alimento.muestra_alimento();
						
		} else if (opcion==2) {
			
			menu bebida;
			bebida.agrega_bebida("Refresco", 15.00, 600, 0);
			bebida.agrega_bebida("Cafe", 27.50, 281, 1);
			bebida.agrega_bebida("Agua", 9.00, 600, 2);		
			bebida.agrega_bebida("Jugo", 24.00, 412, 3);			
			bebida.agrega_bebida("Limonada", 28.40, 500, 4);
			bebida.agrega_bebida("Chocomilk", 10.00, 400, 5);			
			bebida.agrega_bebida("Licuado", 36.10, 600, 6);
			cout<<bebida.muestra_bebidal();

		
		} else if (opcion==3) {
			
			menu extra;
			extra.agrega_extra("Papas a la francesa", 9.50, 50, 0);
			extra.agrega_extra("Ensalada", 12.00, 80, 1);
			extra.agrega_extra("Frijoles", 6.00, 50, 2);
			extra.agrega_extra("Salsa", 5.00, 40, 3);
			extra.agrega_extra("Guacamole", 5.10, 40, 4);
			cout<<extra.muestra_extral();
		
		} else if (opcion==4) {
		
			cout<<"Hasta luego :)";
			break;
		} else {
			cout<<"Lo lamento, esa opción no esta disponible"<<endl;
		}
	}
}
//Fin del tercer avance
