/*
 * Proyecto Nomina
 * Samuel Octavio González Azpeitia
 * A01704696
 * 16/10/2019
 */

/**
 * Descripcion este es un proyecto demo para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que captura
 * diferentes tipos de empleados con sus respectivos sueldos, y nos
 * permite calcular la nomina para cada tipo de empleado diferente.
*/

//Bibliotecas
#include <iostream>   //para imprimir.
#include "Empleado.h" //donde estan los objetos de mi proyecto.
#include "Empresa.h"

using namespace std;

//Procedimiento menu
void menu(){

    //Imprime las opciones que va a tener el sistema
    cout << "Menu:\n";
    cout << "1. Mostrar trabajadores asalariados. \n";
    cout << "2. Mostrar trabajadores por hora. \n";
    cout << "3. Mostrar practicantes. \n";
    cout << "4. Calcular total de salario de asalariados. \n";
    cout << "5. Calcular total de salario de por hora \n";
    cout << "6. Calcular total de salario de practicantes \n";
    cout << "7. Calcular total que se reporta a hacienda \n";
    cout << "8. Calcula total de egresos de salarios \n";
    cout << "9. Agregar asalariados \n";
    cout << "10. Agregar Por hora \n";
    cout << "11. Agregar practicantes \n";
    cout << "12. Salir \n";
}

int main(int argc, char* argv[]){

  	Empresa empresa;
  	empresa.creaEjemplosAsalariados();
  	empresa.creaEjemplosPorHoras();
  	empresa.creaEjemplosPracticantes();
  	string temp_nombre;

    int opcion = 0, temp_salario = 0, temp_horas = 0, total = 0;

    //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir.
    while(opcion < 12 && opcion > -1){

  		//Impresion de menu
  		menu();
  		//Leer indice que selecciona la opcion del menu
  		cin >> opcion;

  		//Switch donde dependiendo la eleccion efectua un diferente procedimiento
  		switch(opcion){

  			//Caso 1 que imprime los empleados de tipo asalariado
  			case 1:
          empresa.muestraAsalariado();
  			  break;

  			//Caso 2 que imprime los empleados de tipo Por Hora
  			case 2:
          empresa.muestraPorHora();
  			  break;

  			//Caso 3 que imprime los empleados de tipo Practicantes
  			case 3:
          empresa.muestraPracticantes();
  			  break;

  			//Caso 4 que imprime el total del salario de todos los Asalariados
  			case 4:
  				empresa.pagoAsalariado();
  			  break;

  			//Caso 5 que imprime el total del salario de todos los PorHora
  			case 5:
  				empresa.pagoPorHora();
   			  break;

  			//Caso 6 que imprime el total del salario de todos los Practicantes
  			case 6:
  				empresa.pagoPracticantes();
  		  	break;

  			//Caso 7 Calcula los salarios que se reportan a hacienda
  			case 7:
  				empresa.pagoHacienda();
  			  break;

  			//Caso 8 Calcula los salarios totales
  			case 8:
  				empresa.pagoTotal();
  			  break;

  			case 9:
  				cout<< "Dime el nombre " ;
  				cin >> temp_nombre;
  				cout<< "Dime el salario " ;
  				cin >> temp_salario;
  				empresa.agregaAsalariado(temp_nombre, temp_salario);
  			  break;

  			case 10:
  				cout<< "Dime el nombre " ;
  				cin >> temp_nombre;
  				cout<< "Dime el salario " ;
  				cin >> temp_salario;
  				cout<< "Dime las horas " ;
  				cin >> temp_horas;
  				empresa.agregaPorhora(temp_nombre, temp_horas, temp_salario);
  			  break;

  			case 11:
  				cout<< "Dime el nombre " ;
  				cin >> temp_nombre;
  				cout<< "Dime el salario " ;
  				cin >> temp_salario;
  				cout<< "Dime las horas " ;
  				cin >> temp_horas;
  				empresa.agregaPracticante(temp_nombre, temp_horas, temp_salario);
  			  break;
  		}
    }
}
