/*
Proyecto Nómina
Samuel Octavio González Azpeitia
A01704696
16/10/2019
*/

#ifndef EMPLEADO_H_
#define EMPLEADO_H_

#include <string>
#include <sstream>

using namespace std;


//Declaracion de clase empleado que es abstracta
class Empleado {

//Declaro variables de instancia
    protected:
        int id;
        string nombre;

//Declaro los métodos que va a tener el objeto
    public :

        Empleado();
        Empleado (int id, string nombre);

        int getId() const;
        string getNombre() const;
        virtual double pagoMensual()=0;
        string toString()const;
};

/*
* Constructor por default
*/
Empleado::Empleado(){

    id=0;
    nombre="";

}

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @param int n: el id del empleado, string nom: el nombre del empleado
 * @return
*/
Empleado::Empleado(int n, string name){

    id=n;
    nombre=name;


}

//Getter de id y nombre

/**
 * getter id
 *
 * @param
 * @return int: id del empleado
*/
int Empleado::getId()const{
    return id;
}

/**
 * getter nombre
 *
 * @param
 * @return string: nombre del empleado
*/
string Empleado::getNombre() const{

    return nombre;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de empleado
*/
string Empleado::toString()const{

    stringstream aux;
    aux << "el id es " << id << " su nombre es "<< nombre << "\n";
    return aux.str();
}

//Declaro objeto asalariado que hereda de Empleado
class Asalariado: public Empleado{
    private:
        //Variables de instancia del objeto
        double salarioMensual;

    public:
        //Metodos del objeto
        Asalariado();  //Constructores
        Asalariado (int id, string nombre, double salar);

        int getId() const;
        string getNombre()const;
        double pagoMensual();
        string toString();
};

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Asalariado
*/
Asalariado::Asalariado(){

    id=0;
    nombre="";

}

/**
 * Constructor que recibe id, nombre y salario
 *
 * @param int n: id del Asalariado, string name: nombre, double salar: salario
 * @return Objeto Asalariado
*/
Asalariado::Asalariado(int n, string name, double salar){

    id=n;
    nombre=name;
    salarioMensual=salar;

}

//Getters de id y nombre

/**
 * getter id
 *
 * @param
 * @return int id del Asalariado
*/
int Asalariado::getId()const{
    return id;
}

/**
 * getter nombre
 *
 * @param
 * @return string nombre del Asalariado
*/
string Asalariado::getNombre() const{

    return nombre;
}


/**
 * Metodo que regresa el salario mensual
 *
 * @param
 * @return double salarioMensual del Asalariado
*/
double Asalariado:: pagoMensual(){

    return salarioMensual;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos del objeto Asalariado
*/
string Asalariado::toString(){

    stringstream aux;
    aux << "El id es " << id << " su nombre es "<< nombre << " su salario es " << salarioMensual << "\n";
    return aux.str();
}

//Declaro objeto PorHora que hereda de Empleado
class PorHora: public Empleado{

    private:
        //Declaro las variables de instancia
        double horastrabajadas, pagoporhora;

    public :
        //Declaro metodos
        PorHora();
        PorHora (int id, string nombre, double horas, double pago);
        double pagoMensual();
        string toString();

};

/**
 * Constructor por default
 *
 * @param
 * @return Objeto PorHora
*/
PorHora::PorHora(){

    id=0;
    nombre="";
}

/**
 * Constructor que recibe id, nombre, horas y salario
 *
 * @param int n: id del Asalariado, string name: nombre,
 *        double pago: pagoporhora double salar: salario,
 * @return Objeto PorHora
*/
PorHora::PorHora(int n, string name, double horas, double pago){

    id=n;
    nombre=name;
    horastrabajadas=horas;
    pagoporhora=pago;


}

/**
 * Metodo que calcula el pago mensual, multiplica las horas que
 * trabajo y lo que se le paga por hora
 *
 * @param
 * @return double total de pago
*/
double PorHora:: pagoMensual(){

    int total;
    total = horastrabajadas * pagoporhora;
    return total;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de PorHora
*/
string PorHora::toString(){

    stringstream aux;
    aux << "El id es " << id << " su nombre es "<< nombre << " su salario es " << pagoMensual() <<"\n";
    return aux.str();
}

//Declaro el objet Practicante que hereda de Empleado
class Practicante: public Empleado{

    private:
        //Variables de instancia del objeto
        double horastrabajadas, pagopracticante;

    public :
        //Metodos del objeto
        Practicante();
        Practicante (int id, string nombre, double horas, double pago);
        double pagoMensual();
        string toString();
};

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Practicante
*/
Practicante::Practicante(){

    id=0;
    nombre="";
}

/**
 * Constructor que recibe id, nombre, horas y salario
 *
 * @param int n: id del Asalariado, string name: nombre,
 *        double pago: pagoporhora double salar: salario,
 * @return Objeto Practicante
*/
Practicante::Practicante(int n, string name, double horas, double pago){

    id=n;
    nombre=name;
    horastrabajadas=horas;
    pagopracticante=pago;

}


/**
 * Metodo que calcula el pago mensual, multiplica las horas que
 * trabajo y lo que se le paga por hora
 *
 * @param
 * @return double total de pago
*/
double Practicante:: pagoMensual(){

    int total;
    total = horastrabajadas * pagopracticante;
    return total;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de Practicante
*/
string Practicante::toString(){


    stringstream aux;
    aux << "El Id es " << id << " su nombre es "<< nombre << " su salario es " << pagoMensual() << "\n";
    return aux.str();
}


#endif // EMPLEADO_H_
