/* Ejercicio 5: Escriba un fragmento de programa que intercambie los valores de dos
variables.*/

#include <iostream>


int main()
{
    int a,b,aux;

    std::cout<< "ingrese 2 numeros \n";
    std::cin>> a >> b;

    aux=a;
    a=b;
    b=aux;


    std::cout << "a: " << a;
    std::cout << "\nb: " << b;


}
