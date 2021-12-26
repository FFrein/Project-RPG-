#include <iostream>
#include <math.h>
#include <string>
#include<Windows.h>
#include <cctype>


using namespace std;
int hero_type, hero_health, hero_agility, hero_intellect, hero_money, hero_level, hero_poison;
string hero_name;
string hero_type_name;

int ClassSelection()
{
	system("color 37");
	cout << "Приветствую тебя, странник. Как тебя зовут? ";
	cin >> hero_name;
classes:
	cout << "Класс героя: " << endl;
	cout << "1)Воин" << endl;
	cout<< "           |     " << endl;
	cout << "           |     " << endl;
	cout << "           |     " << endl;
	cout << "          ---    " << endl;
	cout << "           ]     " << endl;
	cout << "2)Лучник" << endl;
	cout << "           |\\        " << endl;
	cout << "           | |        " << endl;
	cout << "        >--| |------> " << endl;
	cout << "           | |        " << endl;
	cout << "           |/         " << endl;
	cout << "3)Маг" << endl;
	cout << "         _______            " << endl;
	cout << "        /       \\     -XX-  " << endl;
	cout << "       |  o    o |     ||   " << endl;
	cout << "       |         |     ||   " << endl;
	cout << "       |   \\---/ |     ||   " << endl;
	cout << "        \\_______/      ||   " << endl;
	cout << "                       ||   " << endl;
	cout << "                      /||\\   " << endl;

choosing_class:
	cin.ignore(1000, '\n');
	cin >>  hero_type;
	if (hero_type <= 0 || hero_type >= 4||cin.fail()==true) // проверка корректности
	{
		cin.clear();
		system("cls");
		cout << "Введите корректно" << endl;
		goto classes;
		
	}
	

	if (hero_type == 1)
	{
		hero_health = 100;
		hero_agility = 50;
		hero_intellect = 10;
		hero_money = 100;
		hero_level = 1;
		hero_poison = 0;
		hero_type_name = "Воин";
	}
	if (hero_type == 2)
	{
		hero_health = 100;
		hero_agility = 30;
		hero_intellect = 20;
		hero_money = 100;
		hero_level = 1;
		hero_poison = 0;
		hero_type_name = "Лучник";
	}
	if (hero_type == 3)
	{
		hero_health = 100;
		hero_agility = 10;
		hero_intellect = 50;
		hero_money = 100;
		hero_level = 1;
		hero_poison = 0;
		hero_type_name = "Маг";
	}
	

	system("cls"); //очистка консоли
	return 0;
}

