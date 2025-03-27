#include <iostream>
using namespace std;

int main() {
    char x = 's';
    char y = 'o';

    printf("Antes del programa:\n");
    printf("La variable x es %c\n", x);
    printf("La variable y es %c\n", y);

    // Intercambio de valores usando una variable temporal
    char temp = x;
    x = y;
    y = temp;

    printf("\nDespues del programa:\n");
    printf("La variable x es %c\n", x);
    printf("La variable y es %c\n", y);

    return 0;
}
