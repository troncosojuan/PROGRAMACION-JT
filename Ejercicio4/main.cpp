/*Ejercicio 4: Ejecute el programa del ejercicio anterior con entradas erróneas y observe
los resultados. Por ejemplo, introduzca un dato de tipo carácter cuando se espera un
dato de tipo entero.*/

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
