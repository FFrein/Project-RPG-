#include <iostream>

using namespace std;
int choice;

void Charachter();
void HeroAttak();
int boss_health = 2000;
int boss_block;
int x;
int status=0;



int Boss() {
start:
	if (hero_health <= 0) {
		return 0;
	}
	if (boss_health <= 0) {
		status = 1;
		return 0;
	}

	system("color 0A");
	srand(time(NULL));
	int boss_dmg = rand() % 100;
	Charachter();
	cout << "Ваше здоровье " << hero_health << endl;
	cout << "1 - ATTACK!!!   "  <<  "2 - Block   " << "3 - Run   "<< "4 - Use poison" << endl;
	cin.ignore(1000, '\n');
	cin >>choice;
	if (choice <= 0|| choice>= 5 || cin.fail() == true) // проверка корректности
	{
		cin.clear();
		system("cls");
		cout << "Введите корректно" << endl;
		goto start;
	}
	switch (choice)
	{
	case 1:
		if (hero_level < 20) {
			system("cls");
			Charachter();
			cout << "ХАХАХАХААХАХ идиот" << endl;
			Sleep(2000);
			system("cls");
			int s = rand() % 30;
			boss_health -= s;
			Charachter();
			cout << "Вы нанесли " << s << " урона";
			Sleep(2000);
			system("cls");
			Charachter();
			cout << "Вы получили 99999999999999999999999999999999999999999999 урона";
			hero_health -= 9999;
			Sleep(2000);
			break;
		}
		else
		{
			system("cls");
			Charachter();
			cout << "Вы нанесли " << damage << " урона" << endl;
			boss_health -= damage;
			cout << "Вы получили " << boss_dmg << "урона" << endl;

		}

	case 2:
		if (hero_level < 20) {
			system("cls");
			Charachter();
			x = rand() % 60;
			if (x < 20) {
				cout << "ХАХАХАХ, твой блок тебя не спасет!!!" << endl;
			}
			else if (x >= 20 && x <= 40) {
				cout << "ТЫ ДУМАЕШЬ ЭТО ТЕБЕ ПОМОЖЕТ?!" << endl;
			}
			else {
				cout << "Ты ничтожество, СДОХНИ!!!";
			}
			Sleep(2000);
			system("cls");
			Charachter();
			cout << "Вы получили 99999999999999999999999999999999999999999999 урона";
			hero_health -= 9999;
			break;
		}
		else {
			 x = rand() % 50;
			if (x >=25) {
				system("cls");
				Charachter();
				cout << "Вы не сдержали урон, вам не повезло";
				system("cls");
				Charachter();
				int l = boss_dmg;
				cout << "Вы получили урон: " << l;
				hero_health -= boss_dmg;
				Sleep(2000);
				system("cls");
				goto start;
			}
			else {
				system("cls");
				Charachter();
				x = rand() % 50;
				if (x <= 25) {
					cout << "Вы удержали удар, и сразу же атакуете";
					boss_health -= damage;
				}
				else {
					cout << "Вы не сдержали удар, вам нанесли " << boss_dmg;
					hero_health -= boss_dmg;
				}
				Sleep(2000);
				system("cls");
				goto start;
			}
		}

	case 3:
		system("cls");
		Charachter();
		cout << "Правильно, БЕГИ!!!";
		Sleep(2000);
		system("cls");
		break;
		
	case 4:
		if (hero_poison >= 1) {
			system("cls");
			Charachter();
			cout << "Вы выпили зелье здоровья, вы чувствуете, что вы непобедимы.  +15 к здоровью";
			hero_poison -= 1;
			hero_health += 15;
			Sleep(2000);
			system("cls");
			goto start;
		}
		else {
			system("cls");
			Charachter();
			cout << "К сожалению у вас нет зелий.";
			Sleep(2000);
			system("cls");
			goto start;
		}
		
	default:
		break;
	}
		
}


void Charachter() {
	cout << "              |\\  _____  /|                " << endl
		<< "              | \\/__ __\\/ |" << endl
		<< "               \\_ \\___/ _/" << endl
		<< "           _/\\___\\_____/___/\\__" << endl
		<< "          / /                \\ \\" << endl
		<< "         /  |       ||       |  \\" << endl
		<< "         |   \\______/\\______/   |  " << endl
		<< "          \\   /\\          /\\   /" << endl
		<< "-------------------BOSS------  HEALTH - " << boss_health<<" -------------";
	cout << endl;
}

void HeroAttack() {
	
}
