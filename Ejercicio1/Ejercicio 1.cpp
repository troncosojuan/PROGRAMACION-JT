#include <iostream>

using namespace std;

int main()
{
    double a, b, suma=0, resta=0, division=0, multiplicacion=0;
    cout<<"ingrese 2 numeros: "<< endl;
    cin >> a; cin>>b;



    suma=a+b;
    resta=a-b;
    division=a/b;
    multiplicacion=a*b;

    cout<<"\nLa suma es: "<<suma;
    cout<<"\nLa resta es: "<<resta;
    cout<<"\nLa division es: "<<division;
    cout<<"\nLa multiplicacion es: "<<multiplicacion;

    return 0;

}
