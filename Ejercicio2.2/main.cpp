/*Ejercicio 2: Escribe la siguiente expresi�n como expresi�n en C++: (a+b)/(c+d)*/

#include <iostream>



int main()
{
    double a,b,c,d,r;

    std::cout << "ingrese 4 numeros: \n";
    std::cin >> a >> b >> c >> d;

    r=(a+b)/(c+d);

    std::cout << "El resultado es: " << r;

        return 0;
}
