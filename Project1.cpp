#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;

int main() {
	int arr[4][4];
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
				cin >> arr[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++){
			if (j < i) {
				if (arr[i][j] == 0) {
					count++;
				}
			}
		}
	
	}
	cout << "kol nuley =" << count << endl;
}