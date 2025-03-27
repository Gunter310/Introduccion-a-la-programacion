#include <iostream>
using namespace std;
int main() {
    
    string robot_name = "RC-21\\\\M2";

    cout << "El robot " << robot_name << " tiene un mensaje." << endl;

    robot_name = "\"RC-21\\\\M2\"";

    cout << "El robot " << robot_name << " se está incendiando." << endl;

    return 0;
}
