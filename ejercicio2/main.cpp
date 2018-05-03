/*Ejercicio 2: Escribir un programa que de la entrada estándar el precio de un producto y
muestre en la salida estándar el precio del producto al aplicarle el IVA.*/

#include <iostream>



int main()
{
    double a, aiva=0.21;
    std::cout <<"Ingrese el valor del producto para mostrarlo con el iva: ";
    std::cin >> a;

    a+=a*aiva;

    std::cout <<"El precio con iva es:   " << a;


}
