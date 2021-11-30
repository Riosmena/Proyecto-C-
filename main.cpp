/* Cafetería
José Emiliano Riosmena Castañón
A01704245
Cuarto avance */

#include <iostream>
#include <string>
#include "venta.h"
using namespace std;

void report(venta );

int main(){
		
	venta menug; //Se crea el menú del día de hoy de la cafetería
		
		//Aqui preparo los alimentos que componen la primera sección	
		alimentos alimento1("Hamburguesa", 64.50, 200);
		alimentos alimento2("Quesadillas", 28.30, 150);
		alimentos alimento3("Pizza", 139.99, 400);
		alimentos alimento4("Molletes", 38.50, 240);
		alimentos alimento5("Chilaquiles", 50.00, 232);
		alimentos alimento6("Sandwich", 25.30, 83);
		
		//Se guardan estos alimentos en su respectivo arreglo
		menug.agrega_contenido(alimento1);
		menug.agrega_contenido(alimento2);
		menug.agrega_contenido(alimento3);
		menug.agrega_contenido(alimento4);
		menug.agrega_contenido(alimento5);
		menug.agrega_contenido(alimento6);
		
		//Preparo las bebidas que componen la segunda sección
		bebidas bebida1("Refresco", 15.00, 600);
		bebidas bebida2("Cafe", 27.50, 281);
		bebidas bebida3("Agua", 9.00, 600);		
		bebidas bebida4("Jugo", 24.00, 412);			
		bebidas bebida5("Limonada", 28.40, 500);
		bebidas bebida6("Chocomilk", 10.00, 400);			
		bebidas bebida7("Licuado", 36.10, 600);
		
		//Se guardan las bebidas en su respectivo arreglo		
		menug.agrega_contenido(bebida1);
		menug.agrega_contenido(bebida2);
		menug.agrega_contenido(bebida3);
		menug.agrega_contenido(bebida4);
		menug.agrega_contenido(bebida5);
		menug.agrega_contenido(bebida6);
		menug.agrega_contenido(bebida7);
		
		//Preparo los alimentos extra que componen la tercera sección			
		extras extra1("Papas a la francesa", 9.50, 50);
		extras extra2("Ensalada", 12.00, 80);
		extras extra3("Frijoles", 6.00, 50);
		extras extra4("Salsa", 5.00, 40);
		extras extra5("Guacamole", 5.10, 40);
		
		//Se guardan los extras en su respectivo arreglo
		menug.agrega_contenido(extra1);
		menug.agrega_contenido(extra2);
		menug.agrega_contenido(extra3);
		menug.agrega_contenido(extra4);
		menug.agrega_contenido(extra5);
		
		//Un cliente compra los siguientes alimentos
		menug.comprar(menug.get_comida()[2],1);
		menug.comprar(menug.get_bebida()[4],1);
		menug.comprar(menug.get_bebida()[0],1);
		menug.comprar(menug.get_extra()[3],1);
		
		//Los alimentos elegidos se agregan a un arreglo de venta	
		report(menug);
}
void report(venta venta) {
	//Muestra en la pantalla, todos los alimentos de la sección
	cout<<"La sección de alimentos contiene:"<<endl;
	for (int i=0; i<venta.get_icomidas(); i++){
		alimentos temp=venta.get_comida()[i];
		cout<<temp.get_comida()<<" a $"<<temp.get_precio()<<" con una cantidad de "<<temp.get_tam()<<"g"<<endl;
		}
	cout<<endl;
	//Muestra en la pantalla, todas las bebidas de la sección
	cout<<"La sección de bebidas contiene:"<<endl;
	for (int i=0; i<venta.get_ibebidas(); i++){
		bebidas temp=venta.get_bebida()[i];
		cout<<temp.get_bebida()<<" a $"<<temp.get_precio()<<" con una cantidad de "<<temp.get_tam()<<"g"<<endl;
	}
	cout<<endl;
	//Muestra en la pantalla, todos los extras de la sección
	cout<<"La sección de extras contiene:"<<endl;
	for (int i=0; i<venta.get_iextras(); i++){
		extras temp=venta.get_extra()[i];
		cout<<temp.get_extra()<<" a $"<<temp.get_precio()<< "con una cantidad de "<<temp.get_tam()<<"g"<<endl;
	}
	cout<<endl;
	//Finalmente, realiza la sumatoria de la cantidad de alimentos comprados y se muestra el precio final
	cout<<"Un cliente compra una pizza, un refresco, una limonada y una salsa."<<endl;
	cout<<"El precio final es de: "<< venta.get_preciof()<<endl;
}
//Fin del cuarto avance
