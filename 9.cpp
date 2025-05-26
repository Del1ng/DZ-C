
#include <iostream>
using namespace std;
//int add(int a, int b) { return a + b; }
//int sub(int a, int b) { return a - b; }
//int mul(int a, int b) { return a * b; }
//int divide(int a, int b) { return a / b; }  
//
//int main() {
//
//    int (*ops[4])(int, int) = { add, sub, mul, divide };
//
//    int op; 
//    int a, b;
//    cin >> op;
//
//    cin >> a >> b;
//
//    cout << "Результат: " << ops[op](a, b) << '\n';
//
//}
void sum(int* A, int* B, int* C, int size) {
    for (int i = 0; i < size; ++i) {
        C[i] = A[i] + B[i];
    }
}

int main() {
    const int size = 5;
    int A[size] = { 1, 2, 3, 4, 5 };
    int B[size] = { 10, 20, 30, 40, 50 };
    int C[size];  

    sum(A, B, C, size);

    cout << "Массив C (A + B): ";
    for (int i = 0; i < size; ++i) {
        cout << C[i] << ' ';
    }
    cout << '\n';

    return 0;
}
