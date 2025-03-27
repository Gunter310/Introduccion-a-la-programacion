#include <iostream>
using namespace std;
int main() {
    char letter;
    char task;
    letter = 'A'; 
    task = 'P';   

    cout << "Se solicita al robot " << letter << " para programar " << task << "." << endl;
    letter = 'B';
    task = 'L';

    cout << "Se solicita al robot " << letter << " para limpiar " << task << "." << endl;
    return 0;
}
