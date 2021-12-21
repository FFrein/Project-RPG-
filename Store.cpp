#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void Store() ////// Разобраться с переходом переменныъ из одной функции в другую
{
	setlocale(LC_ALL, "RUS");

	cout << "--------------------------------------------------------"<<endl;
	cout <<	 "Приветствую тебя, странник. Что желаешь приобрести?"<<endl;
	cout << "--------------------------------------------------------"<<endl;
	cout << "МАГАЗИН"<<endl;
	cout << "1.Книга увеличения здоровья - цена 10 монет  2.Книга увеличения ловкости - цента 10 монет"<<endl;

	cout << "3.Книга увеличения интеллекта - цена 10 монет 4.Зелье восстановления здоровья - цена 5 монет" << endl;

	cout << "5.Выход из магазина" << endl;

	int action_num; ///Номера лота в магазите

	/// Цикл покупки и выхода из магазина

	do {
		cin >> action_num;
		if (action_num == 1) {
			if ( hero_money > 10) {
				hero_health = hero_health + 10; // 10 -- увеличили здоровье на 10 едениц // МОЖНО МЕНЯТЬ НА ЧИСЛО, КОТОРОЕ ВАМ НУЖНОÍÓÆÍÎ
				hero_money = hero_money - 10;
			}
			else{
				cout << "У вас недостаточно денег" << endl;
			}
		};

		if (action_num == 2) {
			if (hero_money > 10) {
				hero_agility = hero_agility + 10;
				hero_money = hero_money - 10;
			}
			else {
				cout << "У вас недостаточно денег" << endl;
			}
		};

		if (action_num == 3) {
			if (hero_money > 10) {
				hero_intellect = hero_intellect + 10;
				hero_money = hero_money - 10;
			}
			else {
				cout << "У вас недостаточно денег << endl;
			}
		};

		if (action_num == 4) {
			if (hero_money > 10) {
				hero_money = hero_money - 10;
				hero_poison = hero_poison + 1;
			}
			else {
				cout << "У вас недостаточно денег" << endl;
			}
		};

		if (action_num == 5) {
			///Написать функцию выхода в лагерь / меню Никиты

		};
		
		cout << "1. Книга увеличения здоровья - цена 10 монет  2.Книга увеличения ловкости - цента 10 монет " << endl;

		cout << "3.Книга увеличения интеллекта - цена 10 монет 4.Зелье восстановления здоровья - цена 5 монет" << endl;

		cout << "5. Выход из магазина" << endl;
		
	} while (action_num != 5);

}
