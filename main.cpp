/*
Datos
Proyecto Nómina
Samuel Octavio González Azpeitia
A01704696
16/10/2019
*/


/*
Descripción este es un proyecto demo para la clase de Pensamiento
 Computacional Orientado a Objetos. Es un programa que captura 
 diferentes tipos de empleados con sus respectivos sueldos, y nos
 permite calcular la nómina para cada tipo de empleado diferente.
*/

//Bibliotecas
#include <iostream>   //para imprimir.
#include "Empleado.h" //donde estan los objetos de mi proyecto.

using namespace std;  //para no tener que agregar std a cada cout y cin

const int MAX = 100; //constante de tamaño de arreglos

//Procedimiento menu muestra en consola las opciones al usuario
void menu(){

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

/*
Recibe el nombre, salario, el id general de asalariados y el arreglo de 
asalariados el metodo genera el nuevo id, para crear el objeto Asalariado 
y lo agregarlo al arreglo recibido.

Devuelve el último del arreglo índice donde se agregó el objeto. 
*/
int agrega_asalariado(string nombre, double salario, 
					  int ultimo_id, Asalariado asas[]){

    ultimo_id =+ 1;
	Asalariado aux(ultimo_id, nombre, salario);
	asas[ultimo_id] = aux;
	return ultimo_id;

}

/*
Recibe el nombre, horas, salario, el id general de empleados por horas 
y el arreglo de  empleados por horas, para crear el objeto PorHora y
agregagarlo al arreglo recibido.

Devuelve el último del arreglo índice donde se agregó el objeto. 
*/
int agrega_por_hora(string nombre, double horas, double salario, 
					int ultimo_id, PorHora porhrs[]){

	ultimo_id =+ 1;
    PorHora aux(ultimo_id + 100, nombre, horas, salario);
    porhrs[ultimo_id] = aux;
	return ultimo_id;

}

/*
Recibe el nombre, horas, salario, el id general de practicantes y el arreglo 
de practicantes por horas para generar el nuevo id, crear el objeto PorHora
 y agregalo al arreglo recibido.

Devuelve el último del arreglo índice donde se agregó el objeto. 
*/
int agrega_practicantes(string nombre, double horas, double salario, 
						int ultimo_id, Practicante practs[]){

	ultimo_id =+ 1;
    Practicante aux(ultimo_id+200, nombre, horas, salario);
    practs[ultimo_id] = aux;
	return ultimo_id;
}

/* 
 Recibe un arreglo de tipo Asalariado.
 Inicializa el arreglo con 5 ejemplos para tener datos iniciales en 
 el programa. Los identificadores de asalariados van de 1 a 99.

 Devuelve el int id del último asalariados creado (5).
*/
int crea_ejemplos_asalariados( Asalariado asalariados[MAX]){
	
	/*Cada espacio de arreglo tiene diferente objeto y manda como 
	parametro sus variables instancia*/
    int id = 0;
    asalariados[0] = Asalariado(id, "Fernando", 2000);
    id+=1;
    asalariados[1] = Asalariado(id, "Alejandro", 1800);
    id+=1;
    asalariados[2] = Asalariado(id, "Jaime", 1200);
    id+=1;
    asalariados[3] = Asalariado(id, "Francisco", 7000);
    id+=1;
    asalariados[4] = Asalariado(id, "Roberto", 1000);
	
	return id;

}

/* 
 Recibe un arreglo de tipo PorHora.
 Llena el arreglo con 5 ejemplos para tener datos iniciales en el
 programa. Los identificadores de empleados por hora van del 100 al 199.

 Devuelve el int id del último empleado por hora creado.
*/
int crea_ejemplos_por_hora(PorHora porhoras [MAX] ){
	
    int id = 0;
    porhoras[0]= PorHora(id+100, "Andres", 14, 300);
    id += 1;
    porhoras[1]= PorHora(id+100, "Rodrigo", 24, 400);
    id += 1;
    porhoras[2]= PorHora(id+100, "Felipe", 20, 650);
    id += 1;
    porhoras[3]= PorHora(id+100, "Alberto", 29, 400);
    id += 1;
    porhoras[4]= PorHora(id+100, "Javier", 30, 400);
	
	return id;
}

/* 
 Recibe un arreglo de tipo Practicante.
 Llena el arreglo con 5 ejemplos para tener datos iniciales 
 en el programa.. Los identificadores de practicantes van 
 del 200 al 299.

 Devuelve el int id del último practicante creado.
*/
int crea_ejemplos_practicantes(Practicante practicantes[MAX] ){
    
	int id = 0;
	practicantes[0] = Practicante(id+200, "Diego", 10, 200);
    id += 1;
    practicantes[1] = Practicante(id+200, "Ramon", 15, 200);
    id += 1;
    practicantes[2] = Practicante(id+200, "Luis", 20, 150);
    id += 1;
    practicantes[3] = Practicante(id+200, "Pablo", 14, 250);
    id += 1;
    practicantes[4] = Practicante(id+200, "Carlos", 12, 100);

	return id;
}


/*
Recibe arreglo de Asalariado, PorHora, ultimo indice de asalariado 
y ultimo indice de por hora. 
La función calcula el total de salarios para hacienda

Devuelve el total como un flotante.
*/ 
double calcula_salarios_hacienda(Asalariado asas[], PorHora porhrs[],
                                 int iasas, int iporhrs){
									 
		double sum = 0;

		//Ciclo que suma los valores de los Asalariados y lo guarda en sum1
		for(int i=0; i<=iasas;i++)
			sum += asas[i].pagoMensual();
		
		//Ciclo que suma los valores de los PorHora y lo guarda en sum2
		for(int i=0; i<=iporhrs;i++)
			sum += porhrs[i].pagoMensual();
		
		//Total que suma el total de los asalariados y por hora
		return sum;
}


/*
Recibe arreglo de Asalariado,arreglo de PorHora,arreglo de Practicante,
el último indice de asalariado, el último indice de por hora y el último 
índice de practicante. 
La función calcula el total de salarios incluyendo practicantes.

Devuelve el total como un flotante.
*/ 
double calcula_salarios_totales(Asalariado asas[], PorHora porhrs[], 
								Practicante practs[], int iasas, 
								int iporhrs, int ipracts){
									
		double sum = 0;

		//Ciclo que suma los valores de los Asalariados y lo guarda en sum1
		for(int i=0; i<=iasas;i++)
			sum += asas[i].pagoMensual();
		//Ciclo que suma los valores de los PorHora y lo guarda en sum2
		for(int i=0; i<=iporhrs;i++)
			sum += porhrs[i].pagoMensual();
		//Ciclo que suma los valores de los Practicantes y lo guarda en sum3
		for(int i=0; i<ipracts;i++)
			sum += practs[i].pagoMensual();

		//Total que suma el total de los asalariados, por hora y practicantes
		return sum;
		
}


int main(int argc, char* argv[]){

	//Inicializamos todos los arreglos con 5 tipos de empleados cada uno

    Asalariado asas [MAX];	
	int iasas = crea_ejemplos_asalariados(asas);

    PorHora porhrs [MAX];
	int iporhrs = crea_ejemplos_por_hora(porhrs);

    Practicante practs[MAX];
    int ipracts = crea_ejemplos_practicantes(practs);

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
				
				//Ciclo que recorre el arreglo e imprime cada objeto.
				for(int i=0; i<=iasas ;i++)
					cout << asas[i].toString();
			break;

			//Caso 2 que imprime los empleados de tipo Por Hora
			case 2:

				for(int i=0; i<=iporhrs;i++)
					cout << porhrs[i].toString();
			break;

			//Caso 3 que imprime los empleados de tipo Practicantes
			case 3:

				for(int i=0; i<=ipracts;i++)
					cout << practs[i].toString();
			break;

			//Caso 4 que imprime el total del salario de todos los Asalariados
			case 4:
				total=0;

				/*Ciclo que recorre el arrego y suma el pago mensual 
				almacenandolo en una variable*/
				for(int i=0; i<=iasas;i++)
					total = total + asas[i].pagoMensual();
				cout<< total<< "\n";
			break;

			//Caso 5 que imprime el total del salario de todos los PorHora
			case 5: 
				total=0;
				for(int i=0; i<=iporhrs;i++)
					total = total + porhrs[i].pagoMensual();
				cout<< total<< "\n";
			break;

			//Caso 6 que imprime el total del salario de todos los Practicantes
			case 6:
				total=0;
				for(int i=0; i<=ipracts;i++)
					total = total + practs[i].pagoMensual();
				cout<< total<< "\n";
			break;

			//Caso 7 Calcula los salarios que se reportan a hacienda
			case 7:
			
				cout << calcula_salarios_hacienda(asas,porhrs,iasas,iporhrs);
			
			break;

			//Caso 8 Calcula los salarios totales
			case 8:
			
				cout << calcula_salarios_totales(asas, porhrs, practs, iasas, 
												  iporhrs, ipracts);
				
			break;

			case 9:
				cout<< "Dime el nombre" ;
				cin >> temp_nombre;
				cout<< "Dime el salario" ;
				cin >> temp_salario;
				iasas = agrega_asalariado(temp_nombre, temp_salario, iasas, 
										  asas);
			break;

			case 10:
				cout<< "Dime el nombre" ;
				cin >> temp_nombre;
				cout<< "Dime el salario" ;
				cin >> temp_salario;
				cout<< "Dime las horas" ;
				cin >> temp_horas;
				iporhrs = agrega_por_hora(temp_nombre, temp_horas, temp_salario,
										  iporhrs, porhrs);
			break;

			case 11:
				cout<< "Dime el nombre" ;
				cin >> temp_nombre;
				cout<< "Dime el salario" ;
				cin >> temp_salario;
				cout<< "Dime las horas" ;
				cin >> temp_horas;
				ipracts = agrega_practicantes(temp_nombre, temp_horas, temp_salario,
											  ipracts, practs);	
			break;
		}
    }
}