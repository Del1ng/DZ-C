#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//1.

//int main()
//{
//	vector<int> vec;
//	int n, x;
//	cout << "Enter the number of elements: ";
//	cin >> n;
//	for (int i = 0; i < n; ++i) {
//		cout << "Enter element " << i + 1 << ": ";
//		cin >> x;
//		vec.push_back(x);
//	}
//	cout << "Elements in the vector: ";
//	cin >> x;
//	vec.erase(remove(vec.begin(), vec.end(), x), vec.end());
//	cout << "Elements after removal: ";
//	for (const auto& elem : vec) {
//		cout << elem << " ";
//	}
//	cout << endl;
//}
//

//2.
//int main(){
//	vector<int> vec;
//	int n, x;
//	cout << "Enter the number of elements: ";
//	cin >> n;
//	for (int i = 0; i < n; ++i) {
//		cout << "Enter element " << i + 1 << ": ";
//		cin >> x;
//		vec.push_back(x);
//	}
//	reverse(vec.begin(), vec.end());
//	for (const auto& elem : vec) {
//		cout << elem << " ";
//	}
//}

//3.
int main() {
	vector<int> vec;
	int n, x;
	cout << "Enter the number of elements: ";
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cout << "Enter element " << i + 1 << ": ";
		cin >> x;
		vec.push_back(x);
	}

	sort(vec.begin(), vec.end());

	cout << "Sorted elements: ";
	for (const auto& elem : vec) {
		cout << elem << " ";
	}
	cout << endl;
	return 0;
}