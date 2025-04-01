#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Ingrese numeros de casilla" << endl;
    int cola1, fila1, cola2, fila2;
    
    cin >> cola1;
    cin >> fila1;
    cin >> cola2;
    cin >> fila2;
    
    if (fila1 == fila2 || cola1 == cola2 || fila1 - fila2 == cola1 - cola2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
