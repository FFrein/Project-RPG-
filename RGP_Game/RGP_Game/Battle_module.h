#include <iostream>
#include <string>

using namespace std;
void voin();
void archer();
void mag();
void enemy();

int health_mob = 0;
int damage_mob = 0;
int damage_weapon = 0;
int damage = 1;
string m;
int experience ;
int stomina = 100;
int monster_choose;

int mob_level;

void Battle() {
	int start_health = hero_health;
	int win_money;
	srand(time(NULL));
	monster_choose = (rand() % 7);
	setlocale(LC_ALL, "Rus");
	experience = 0;
	mob_level = (rand() % (hero_level + 5)) + 1;
	enemy();
mchose:
	do {
		cout << "1 Сбежать " << endl << "2 Атаковать " << endl;
		cin >> m;

		if (m[0] == '2')
		{

			if (hero_type == 1)
			{
				voin();

			}
			if (hero_type == 2)
			{
				archer();
			}
			if (hero_type == 3)
			{
				mag();
			}
		}
		else if(m[0] == '1')
		{

			if (hero_level <= mob_level)
			{
				system("cls");
				cout << "Вы теряете жизнии в размере - " << 0.1 * hero_health << endl;
				hero_health -= 0.1 * hero_health;
				cout << "Жизни героя :" << hero_health << endl;
				Sleep(2000);

			}
			else
			{
				system("cls");
				cout << "Вы теряете жизнии в размере - " << 0.01 * hero_health << endl;
				hero_health -= hero_health * 0.01;
				cout << "Жизни героя :" << hero_health << endl << endl;
				Sleep(2000);
			}
			break;
		}
		else {
			system("cls");
			cout << "Введите корректно" << endl;
			goto mchose;
		}
	} while (health_mob > 0 && hero_health >0);
	if (health_mob <= 0)
	{
		if (mob_level > hero_level)
		{
			system("cls");
			win_money = (start_health - hero_health) * 2;
			hero_money += win_money ;
			cout << "Вы получаете" <<win_money << "золота " << endl;
			experience += (start_health - hero_health) * 2;
			cout << "Вы получаете "<<experience<<" опыта" << endl;
			cout << "У вас " << experience << " опыта" << endl;
			Sleep(3000);
		}
		else
		{
			system("cls");
			win_money = start_health - hero_health + 10;
			hero_money += win_money;
			cout << "Вы получаете" << win_money << "золота " << endl;
			experience += start_health - hero_health;
			cout << "Вы получаете " << experience << " опыта" << endl;
			cout << "У вас " << experience << " опыта" << endl;
			Sleep(3000);
		}
	}
}

void voin()
{
	system("cls");
	damage = (hero_level * 10) + damage_weapon;
voinchose:
	if (hero_health <= 0 || health_mob <= 0) {
		exit;
	}
	cout << "1 - атака оружием " << endl << "2 - метнуть кинжал " << endl << "3 - Блокировать" << endl << "4 - Использовать зелье здоровья" << endl << "5 - Назад" << endl;
	cin.ignore(1000, '\n');
	cin >> m;
	switch (m[0]) {
	case'1':
		if (stomina >= 15) {
		system("cls");
		cout << "урон по врагу : " << damage << endl;
		health_mob -= damage;
		cout << "У врага : " << health_mob << " hp" << endl;
		cout << "Получаемый урон : " << damage_mob << endl;
		hero_health -= damage_mob;
		cout << "Жизни героя : " << hero_health << " hp " << endl;
		stomina -= 15;
		cout << "Выносливость : " << stomina << endl;
		Sleep(3000);
		system("cls");
		break;
		}
		else {
			system("cls");
			cout << "Вы устали, вам не хватает выносливости";
			Sleep(2000);
			system("cls");
			break;
		}
	case '2':
		if (stomina >= 30) {
		system("cls");
		cout << "урон по врагу  " << damage*2 << " hp " << endl;
		health_mob -= damage*2;
		cout << "У врага " << health_mob << " hp" << endl;
		cout << "Получаемый урон :  " << damage_mob << " hp " << endl;
		hero_health -= damage_mob;
		cout << "Жизни героя : " << hero_health << " hp" << endl;
		stomina -= 30;
		cout << "Выносливость : " << stomina << endl;
		Sleep(3000);
		system("cls");
		break;
		}
		else {
			system("cls");
			cout << "Вы устали, вам не хватает выносливости";
			Sleep(2000);
			system("cls");
			break;
		}
	case'3':
		system("cls");
		cout << "У врага " << health_mob << " hp" << endl;
		cout << "Жизни героя : " << hero_health << " hp" << endl;
		stomina += 15;
		cout << "Выносливость : " << stomina << endl; Sleep(2000);
		system("cls");
		break;
	case'4':
		if (hero_poison >= 1) {
			system("cls");
			cout << "Вы выпили зелье здоровья, вы чувствуете, что вы непобедимы.  +15 к здоровью";
			hero_poison -= 1;
			hero_health += 15;
			Sleep(2000);
			system("cls");
		}
		else {
			system("cls");
			cout << "К сожалению у вас нет зелий.";
			Sleep(2000);
			system("cls");
			goto voinchose;
		}
		break;
	case'5':
		system("cls");
		break;

	default:
		system("cls");
		cout << "Введите корректно"<<endl;
		goto voinchose;
	}
	
}

void archer()
{
	system("cls");
	damage =  hero_agility / 2;
voinchose:
	if (hero_health <= 0 || health_mob <= 0) {
		exit;
	}
	cout << "1 - Одиночный выстрел" << endl << "2 - Огненная стрела " << endl << "3 - Блокировать" << endl << "4 - Использовать зелье здоровья" << endl << "5 - Назад" << endl;
	cin.ignore(1000, '\n');
	cin >> m;
	switch (m[0]) {
	case'1':
		if (stomina >= 15) {
		system("cls");
		cout << "урон по врагу : " << damage << endl;
		health_mob -= damage;
		cout << "У врага : " << health_mob << " hp" << endl;
		cout << "Получаемый урон : " << damage_mob << endl;
		hero_health -= damage_mob;
		cout << "Жизни героя : " << hero_health << " hp " << endl;
		stomina -= 15;
		cout << "Выносливость : " << stomina << endl;
		Sleep(3000);
		system("cls");
		break;
		}
		else {
			system("cls");
			cout << "Вы устали, вам не хватает выносливости";
			Sleep(2000);
			system("cls");
			break;
		}
	case '2':
		if (stomina >= 30) {
		system("cls");
		cout << "урон по врагу  " << damage * 2 << " hp " << endl;
		health_mob -= damage * 2;
		cout << "У врага " << health_mob << " hp" << endl;
		cout << "Получаемый урон :  " << damage_mob << " hp " << endl;
		hero_health -= damage_mob;
		cout << "Жизни героя : " << hero_health << " hp" << endl;
		stomina -= 30;
		cout << "Выносливость : " << stomina << endl;
		Sleep(3000);
		system("cls");
		break;
		}
		else {
			system("cls");
			cout << "Вы устали, вам не хватает выносливости";
			Sleep(2000);
			system("cls");
			break;
		}
	case'3':
		system("cls");
		cout << "У врага " << health_mob << " hp" << endl;
		cout << "Жизни героя : " << hero_health << " hp" << endl;
		stomina += 15;
		cout << "Выносливость : " << stomina << endl; Sleep(2000);
		system("cls");
		break;
	case'4':
		if (hero_poison >= 1) {
			system("cls");
			cout << "Вы выпили зелье здоровья, вы чувствуете, что вы непобедимы.  +15 к здоровью";
			hero_poison -= 1;
			hero_health += 15;
			Sleep(2000);
			system("cls");
		}
		else {
			system("cls");
			cout << "К сожалению у вас нет зелий.";
			Sleep(2000);
			system("cls");
			goto voinchose;
		}
		break;
	case'5':
		system("cls");
		break;

	default:
		system("cls");
		cout << "Введите корректно" << endl;
		goto voinchose;
	}

}

void mag()
{
	system("cls");
	damage = hero_intellect/4;
voinchose:
	if (hero_health <= 0 || health_mob <= 0) {
		exit;
	}
	cout << "1 - Ударить молнией " << endl << "2 - Метнуть фаербол " << endl << "3 - Блокировать" << endl << "4 - Использовать зелье здоровья" << endl << "5 - Назад" << endl;
	cin.ignore(1000, '\n');
	cin >> m;
	switch (m[0]) {
	case'1':
		if (stomina >= 15) {
			system("cls");
			cout << "урон по врагу : " << damage << endl;
			health_mob -= damage;
			cout << "У врага : " << health_mob << " hp" << endl;
			cout << "Получаемый урон : " << damage_mob << endl;
			hero_health -= damage_mob;
			cout << "Жизни героя : " << hero_health << " hp " << endl;
			stomina -= 15;
			cout << "Выносливость : " << stomina << endl;
			Sleep(3000);
			system("cls");
			break;
		}
		else {
			system("cls");
			cout << "Вы устали, вам не хватает выносливости";
			Sleep(2000);
			system("cls");
			break;
		}
	case '2':
		if (stomina >= 30) {
		system("cls");
		cout << "урон по врагу  " << damage *2 << " hp " << endl;
		health_mob -= damage * 2;
		cout << "У врага " << health_mob << " hp" << endl;
		cout << "Получаемый урон :  " << damage_mob << " hp " << endl;
		hero_health -= damage_mob;
		cout << "Жизни героя : " << hero_health << " hp" << endl;
		stomina -= 30;
		cout << "Выносливость : " << stomina << endl;
		Sleep(3000);
		system("cls");
		break;
		}
		else {
			system("cls");
			cout << "Вы устали, вам не хватает выносливости";
			Sleep(2000);
			system("cls");
			break;
		}
	case'3':
		system("cls");
		cout << "У врага " << health_mob << " hp" << endl;
		cout << "Жизни героя : " << hero_health << " hp" << endl;
		stomina += 15;
		cout << "Выносливость : " << stomina << endl; Sleep(2000);
		system("cls");
		break;
	case'4':
		if (hero_poison >= 1) {
			system("cls");
			cout << "Вы выпили зелье здоровья, вы чувствуете, что вы непобедимы.  +15 к здоровью";
			hero_poison -= 1;
			hero_health += 15;
			Sleep(2000);
			system("cls");
		}
		else {
			system("cls");
			cout << "К сожалению у вас нет зелий.";
			Sleep(2000);
			system("cls");
			goto voinchose;
		}
		break;
	case'5':
		system("cls");
		break;

	default:
		system("cls");
		cout << "Введите корректно" << endl;
		goto voinchose;
	}

}

void enemy()// Выбор врагов
{
	string mob_name;
	if (monster_choose == 0)
	{
		string mob_name = "Wizard";
		cout << "Вы встретили : " << mob_name;
		cout <<" "<< mob_level << " уровня" << endl;
		health_mob = 20 * mob_level;
		damage_mob = mob_level * 3;
		cout << "Жизни врага : " << health_mob << endl << "Урон врага : " << damage_mob << endl;
	}
	if (monster_choose == 1)
	{
		string mob_name = "Snake";
		cout << "Вы встретили : " << mob_name;
		cout << " " << mob_level << " уровня" << endl;
		health_mob = 10 * mob_level;
		damage_mob = mob_level * 4;
		cout << "Жизни врага : " << health_mob << endl << "Урон врага : " << damage_mob << endl;
	}
	if (monster_choose == 2)
	{
		string mob_name = "Rat";
		cout << "Вы встретили : " << mob_name;
		cout << " " << mob_level << " уровня" << endl;
		health_mob = 10 * mob_level;
		damage_mob = mob_level;
		cout << "Жизни врага : " << health_mob << endl << "Урон врага : " << damage_mob << endl;
	}
	if (monster_choose == 3)
	{
		string mob_name = "Dragon";
		cout << "Вы встретили : " << mob_name;
		cout << " " << mob_level << " уровня" << endl;
		health_mob = 20 * mob_level;
		damage_mob = mob_level * 4;
		cout << "Жизни врага : " << health_mob << endl << "Урон врага : " << damage_mob << endl;
	}
	if (monster_choose == 4)
	{
		string mob_name = "wolf";
		cout << "Вы встретили : " << mob_name;
		cout << " " << mob_level << " уровня" << endl;
		health_mob = 10 * mob_level;
		damage_mob = mob_level * 3;
		cout << "Жизни врага : " << health_mob << endl << "Урон врага : " << damage_mob << endl;
	}
	if (monster_choose == 5)
	{
		string mob_name = "Evil_archer";
		cout << "Вы встретили : " << mob_name;
		cout << " " << mob_level << " уровня" << endl;
		health_mob = 15 * mob_level;
		damage_mob = mob_level * 7;
		cout << "Жизни врага : " << health_mob << endl << "Урон врага : " << damage_mob << endl;
	}
	if (monster_choose == 6)
	{
		string mob_name = "Demon";
		cout << "Вы встретили : " << mob_name;
		cout << " " << mob_level << " уровня" << endl;
		health_mob = 90 * mob_level;
		damage_mob = mob_level * 6;
		cout << "Жизни врага : " << health_mob << endl << "Урон врага : " << damage_mob << endl;
	}
	if (monster_choose == 7)
	{
		string mob_name = "Evil_knight";
		cout << "Вы встретили : " << mob_name;
		cout << " " << mob_level << " уровня" << endl;
		health_mob = 70 * mob_level;
		damage_mob = mob_level * 5;
		cout << "Жизни врага : " << health_mob << endl << "Урон врага : " << damage_mob << endl;
	}

}