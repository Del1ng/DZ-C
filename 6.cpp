#include <iostream>
using namespace std;

void Para(int a[], int b[], int size) {
    int c[10]; 
    int k = 0;

    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            c[k++] = a[i];
        }
    }
    for (int i = 0; i < size; i++) {
        if (b[i] % 2 == 0) {
            c[k++] = b[i];
        }
    }

    cout << "Парных элеметов в общем: " << k << endl;
    for (int i = 0; i < k; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int a[5] = { 10, 2, 3, 4, 5 };
    int b[5] = { 3, 4, 6, 7, 8 };
    Para(a, b, 5);
}