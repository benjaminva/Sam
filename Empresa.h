

#ifndef EMPRESA_H_
#define EMPRESA_H_
#include <string>
#include <sstream>
#include "Empleado.h"
const int MAX = 100; //constante de tamaño de arreglos


using namespace std;


class Empresa {

/*
Declara las variables de instancia
Tres arreglos: Asalariado, PorHora y Practicante
Tres indices de cada arreglo.
*/
    private:

        Asalariado asas[MAX];
        PorHora porhoras[MAX];
        Practicante practicants[MAX];
        int iasas, iporhoras, ipracts;

/*
Métodos:
Costructor por default y los diferentes metodos que empleara.
*/
    public :

        Empresa();

        void creaEjemplosAsalariados();
        void creaEjemplosPorHoras();
        void creaEjemplosPracticantes();
        void muestraAsalariado();
        void muestraPorHora();
        void muestraPracticantes();
        void pagoAsalariado();
        void pagoPorHora();
        void pagoPracticantes();
        void pagoHacienda();
        void pagoTotal();
        void agregaAsalariado(string nombre, double salario);
        void agregaPorhora(string nombre, double horas, double salario);
        void agregaPracticante(string nombre, double horas, double salario);



};
/*
Constructor default que inicia los tres indices en 0
*/
Empresa::Empresa(){

    iasas = 0;
    iporhoras=0;
    ipracts =0;
}

/*
 Utliza el arreglo de tipo Asalariado.
 Llena el arreglo con 5 ejemplos. Los identificadores de asalariados
 van de 1 a 99.

 El id del último asalariados lo modifica hasta el ultimo creado.
*/
void Empresa::creaEjemplosAsalariados(){

	//Cada espacio de arreglo tiene diferente objeto y manda como parametro sus variables instancia


    asas[0] = Asalariado(iasas, "Fernando", 2000);
    iasas+=1;
    asas[1] = Asalariado(iasas, "Alejandro", 1800);
    iasas+=1;
    asas[2] = Asalariado(iasas, "Jaime", 1200);
    iasas+=1;
    asas[3] = Asalariado(iasas, "Francisco", 7000);
    iasas+=1;
    asas[4] = Asalariado(iasas, "Roberto", 1000);

}

/*
 Utiliza el arreglo de tipo PorHora.
 Llena el arreglo con 5 ejemplos. Los identificadores de empleados
 por hora van del 100 al 199.

 El id del último empleado por hora lo modifica hasta el ultimo creado.
*/
void Empresa::creaEjemplosPorHoras(){


    porhoras[0]= PorHora(iporhoras+100, "Andres", 14, 300);
    iporhoras += 1;
    porhoras[1]= PorHora(iporhoras+100, "Rodrigo", 24, 400);
    iporhoras += 1;
    porhoras[2]= PorHora(iporhoras+100, "Felipe", 20, 650);
    iporhoras += 1;
    porhoras[3]= PorHora(iporhoras+100, "Alberto", 29, 400);
    iporhoras += 1;
    porhoras[4]= PorHora(iporhoras+100, "Javier", 30, 400);

}

/*
 Utilia el arreglo de tipo Practicante.
 Llena el arreglo con 5 ejemplos. Los identificadores de practicantes
 van del 200 al 299.

 El id del último practicante lo modifica hasta el últim creado.
*/
void Empresa::creaEjemplosPracticantes(){


	practicants[0] = Practicante(ipracts+200, "Diego", 10, 200);
    ipracts += 1;
    practicants[1] = Practicante(ipracts+200, "Ramon", 15, 200);
    ipracts += 1;
    practicants[2] = Practicante(ipracts+200, "Luis", 20, 150);
    ipracts += 1;
    practicants[3] = Practicante(ipracts+200, "Pablo", 14, 250);
    ipracts += 1;
    practicants[4] = Practicante(ipracts+200, "Carlos", 12, 100);


}

/*
Utiliza el arreglo Asalariado y su indice.
Recorra todo el arreglo, imprimiendo cada uno de los objetos que pertenecen al mismo.
*/

void Empresa::muestraAsalariado(){


    //Ciclo que recorre el arreglo e imprime cada objeto.
	for(int i=0; i<=iasas ;i++){
		cout << asas[i].toString();
    }
}

/*
Utiliza el arreglo PorHora y su indice.
Recorra todo el arreglo, imprimiendo cada uno de los objetos que pertenecen al mismo.
*/

void Empresa::muestraPorHora(){

    for(int i=0; i<=iporhoras;i++){
        cout << porhoras[i].toString();
    }
}
/*
Utiliza el arreglo Practicante y su indice.
Recorra todo el arreglo, imprimiendo cada uno de los objetos que pertenecen al mismo.
*/
void Empresa::muestraPracticantes(){

    for(int i=0; i<=ipracts;i++){
        cout << practicants[i].toString();
    }

}
/*
Utiliza el arreglo Asalariado y su ultimo indice.
Almacena en una variable auxiliar la suma de los salarios de cada objeto mientras los recorre.

Imprime el total.
*/
void Empresa::pagoAsalariado(){

    int total=0;
    for(int i=0; i<=iasas;i++){
        total = total + asas[i].pagoMensual();
    }
    cout<< total<< " \n";
}

/*
Utiliza el arreglo PorHora y su ultimo indice.
Almacena en una variable auxiliar la suma de los salarios de cada objeto mientras los recorre.

Imprime el total.
*/
void Empresa::pagoPorHora(){

    int total=0;
    for(int i=0; i<=iporhoras;i++){
        total = total + porhoras[i].pagoMensual();
    }
	cout<< total<< " \n";
}
/*
Utiliza el arreglo Practicante y su ultimo indice.
Almacena en una variable auxiliar la suma de los salarios de cada objeto mientras los recorre.

Imprime el total.
*/
void Empresa::pagoPracticantes(){

    int total=0;
    for(int i=0; i<=ipracts;i++){
        total = total + practicants[i].pagoMensual();
    }

	cout<< total<< " \n";

}
/* Utiliza arreglo de Asalariado, PorHora, ultimo indice de asalariado
y ultimo indice de por hora.
La función calcula el total de salarios para hacienda

Imprime el total.
*/
void Empresa::pagoHacienda(){

		double sum = 0;

		//Ciclo que suma los valores de los Asalariados y lo guarda en sum1
		for(int i=0; i<=iasas;i++)
			sum += asas[i].pagoMensual();

		//Ciclo que suma los valores de los PorHora y lo guarda en sum2
		for(int i=0; i<=iporhoras;i++)
			sum += porhoras[i].pagoMensual();

		//Total que suma el total de los asalariados y por hora
		cout<< sum << " \n";
}

/*
Emplea tres arreglos: Asalariado, PorHora, y Practicante.
Utiliza el último indice de cada uno de los arreglos.
La función calcula el total de salarios incluyendo practicantes.

Imprime el total.
*/
void Empresa::pagoTotal(){

    double sum = 0;

		//Ciclo que suma los valores de los Asalariados y lo guarda en sum1
    for(int i=0; i<=iasas;i++)
			sum += asas[i].pagoMensual();
		//Ciclo que suma los valores de los PorHora y lo guarda en sum2
	for(int i=0; i<=iporhoras;i++)
			sum += porhoras[i].pagoMensual();
		//Ciclo que suma los valores de los Practicantes y lo guarda en sum3
	for(int i=0; i<ipracts;i++)
			sum += practicants[i].pagoMensual();

	//Total que suma el total de los asalariados, por hora y practicantes
    cout << sum << " \n";

}
/*
Utiliza arreglo de Asalariado y su último indice.
Recibe el nombre y salario.
El metodo genera el nuevo id, crea el objeto Asalariado y lo agrega al arreglo
*/
void Empresa::agregaAsalariado(string nombre, double salario){

    iasas =+ 1;
	Asalariado aux(iasas, nombre, salario);
	asas[iasas] = aux;
}

 /*
Utiliza arreglo de PorHora y su ultimo indice.
Recibe el nombre, horas trabajadas y su salario
El metodo genera el nuevo id, crea el objeto PorHora y lo agrega al arreglo
*/
void Empresa::agregaPorhora(string nombre, double horas, double salario){

    iporhoras =+ 1;
    PorHora aux(iporhoras + 100, nombre, horas, salario);
    porhoras[iporhoras] = aux;


}
 /*
Utiliza arreglo de Practicante y su ultimo indice.
Recibe el nombre, horas trabajadas y su salario
El metodo genera el nuevo id, crea el objeto PorHora y lo agrega al arreglo
*/
void Empresa::agregaPracticante(string nombre, double horas, double salario){

    ipracts =+ 1;
    Practicante aux(ipracts+200, nombre, horas, salario);
    practicants[ipracts] = aux;


}



#endif // EMPRESA_H_
