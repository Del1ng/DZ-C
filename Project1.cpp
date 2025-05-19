#include <iostream>
using namespace std;
//
//int linearSearch(int arr[], int size, int target) {
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] == target)
//            return i; 
//    }
//    return -1; 
//}
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    const int SIZE = 10;
//    int arr[SIZE];
//    int target;
//
//    cout << "Введите 10 чисел:" << endl;
//    for (int i = 0; i < SIZE; ++i) {
//        cout << "Элемент " << i + 1 << ": ";
//        cin >> arr[i];
//    }
//
//    cout << "Введите число для поиска: ";
//    cin >> target;
//
//    int num = linearSearch(arr, SIZE, target);
//
//    if (num != -1)
//        cout << "Число найдено на позиции " << num <<  endl;
//    else
//        cout << "Число не найдено в массиве." << endl;
//
//}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target)
            return i; // Возвращаем индекс найденного элемента
    }
    return -1; // Если элемент не найден
}

int main() {
    const int MAX_SIZE = 10;
    int arr[MAX_SIZE];
    int size;

    cout << "Введите количество элементов массива (от 1 до 10): ";
    cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        cout << "Массив пуст или некорректный размер." << endl;
        return 0;
    }

    for (int i = 0; i < size; ++i) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    int target;
    cout << "Введите число для поиска: ";
    cin >> target;

    int num = linearSearch(arr, size, target);

    if (num != -1)
        cout << "Число найдено на позиции " << num << endl;
    else
        cout << "Число не найдено в массиве." << endl;

}