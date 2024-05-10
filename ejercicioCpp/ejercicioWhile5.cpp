/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70 */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int estudiantes = 8;
    int SumaDeNotas = 0;
    int promedio;
    int AlumnosAprobados = 0;
    int AlumnosReprobados = 0;
    int i = 1;
    int nota;

    while (i <= estudiantes)
    {
        cout << "Ingrese la nota: " << i++ << endl;
        cin >> nota;

          if (nota >= 70)
        {
            AlumnosAprobados++;
        }
        else
        {
            AlumnosReprobados++;
        }

        SumaDeNotas += nota;
    }
    
    promedio = SumaDeNotas / estudiantes;
    cout << "El promedio de general de la seccion es: " << promedio << endl;
    cout << "La cantidad de alumnos aprobados es " << AlumnosAprobados << endl;
    cout << "La cantidad de alumnos reprobados es " << AlumnosReprobados << endl;

    return 0;
}