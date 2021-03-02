//Diego Peña Benitez 2AV6

#include <iostream>

using namespace std;

void Suma(int a, int b);

int main()
{
    int N1, N2;
    cout << "Introduzca el valor del primer numero: ";
    cin >> N1;
    cout << "Introduzca el valor del segundo numero: ";
    cin >> N2;
    Suma(N1,N2);
    return 0;
}

void Suma(int a, int b){
    int c=a+b;
    cout << "El resultado de " << a <<" + " << b << " es: " << c << endl;

}
