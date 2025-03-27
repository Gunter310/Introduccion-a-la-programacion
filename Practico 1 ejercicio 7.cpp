#include <iostream>
using namespace std;
int main() { 
    int x;
    
    cout << "Ingrese un numero entero: ";
    cin >> x;

    int anterior = x - 1;
    int siguiente = x + 1;
    int doble = x * 2;

    printf("El numero %i esta entre %i y %i. El doble de %i es %i.\n", x, anterior, siguiente, x, doble);

    return 0;
}
