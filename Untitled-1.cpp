#include <iostream>

using namespace std;
int opcion;
float primero=1;
float segundo=1;
float resultado;

int main(){
cout<<"bienvenidos a su calculadora vitual"<< endl;
cout << "Que operacion desea realizar Suma [1] Resta [2] Multiplicacion [3] Division [4]." << endl;

cin >> opcion;

cout << "Ingrese un numero 1:";

cin >> primero;

cout << "Ingrese un numero 2:";

cin >> segundo;

if (opcion==1){

    resultado = primero+segundo;

}

if (opcion==2){

    resultado = primero-segundo;

}

if (opcion==3){

    resultado = primero*segundo;

}

if (opcion==4){

    resultado = primero/segundo;
}

cout<<"el resultado de la operacion es :"<< resultado;

return 0;

}