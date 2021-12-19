#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Приветствую тебя, странник. Как тебя зовут? ";
	string hero_name;
	string hero_type_name;
	cin >> hero_name;
	cout << "Тип героя: " << endl
		<< "1)Воин" << endl
		<< "2)Лучник" << endl
		<< "3)Маг" << endl;
	int hero_type, hero_health, hero_agility, hero_intellect, hero_money, hero_level;
	cin >> hero_type;

	if (hero_type < 0 || hero_type > 4) // проверка корректности
	{
		do {
			cout << "Введите корректно";
			cin >> hero_type;
		} while (hero_type < 0 || hero_type > 3);
	}

		if (hero_type == 1)
		{
			hero_health = 10;
			hero_agility = 20;
			hero_intellect = 5;
			hero_money = 100;
			hero_level = 1;
			hero_type_name = "Воин";
		}
		if (hero_type == 2)
		{
			hero_health = 10;
			hero_agility = 20;
			hero_intellect = 5;
			hero_money = 100;
			hero_level = 1;
			hero_type_name = "Лучник";
		}
		if (hero_type == 3)
		{
			hero_health = 10;
			hero_agility = 20;
			hero_intellect = 5;
			hero_money = 100;
			hero_level = 1;
			hero_type_name = "Маг";
		}
		system("cls"); //очистка консоли
		cout << "Приветсвую тебя, " << hero_type_name << " " << hero_name << ". Добро пожаловать в игру :)\n Вот твои начальные характеристики:" << endl << //персонаж и его характеристики
			"Здоровье: " << hero_health << endl <<
			"Ловкость: " << hero_agility << endl <<
			"Интеллект: " << hero_intellect << endl <<
			"Начальные деньги: " << hero_money << endl;

}