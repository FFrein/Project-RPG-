
//void printVin() {
  //  cout << "==================" << endl;
 //   cout << "======������!=====" << endl;
  //  cout << "==================" << endl;
//}
//void printLose() {
  //  cout << "==================" << endl;
  //  cout << "~~~���������...~~~" << endl;
  //  cout << "==================" << endl;
//}
#include <iostream>
using namespace std;
void voin(int* health_hero, int* health_mob, int damag, int damag_weap, int level_hero, int mob_lvl, int m1, int* stom, int mob_damage);
int archer(int* health_hero, int* health_mob, int damag, int damag_weap, int level_hero, int mob_lvl, int m1, int agility_hero, int* stom, int mob_damage);
int mag(int* health_hero, int* health_mob, int damag, int damag_weap, int level_hero, int mob_lvl, int m1, int intellect_hero, int* stom, int mob_damage);
void enemy(int* choose_monster, int* mob_health, int* mob_damage, int* level_mob);
void main()
{
	setlocale(LC_ALL, "Rus");
	int hero_type, hero_health = 100, hero_agility = 10, hero_intellect = 10, hero_money, hero_level = 1, hero_poison, exp = 0;
	string hero_name;
	string hero_type_name;
	int money = 0;
	int health_mob = 0;
	int damage_mob = 0;
	int damage_weapon = 0;
	int damage = 1;
	hero_health = 10;
	int m;
	int mob_level;
	int stomina = 100;
	srand(time(NULL));

	int monster_choose = (rand() % 7);//����� �������
	mob_level = (rand() % hero_level + 5);
	enemy(&monster_choose, &health_mob, &damage_mob, &mob_level);
	cout << "������� ��� ����� ����, ������, ���" << endl;
	cin >> hero_type;
	do {
		cout << "1 ������� " << endl << "2 ��������� " << endl;
		cin >> m;
		if (m == 2)
		{

			if (hero_type == 1)
			{
				voin(&hero_health, &health_mob, damage, damage_weapon, hero_level, mob_level, m, &stomina, damage_mob);

			}
			if (hero_type == 2)
			{
				archer(&hero_health, &health_mob, damage, damage_weapon, hero_level, mob_level, m, hero_agility, &stomina, damage_mob);
			}
			if (hero_type == 3)
			{
				mag(&hero_health, &health_mob, damage, damage_weapon, hero_level, mob_level, m, hero_intellect, &stomina, damage_mob);
			}
		}
		else
		{
			if (hero_level < mob_level)
			{
				cout << "�� ������� ������" << endl;
				hero_health -= (100 + hero_health) / 10;
				cout << "����� ����� :" << hero_health << endl;

			}
			else
			{
				cout << "�� ������� 10 ������" << endl;
				hero_health -= (hero_health + 200) / 2;
				cout << "����� ����� :" << hero_health << endl << endl;
			}
			break;
		}
	} while (health_mob >= 0 && hero_health >= 0);
	if (health_mob <= 0)
	{
		cout << "You win!" << endl;
		if (mob_level > hero_level)
		{
			money += 50;
			cout << "�� ���������" << money << "������ " << endl;
			exp += 50;
			cout << "�� ��������� 50 �����" << endl;
			cout <<"� ��� " << exp << " �����" << endl;

		}
		else
		{
			money += 30;
			cout << "�� ��������� " << money << " ������ " << endl;
			exp += 30;
			cout << "�� ��������� 30 �����" << endl;
			cout <<"� ��� " << exp << " �����" << endl;
		}
	}
	if (hero_health <= 0)
	{
		cout << "You lose!";
	}
}

void voin(int* health_hero, int* health_mob, int damag, int damag_weap, int level_hero, int mob_lvl, int m1, int* stom, int mob_damage)
{

	damag = (level_hero * 10) + damag_weap;
	cout << "1 ����� ������� " << endl << "2 ������� ������ " << endl << "3 ����������� " << endl;
	cin >> m1;
	if (1 > 4 && m1 < 0)
	{
		cout << "�� �� ���-���" << endl;
	}
	if (m1 == 1)
	{

		cout << "���� �� ����� : " << damag << endl;
		*health_mob -= damag;
		cout << "� ����� : " << *health_mob << " hp" << endl;
		cout << "���������� ���� : " << mob_damage << endl;
		*health_hero -= mob_damage;
		cout << "����� ����� : " << *health_hero << " hp " << endl;
		*stom -= 30;
		cout << "������������ : " << *stom << endl;

	}
	if (m1 == 2)
	{

		cout << "���� �� ����� " << damag << " ������ " << endl;
		*health_mob -= damag;
		cout << "� ����� " << *health_mob << " ������ " << endl;
		cout << "���������� ���� :  " << mob_damage << endl;
		*health_hero -= mob_damage;
		cout << "����� ����� : " << *health_hero << endl;
		*stom -= 15;
		cout << "������������ : " << *stom << endl;

	}
	if (m1 == 3)
	{
		cout << "� ����� " << *health_mob << " ������ " << endl;
		cout << "���������� ���� :  " << mob_damage / 2 << endl;
		*health_hero -= mob_damage / 2;
		cout << "����� ����� : " << *health_hero << endl;
		*stom += 15;
		cout << "������������ : " << *stom << endl;
	}


}

int archer(int* health_hero, int* health_mob, int damag, int damag_weap, int level_hero, int mob_lvl, int m1, int agility_hero, int* stom, int mob_damage)
{
	damag = damag_weap + ((agility_hero / 2) * level_hero);
	cout << "1 ��������� �������" << endl << "2 �������� ������ " << endl << "3 �����������" << endl;
	cin >> m1;
	if (1 > 4 && m1 < 0)
	{
		cout << "�� �� ���-���" << endl;
	}
	if (m1 == 1)
	{
		cout << "���� �� ����� : " << damag << endl;
		*health_mob -= damag;
		cout << "� ����� : " << *health_mob << " hp" << endl;
		cout << "���������� ���� : " << mob_damage << endl;
		*health_mob -= mob_damage;
		cout << "����� ����� : " << *health_mob << " hp " << endl;
		*stom -= 15;
		cout << "������������ : " << *stom << endl;

	}
	if (m1 == 2)
	{

		cout << "���� �� �����  " << damag << " hp " << endl;
		*health_mob -= damag;
		cout << "� ����� " << *health_mob << " hp" << endl;
		cout << "���������� ���� :  " << mob_damage << " hp " << endl;
		*health_hero -= mob_damage;
		cout << "����� ����� : " << *health_hero << " hp" << endl;
		*stom -= 30;
		cout << "������������ : " << *stom << endl;

	}
	if (m1 == 3)
	{
		cout << "� ����� " << *health_mob << " hp" << endl;
		cout << "���������� ���� :  " << (mob_damage * 2) / 3 << " hp" << endl;
		*health_hero = (*health_hero * 20) / 100;
		cout << "����� ����� : " << *health_hero << " hp" << endl;
		*stom += 15;
		cout << "������������ : " << *stom << endl;
	}
	return(m1);
}

int mag(int* health_hero, int* health_mob, int damag, int damag_weap, int level_hero, int mob_lvl, int m1, int intellect_hero, int* stom, int mob_damage)
{
	damag = damag_weap + ((intellect_hero / 2) * level_hero);
	cout << "1 ������� ������� " << endl << "2 ������� ������� " << endl << "3 �����������" << endl;
	cin >> m1;
	if (m1 > 4 && m1 < 0)
	{
		cout << "�� �� ���-���" << endl;
	}
	if (m1 == 1)
	{

		cout << "���� �� ����� : " << damag << endl;
		*health_mob -= damag;
		cout << "� ����� : " << *health_mob << " hp" << endl;
		cout << "���������� ���� : " << mob_damage << " hp" << endl;
		*health_hero -= mob_damage;
		cout << "����� ����� : " << *health_hero << endl;
		*stom -= 20;
		cout << "������������ : " << *stom << endl;
	}
	if (m1 == 2)
	{
		cout << "���� �� ����� : " << damag + 20 << " hp " << endl;
		*health_hero -= damag + 20;
		cout << "� ����� " << *health_mob << " hp" << endl;
		cout << "���������� ���� : " << mob_damage << " hp" << endl;
		*health_hero -= mob_damage;
		cout << "����� ����� : " << *health_hero << " hp" << endl;
		*stom -= 30;
		cout << "������������ : " << *stom << endl;
	}
	if (m1 == 3)
	{
		cout << "� ����� " << *health_mob << " ������" << endl;
		cout << "���������� ���� :  " << (mob_damage * 3) / 4 << " hp" << endl;
		*health_hero -= (mob_damage * 3) / 4;
		cout << "����� ����� : " << *health_hero << " hp" << endl;
		*stom += 15;
		cout << "������������ : " << *stom << endl;
	}
	return(m1);
}
void enemy(int* choose_monster, int* mob_health, int* mob_damage, int* level_mob)// ����� ������
{
	string mob_name;
	if (*choose_monster == 0)
	{
		string mob_name = "Wizard";
		cout << "�� ��������� : " << endl << '\t' << mob_name;
		cout << " ����e�� : " << level_mob << endl;
		*mob_health = 10 * *level_mob;
		*mob_damage = *level_mob * 2;
		cout << "����� ����� : " << *mob_health << endl << "���� ����� : " << *mob_damage << endl;
	}
	if (*choose_monster == 1)
	{
		string mob_name = "Snake";
		cout << "�� ��������� : " << endl << '\t' << mob_name;
		cout << " ����e�� : " << level_mob << endl;
		*mob_health = 10 * *level_mob;
		*mob_damage = *level_mob * 2;
		cout << "����� ����� : " << *mob_health << endl << "���� ����� : " << *mob_damage << endl;
	}
	if (*choose_monster == 2)
	{
		string mob_name = "Rat";
		cout << "�� ��������� : " << endl << '\t' << mob_name;
		cout << " ����e�� : " << *level_mob << endl;
		*mob_health = 10 * (*level_mob);
		*mob_damage = *level_mob * 2;
		cout << "����� ����� : " << *mob_health << endl << "���� ����� : " << *mob_damage << endl;
	}
	if (*choose_monster == 3)
	{
		string mob_name = "Dragon";
		cout << "�� ��������� : " << endl << '\t' << mob_name;
		cout << " ����e�� : " << *level_mob << endl;
		*mob_health = 10 * *level_mob;
		*mob_damage = *level_mob * 2;
		cout << "����� ����� : " << *mob_health << endl << "���� ����� : " << *mob_damage << endl;
	}
	if (*choose_monster == 4)
	{
		string mob_name = "wolf";
		cout << "�� ��������� : " << endl << '\t' << mob_name;
		cout << " ����e�� : " << *level_mob << endl;
		*mob_health = 10 * *level_mob;
		*mob_damage = *level_mob * 2;
		cout << "����� ����� : " << *mob_health << endl << "���� ����� : " << *mob_damage << endl;
	}
	if (*choose_monster == 5)
	{
		string mob_name = "Evil_archer";
		cout << "�� ��������� : " << endl << '\t' << mob_name;
		cout << " ����e�� : " << *level_mob << endl;
		*mob_health = 10 * *level_mob;
		*mob_damage = *level_mob * 2;
		cout << "����� ����� : " << *mob_health << endl << "���� ����� : " << *mob_damage << endl;
	}
	if (*choose_monster == 6)
	{
		string mob_name = "Demon";
		cout << "�� ��������� : " << endl << '\t' << mob_name;
		cout << " ����e�� : " << *level_mob << endl;
		*mob_health = 10 * *level_mob;
		*mob_damage = *level_mob * 2;
		cout << "����� ����� : " << *mob_health << endl << "���� ����� : " << *mob_damage << endl;
	}
	if (*choose_monster == 7)
	{
		string mob_name = "Evil_knight";
		cout << "�� ��������� : " << endl << '\t' << mob_name;
		cout << " ����e�� : " << *level_mob << endl;
		*mob_health = 10 * *level_mob;
		*mob_damage = *level_mob * 2;
		cout << "����� ����� : " << *mob_health << endl << "���� ����� : " << *mob_damage << endl;
	}

}