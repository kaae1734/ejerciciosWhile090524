/* Desarrollar un programa que imprima los números impares en orden 
descendente que hay entre 1 y 100.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 99;

    while (i >= 1)
    {
        cout << i << endl;
        i -= 2;
    }
    
    return 0;
}