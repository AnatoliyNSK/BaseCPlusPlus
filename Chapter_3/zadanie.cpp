#include<iostream>

using namespace std;

inline void keep_window_open() { char ch; cin>>ch; } 

int main(int argc, char const *argv[])
{
	cout << "Введите имя адресата: ";
	string first_name;
	cin >> first_name;

	cout << "Введите имя приятеля: ";
	string friend_name;
	cin >> friend_name;

	char friend_sex = 0;
	cout << "Введите значение м, если ваш друг - мужчина,\n"
	     << "если ваш друг, женщина - введите значение - f\n";
	cin >> friend_sex;
	string friend_sex_stroka;

	if (friend_sex == 'm')
	     {
	     	friend_sex_stroka = "Если ты увидишь " + 
	     	friend_name + ", пожалуйста, попроси его позвонить мне.";
	     }
	if (friend_sex == 'f')
	     {
	     	friend_sex_stroka = "Если ты увидишь " + 
	     	friend_name + ", пожалуйста, попроси её позвонить мне.";
	     }          

	cout << "\nДорогой " << first_name << ", здравствуй!\n"
	     << "Как дела? У меня все хорошо. Я скучаю по тебе.\n"
	     << "Давно ли ты встречал " << friend_name << "?\n"
	     << friend_sex_stroka << "\n";
	keep_window_open();
	return 0;
}