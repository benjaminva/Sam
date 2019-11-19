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

//Constructor por default
Empleado::Empleado(){

    id=0;
    nombre="";

}

//Constructor donde recibe valores de las variables de instancia
Empleado::Empleado(int n, string name){

    id=n;
    nombre=name;


}

//Getter de id y nombre

int Empleado::getId()const{
    return id;
}
string Empleado::getNombre() const{

    return nombre;
}
//Método toString que imprime los valores del objeto
string Empleado::toString()const{

    stringstream aux;
    aux << "el id es " << id << " su nombre es "<< nombre << "\n";
    return aux.str();
}

//Declaro objeto asalariado que hereda de Empleado
class Asalariado: public Empleado{
//Variables de instancia del objeto
    private:

        double salarioMensual;

//Metodos del objeto
    public:

        Asalariado();
        Asalariado (int id, string nombre, double salar);

        int getId() const;
        string getNombre()const;
        double pagoMensual();
        string toString();
};

//Constructor por default
Asalariado::Asalariado(){

    id=0;
    nombre="";

}

//Constructor donde recibe valores
Asalariado::Asalariado(int n, string name, double salar){

    id=n;
    nombre=name;
    salarioMensual=salar;

}

//Getters de id y nombre

int Asalariado::getId()const{
    return id;
}
string Asalariado::getNombre() const{

    return nombre;
}
//Metodo que regresa el salario mensual
double Asalariado:: pagoMensual(){

    return salarioMensual;
}

//Metodo toString que imprime los valores del objeto
string Asalariado::toString(){

    stringstream aux;
    aux << "El id es " << id << " su nombre es "<< nombre << " su salario es " << salarioMensual << "\n";
    return aux.str();
}

//Declaro objeto PorHora que hereda de Empleado
class PorHora: public Empleado{

//Declaro las variables de instancia
    private:

        double horastrabajadas, pagoporhora;

//Declaro metodos
    public :

        PorHora();
        PorHora (int id, string nombre, double horas, double pago);
        double pagoMensual();
        string toString();

};

//Cnstructor por default

PorHora::PorHora(){

    id=0;
    nombre="";
}

//Constructores que recibe los valores
PorHora::PorHora(int n, string name, double horas, double pago){

    id=n;
    nombre=name;
    horastrabajadas=horas;
    pagoporhora=pago;


}

//Metodo que calcula el pago mensual, multiplica las horas que trabajo y lo que se le paga por hora
double PorHora:: pagoMensual(){

    int total;
    total = horastrabajadas * pagoporhora;
    return total;
}

//Metodo toString que imprime los valores del objeto
string PorHora::toString(){

    stringstream aux;
    aux << "El id es " << id << " su nombre es "<< nombre << " su salario es " << pagoMensual() <<"\n";
    return aux.str();
}

//Declaro el objet Practicante que hereda de Empleado
class Practicante: public Empleado{

//Variables de instancia del objeto
    private:

        double horastrabajadas, pagopracticante;

//Metodos del objeto
    public :

        Practicante();
        Practicante (int id, string nombre, double horas, double pago);
        double pagoMensual();
        string toString();
};

//Constructor por default
Practicante::Practicante(){

    id=0;
    nombre="";
}

//Constructor que recibe los valores
Practicante::Practicante(int n, string name, double horas, double pago){

    id=n;
    nombre=name;
    horastrabajadas=horas;
    pagopracticante=pago;

}

//Metodo de pago mensual que multiplica sus horas trabajadas por su salario
double Practicante:: pagoMensual(){

    int total;
    total = horastrabajadas * pagopracticante;
    return total;
}

//Metodo toString que imprime los valores del objeto
string Practicante::toString(){


    stringstream aux;
    aux << "El Id es " << id << " su nombre es "<< nombre << " su salario es " << pagoMensual() << "\n";
    return aux.str();
}


#endif // EMPLEADO_H_

