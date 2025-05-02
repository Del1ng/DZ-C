//2.
#include <iostream>
using namespace std;

//int main() {
//    setlocale(LC_ALL, "Russian");
//    cout << "Введите количество элементов в массиве: ";
//
//    int arr[4];
//
//    cout << "Введите элементы массива: ";
//    for (int i = 0; i < 4; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "Массив в обратном порядке: ";
//    for (int i = 4 - 1; i >= 0; i--) {
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//}
//3.
int main() {
    double sides[5]; 
    double perimeter = 0;
    cout << "Введите длины сторон пятиугольника: ";
    for (int i = 0; i < 5; i++) {
        cin >> sides[i];
        perimeter += sides[i];
    }

    cout << "Периметр пятиугольника: " << perimeter << endl;

}