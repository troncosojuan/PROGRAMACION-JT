/*Ejercicio 3: Escribe la siguiente expresión como expresión en C++:*/

#include <iostream>


int main()
{

    double a,b,c,d,e,f,r;
    std::cout << "Ingrese 6 valores: \n";
    std::cin >> a >> b >> c >> d >> e >> f;

    r=(a+(b/c))/(d+(e/f));

    std::cout << "El resultado es: " << r;

    return 0;
}
