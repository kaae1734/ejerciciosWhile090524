/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int estudiantes = 10;
    float notas;
    int i = 1;
    int sumaDeNotas;
    float promedio;

    while (i <= estudiantes)
    {
        cout << "Ingrese la nota " << i++ << " :" << endl;
        cin >> notas;
        sumaDeNotas += notas;
    }
    promedio = sumaDeNotas / estudiantes;
    cout << "El promedio de los 10 estudiantes es: "<< promedio;
    return 0;
}