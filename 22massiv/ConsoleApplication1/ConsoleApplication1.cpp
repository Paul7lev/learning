#include <iostream>
#include <cstdlib>

using namespace std;


double arr_double2[100];


int main() {
    setlocale(0, "");
    double arr_double1[100];
    for (int i = 0; i < 10; i++) {
        arr_double1[i] = rand();
    }
    for (int i = 0; i < 10; i++) {
        arr_double2[i] = rand();
    }
    for (int i = 0; i < 10; i++) {
        cout << " " << arr_double1[i]
            << " " << arr_double2[i];
    }
}