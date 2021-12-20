#include <iostream>
#include<string>
#include<conio.h>
#include <math.h>
#include<Windows.h>
#include "ClassSelection.h"
#include "Shop.h"

string ch;

using namespace std;
void statsHero();

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RUS");
	ClassSelection();
choosing:
	statsHero();
	cout << "Сделай выбор: ";
	cin >> ch;
	switch (ch[0])
	{
	case's':
		system("cls");
		Store();

	default:
		system("cls");
		Sleep(50);
		goto choosing;
	}
}


void statsHero() {
	cout << "--------------------------------------------------------------------------------------" << endl;
	cout<<hero_type_name << " " << hero_name << " уровень " << hero_level << endl;
	cout << "Здоровье: " << hero_health << endl;
	cout << "Ловкость: " << hero_agility << endl;
	cout << "Интелект: " << hero_intellect << endl;
	cout << "Зелья: " << hero_poison << endl << endl;
	cout << "Золото: " << hero_money << endl;
	cout << "--------------------------------------------------------------------------------------" << endl;
}





 