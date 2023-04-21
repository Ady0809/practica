#include <iostream>

using namespace std;
#define MAX 100
//Arreglo.
int edades[MAX];
int pos=0; //posición del elemento
void agregarEdad(int edad);
bool hayEspacio();

void agregarEdad(int edad){
    edades[pos]= edad;
    pos++;

}

bool hayEspacio(){
    return pos < MAX;
}
void mostrarEdades(){
    for(int i = 0; i < pos; i++){
        cout << edades[i] << endl;
    }

}

bool esMayor(int edad){
    return edad >= 18;
}
void mostrarEdadMayores(){

for (int i = 0; i < pos; i++)
    {
    if(esMayor(edades [i]))
    {
        cout << edades [i] << endl;
    }
    }
}
int menu(){
    int op;
    cout<<"Listado de edades\n";
    cout<<"1. Agregar edad\n";
    cout<<"2. Mostrar edades\n";
    cout<<"3. Mostrar edades mayores o iguales a 18\n";
    cout<<"4. Salir\n";
    return op;


}