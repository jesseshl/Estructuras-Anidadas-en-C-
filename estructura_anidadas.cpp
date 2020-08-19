#include<iostream>
#include<stdio_ext.h> //Libreria para usar __fpurge()

using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char estado[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main(){

    for(int i=0;i<2;i++){
        __fpurge(stdin); //Sirve para limpiar el buffer para sistema operativo linux
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
        cout<<"Ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
        cout<<"Estado: ";
        cin.getline(empleados[i].dir_empleado.estado,20,'\n');
        cout<<"Salario: ";
        cin>>empleados[i].salario;
        cout<<"\n";
    }

    for(int i=0;i<2;i++){
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Estado: "<<empleados[i].dir_empleado.estado<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
        cout<<"\n";
    }
    return 0;
}

//Gracias a Alejandro taboada por su enseñanza :) 
