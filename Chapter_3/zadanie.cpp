#include<iostream>

using namespace std;

inline void keep_window_open() { char ch; cin>>ch; } 

int main(int argc, char const *argv[])
{
	cout << "Введите имя адресата: ";
	string first_name;
	cin >> first_name;
	cout << "\nДорогой " << first_name << ',';
	keep_window_open();
	return 0;
}