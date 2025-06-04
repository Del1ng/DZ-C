
#include <vector>
#include <string>
#include <iostream>
using namespace std;
struct Store {
    string title;        
    string director;     
    string genre;        
    int rating;          
    double price;        
};
void printStore(const vector<Store>& stores) {
	for (const auto& store : stores) {
		cout << "Название: " << store.title << ", Режисер: " << store.director 
            << "Жанр: " << store.genre << " Рейтинг: " << store.rating
			<< "Цена: $" << store.price << endl;
	}
}
int main()
{

	setlocale(LC_ALL, "Russian");

	vector<Store> stores = {
	{"Inception", "Christopher Nolan", "Sci-Fi", 9, 19.99},
	{"The Godfather", "Francis Ford Coppola", "Crime", 10, 14.99},
	{"Pulp Fiction", "Quentin Tarantino", "Crime", 8, 12.99},
	{"The Dark Knight", "Christopher Nolan", "Action", 10, 17.99},
	{"Forrest Gump", "Robert Zemeckis", "Drama", 9, 15.99}
	};
	string searchTitle;
	cout << "Введите название фильма для поиска: ";
	getline(cin, searchTitle);
	bool found = false;
	for (const auto& store : stores) {
		if (store.title == searchTitle) {
			cout << "Фильм найден: " << store.title << ", Режисер: " << store.director
				<< ", Жанр: " << store.genre << ", Рейтинг: " << store.rating
				<< ", Цена: $" << store.price << endl;
			found = true;
		}
	}
    
}

