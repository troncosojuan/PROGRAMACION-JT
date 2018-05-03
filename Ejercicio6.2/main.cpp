/*Ejercicio 6: Escriba un programa que lea las tres notas de un alumno y calcule la nota final media de dicho alumno.*/

#include <iostream>


int main()
{
    double a,b,c,r;

    std::cout << "Ingrese 3 notas\n";
    std::cin >> a >> b >> c;

    r=(a+b+c)/3;

    std::cout<< r;

    return 0;
}
