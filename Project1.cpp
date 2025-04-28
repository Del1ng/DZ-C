#include <iostream>
using namespace std;
//1.
//int main() {
//    int count = 0;
//    for (int number = 100; number <= 999; ++number) {
//        int a = number / 100;
//        int b = (number / 10) % 10;
//        int c = number % 10;
//
//        if (a == b || b == c || a == c) {
//            count++;
//        }
//    }
//    cout << endl;
//}

//2.
//int main() {
//    int count = 0;
//    for (int number = 100; number <= 999; ++number) {
//        int a = number / 100;
//        int b = (number / 10) % 10;
//        int c = number % 10;
//
//        if (a != b && b != c && a != c) {
//            count++;
//        }
//    }
//    cout << endl;
//}

//3.
//int main() {
//	int number;
//
//	cout << "Enter a number: ";
//	cin >> number;
//
//	int digits[10];
//	int count = 0;
//
//	while (number > 0) {
//		int digit = number % 10;
//		if (digit != 3 && digit != 6)
//		{
//			digits[count] = digit;
//			count = count + 1;
//		}
//		number = number / 10;
//	}
//	cout << "Output: ";
//	for (int i = count - 1; i >= 0; i--)
//	{
//		cout << digits[i];
//	}
//}

//4.
//int main() {
//    int A;
//    cout << "Enter number A: ";
//    cin >> A;
//
//    for (int B = 1; B * B <= A; ++B) {
//        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
//            cout << B << endl;
//        }
//    }
//}

//5.
//int main() {
//    int A;
//    cout << "Enter number A: ";
//    cin >> A;
//
//    int sum = 0;
//    int temp = A;
//    while (temp > 0) {
//        sum += temp % 10;
//        temp /= 10;
//    }
//
//    if (sum * sum * sum == A * A) {
//        cout << "True" << endl;
//    }
//    else {
//        cout << "False" << endl;
//    }
//}

//6.
//int main() {
//    int A;
//    cout << "Enter number A: ";
//    cin >> A;
//
//    for (int i = 1; i <= A; ++i) {
//        if (A % i == 0) {
//            cout << i << endl;
//        }
//    }
//}

//7.
int main() {
    int A, B;
    cout << "Enter number A: ";
    cin >> A;
    cout << "Enter number B: ";
    cin >> B;

    for (int i = 1; i <= min(A, B); ++i) {
        if (A % i == 0 && B % i == 0) {
            cout << i << endl;
        }
    }
}