/*Ejercicio 4: Escribe la siguiente expresi�n como expresi�n en C++: a-=b/(c-d)*/

#include <iostream>



int main()
{
    double a,b,c,d;
    std::cout << "ingrese 4 numeros: \fn";
    std::cin >> a >> b >> c >> d;

    a-=b/(c-d);

    std::cout << a;
    return 0;
}
