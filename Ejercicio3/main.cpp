/*Ejercicio 3: Realice un programa que lea de la entrada est�ndar los siguientes datos
de una persona:
Edad: dato de tipo entero.
Sexo: dato de tipo car�cter.
Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida est�ndar.*/

#include <iostream>



int main()
{
    int edad;
    char sexo;
    double altura;


    std::cout << "Ingrese Edad: ";
    std::cin >> edad;
    std::cout << "ingrese Sexo: ";
    std::cin >> sexo;
    std::cout << "ingrese altura en metros: ";
    std::cin >> altura;

    std::cout << "Edad: " << edad << "\nSexo: " << sexo << "\nAltura: " << altura;



    return 0;
}
