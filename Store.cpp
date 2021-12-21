#include <iostream>
#include <math.h>
#include <string>
using namespace std;
void products();

void Store() ////// Разобраться с переходом переменныъ из одной функции в другую
{ 
shop_c:
	setlocale(LC_ALL, "RUS");
	products();

	int action_num; ///Номера лота в магазите

	/// Цикл покупки и выхода из магазина
shop_ch:
	do {
		cin >> action_num;
		if (action_num == 1) {
			if (hero_money >= 10) {
				hero_health = hero_health + 10; // 10 -- увеличили здоровье на 10 едениц // МОЖНО МЕНЯТЬ НА ЧИСЛО, КОТОРОЕ ВАМ НУЖНОÍÓÆÍÎ
				hero_money = hero_money - 10;
				system("cls");
				goto shop_c;
			}
			else {
				system("cls");
				products();
			    cout << endl << "У вас недостаточно денег" << endl;
				goto shop_ch;
			}
		};

		if (action_num == 2) {
			if (hero_money >= 10) {
				hero_agility = hero_agility + 10;
				hero_money = hero_money - 10;
				system("cls");
				goto shop_c;
			}
			else {
				system("cls");
				products();
				cout << endl << "У вас недостаточно денег" << endl;
				goto shop_ch;
			}
		};

		if (action_num == 3) {
			if (hero_money >= 10) {
				hero_intellect = hero_intellect + 10;
				hero_money = hero_money - 10;
				system("cls");
				goto shop_c;
			}
			else {
				system("cls");
				products();
				cout << endl << "У вас недостаточно денег" << endl;
				goto shop_ch;
			}
		};

		if (action_num == 4) {
			if (hero_money >= 5) {
				hero_money = hero_money - 5;
				hero_poison = hero_poison + 1;
				system("cls");
				goto shop_c;
			}
			else {
				system("cls");
				products();
				cout << endl << "У вас недостаточно денег" << endl;
				goto shop_ch;
			}
		};

		if (action_num == 5) {
			system("cls");
			break;
		}
		if (action_num >5) {
			system("cls");
			goto shop_c;
		};

		products();

	} while (action_num != 5);

}

void products() {
	cout << "Золото :" << hero_money << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "Приветствую тебя, странник. Что желаешь приобрести?" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "1.Книга увеличения здоровья - цена 10 монет" << endl << "2.Книга увеличения ловкости - цента 10 монет" << endl;

	cout << "3.Книга увеличения интеллекта - цена 10 монет " << endl << "4.Зелье восстановления здоровья - цена 5 монет" << endl;

	cout << "5.Выход из магазина" << endl;
}
