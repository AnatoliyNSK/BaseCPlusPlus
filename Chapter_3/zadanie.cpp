#include<iostream>

using namespace std;

inline void keep_window_open() { char ch; cin>>ch; } 

int main(int argc, char const *argv[])
{
	cout << "������ ��� �����: ";
	string first_name;
	cin >> first_name;
	cout << "\n��ண�� " << first_name << ',';
	keep_window_open();
	return 0;
}