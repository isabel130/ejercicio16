// Verificar primero si la persona tiene una entrada válida y luego si
// su edad es suficiente para la película (mayores de 18 para película R).
// Tipos de entradas: (VIP, estándar)

//          Estándar      VIP      3D
// APT        0            1        2
// 14         3            4
// R          5            6

#include <iostream>
using namespace std;

int main() {

    int codigo, edad;
    cout << "Ingrese el codigo de la entrada: ";

    while (!(cin >> codigo) or codigo < 2025000 or codigo > 2025700) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Entrada invalida. Ingrese el codigo de la entrada: ";
    }

    cout << "Ingrese la edad de la persona: ";
    cin >> edad;


    if (codigo <= 2025100)
    {
        cout << "La entrada es estandar para una pelicula APT.";
    }
    else if (codigo <= 2025200) {
        cout << "La entrada es VIP para una pelicula APT.";
    }
    else if( codigo <= 2025300) {
        cout << "La entrada es para una pelicula APT 3D.";
    }

    else if(codigo <= 2025500) {
        if (edad<14) {
            cout << "Entrada denegada. No es mayor de 14.";
        }
        else if (codigo <= 2025400){
        cout << "La entrada es estandar para una pelicula para mayores de 14.";
    }
        else if (codigo <= 2025500){
            cout << "La entrada es VIP para una pelicula para mayores de 14.";
        }
    }

    else if(codigo <= 2025700) {
        if (edad<18) {
            cout << "Entrada denegada. No es mayor de 18.";
        }
        else if (codigo <= 2025600){
            cout << "La entrada es estandar para una pelicula R.";
        }
        else if (codigo <= 20255700){
            cout << "La entrada es VIP para una pelicula R.";
        }
    }


    return 0;
}

