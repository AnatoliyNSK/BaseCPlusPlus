#include<iostream>

using namespace std;

inline void keep_window_open() { char ch; cin>>ch; } 

int main(int argc, char const *argv[])
{
	cout << "������ ��� �����: ";
	string first_name;
	cin >> first_name;

	cout << "������ ��� ���⥫�: ";
	string friend_name;
	cin >> friend_name;

	char friend_sex = 0;
	cout << "������ ���祭�� �, �᫨ ��� ��� - ��稭�,\n"
	     << "�᫨ ��� ���, ���騭� - ������ ���祭�� - f\n";
	cin >> friend_sex;
	string friend_sex_stroka;

	if (friend_sex == 'm')
	     {
	     	friend_sex_stroka = "�᫨ �� 㢨���� " + 
	     	friend_name + ", ��������, ����� ��� ��������� ���.";
	     }
	if (friend_sex == 'f')
	     {
	     	friend_sex_stroka = "�᫨ �� 㢨���� " + 
	     	friend_name + ", ��������, ����� �� ��������� ���.";
	     }          

	cout << "\n��ண�� " << first_name << ", ��ࠢ���!\n"
	     << "��� ����? � ���� �� ���. � ���� �� ⥡�.\n"
	     << "����� �� �� ����砫 " << friend_name << "?\n"
	     << friend_sex_stroka << "\n";
	keep_window_open();
	return 0;
}