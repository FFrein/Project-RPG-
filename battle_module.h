
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
int voin(int health_hero, int health_mob, int damag, int damag_weap,int level_hero, int mob_lvl, int m1);
int archer(int health_hero,int health_mob,int damag,int damag_weap,int level_hero,int mob_lvl, int m1,int agility_hero);
int mag(int health_hero, int health_mob, int damag, int damag_weap, int level_hero, int mob_lvl, int m1, int intellect_hero);
void main()
{
	setlocale(LC_ALL, "Rus");
	int hero_type, hero_health = 100, hero_agility = 10, hero_intellect = 10, hero_money, hero_level = 1, hero_poison, exp = 0;
	string hero_name;
	string hero_type_name;
	int money = 0;
	int mob_health = 200;
	int damage_weapon = 50;
	int damage = 1;
	hero_health = 1000;
	int m;
	srand(time(NULL));
	string mob_name[11] = { "worm","lizard","snake"," rat","snake","trollsDragon","Dragon","Dragon","Evil knight","The mad king","Joffrey Baratheon" };
	int monster_choose = (rand() % 11);//����� �������
	int lvl_mob = (rand() % hero_level + 10);
	cout << "�� ��������� : " << endl << '\t' << mob_name[monster_choose] << " ������ : " << lvl_mob << endl;
	cout << "������� ��� ����� ����, ������, ���" << endl;
	cin >> hero_type;
	do {
		cout << "1 �������" << endl << "2 ���������" << endl;
		cin >> m;
		if (m == 2)
		{

			if (hero_type == 1)
			{
				voin(hero_health, mob_health, damage, damage_weapon, hero_level, lvl_mob, m);

			}
			if (hero_type == 2)
			{
				archer(hero_health, mob_health, damage, damage_weapon, hero_level, lvl_mob, m, hero_agility);
			}
			if (hero_type == 3)
			{
				mag(hero_health, mob_health, damage, damage_weapon, hero_level, lvl_mob, m, hero_intellect);
			}
		}
		else
		{
			if (hero_level < lvl_mob)
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
	} while (mob_health > 0 && hero_health > 0);
	if (mob_health == 0)
	{
		cout << "You win!" << endl;
		if (lvl_mob > hero_level)
		{
			exp = (hero_level / lvl_mob) * 100;
			money += (lvl_mob / hero_level) * 50;
			cout << "�� ���������" << money << "������ " << endl;
			cout << "�� ���������" << exp << " �����" << endl;
		}
		else
		{
			cout << "�� ���������" << exp << " �����" << endl;
			exp = (hero_level / lvl_mob) * 100;
			money += (lvl_mob / hero_level) * 100;
			cout << "�� ��������� " << money << " ������ " << endl;
		}
	}
	else
	{
		cout << "You lose!";
	}
}

int voin(int health_hero,int health_mob,int damag,int damag_weap,int level_hero,int mob_lvl,int m1)
{
	
		damag = damag_weap + (health_hero / 2);
		cout << "1 ����� ������� " << endl << "2 ������� ������ " << endl << endl;
		cin >> m1;
		if (1 > 4 && m1 < 0)
		{
			cout << "�� �� ���-���" << endl;
		}
		if (m1 == 1)
		{
			if (level_hero > mob_lvl)
			{
				cout << "���� �� ����� : " << damag << endl;
				health_mob -= damag;
				cout << "� ����� : " << health_mob << " hp" << endl;
				cout << "���������� ���� : 10 " << endl;
				health_mob -= 10;
				cout << "����� ����� : " << health_mob << endl;

			}
			else
			{
				cout << "���� �� ����� : " << damag << endl;
				health_mob -= damag;
				cout << "� ����� : " << health_mob << " hp" << endl;
				health_mob -= health_mob / 10;
				cout << "���������� ���� :  " << health_mob / 10 << endl;
				cout << "����� ����� : " << health_mob << endl;
			}
		}
		if (m1 == 2)
		{
			if (level_hero > mob_lvl)
			{
				cout << "���� �� ����� " << damag << "������ " << endl;
				health_mob -= damag;
				cout << "� ����� " << health_mob << "������" << endl;
				cout << "���������� ���� : 5 " << endl;
				health_hero -= 5;
				cout << "����� ����� : " << health_hero << endl;
			}
			else
			{
				cout << "���� �� ����� " << damag << "������ " << endl;
				health_mob -= damag;
				cout << "� ����� " << health_mob << "������" << endl;
				cout << "���������� ���� :  " << endl;
				health_hero = (health_hero * 5) / 100;
				cout << "����� ����� : " << health_hero << endl;
			}
		}
		return(m1);
	}

int archer(int health_hero, int health_mob, int damag, int damag_weap, int level_hero, int mob_lvl, int m1, int agility_hero)
{
	damag = damag_weap + (agility_hero * 1.50);
	cout << "1 ��������� �������" << endl << "2 �������� ������ " << endl << endl;
	cin >> m1;
	if (1 > 4 && m1 < 0)
	{
		cout << "�� �� ���-���" << endl;
	}
	if (m1 == 1)
	{
		if (level_hero > mob_lvl)
		{
			cout << "���� �� ����� : " << damag << endl;
			health_mob -= damag;
			cout << "� ����� : " << health_mob << " hp" << endl;
			cout << "���������� ���� : 10 " << endl;
			health_mob -= 10;
			cout << "����� ����� : " << health_mob << endl;

		}
		else
		{
			cout << "���� �� ����� : " << damag << endl;
			health_mob -= damag;
			cout << "� ����� : " << health_mob << " hp" << endl;
			health_mob -= health_mob / 10;
			cout << "���������� ���� :  " << health_mob / 10 << endl;
			cout << "����� ����� : " << health_mob << endl;
		}
	}
	if (m1 == 2)
	{
		if (level_hero > mob_lvl)
		{
			cout << "���� �� ����� - " << damag << "������ " << endl;
			health_mob -= damag;
			cout << "� ����� " << health_mob << "������" << endl;
			cout << "���������� ���� : 5 " << endl;
			health_hero -= 5;
			cout << "����� ����� : " << health_hero << endl;
		}
		else
		{
			cout << "���� �� ����� - " << damag << "������ " << endl;
			health_mob -= damag;
			cout << "� ����� " << health_mob << "������" << endl;
			cout << "���������� ���� :  " << endl;
			health_hero = (health_hero * 5) / 100;
			cout << "����� ����� : " << health_hero << endl;
		}
	}
	return(m1);
}

int mag(int health_hero, int health_mob, int damag, int damag_weap, int level_hero, int mob_lvl, int m1, int intellect_hero)
{
	damag = damag_weap + (1.34 * intellect_hero);
	cout << "1 ������� ������� " << endl << "2 ������� ������� " << endl << endl;
	cin >> m1;
	if (m1 > 4 && m1 < 0)
	{
		cout << "�� �� ���-���" << endl;
	}
	if (m1 == 1)
	{
		if (level_hero > mob_lvl)
		{
			cout << "���� �� ����� : " << damag << endl;
			health_mob -= damag;
			cout << "� ����� : " << health_mob << " hp" << endl;
			cout << "���������� ���� : 10 " << endl;
			health_hero -= 10;
			cout << "����� ����� : " << health_hero << endl;

		}
		else
		{
			cout << "���� �� ����� : " << damag << endl;
			health_mob -= damag;
			cout << "� ����� : " << health_mob << " hp" << endl;
			health_hero -= (health_hero + 100) / 10;
			cout << "���������� ���� :  " << (health_hero + 100) / 10 << endl;
			cout << "����� ����� : " << health_hero << endl;
		}
	}
	if (m1 == 2)
	{
		if (level_hero > mob_lvl)
		{
			cout << "���� �� ����� : " << damag + 20 << "������ " << endl;
			health_hero -= damag + 20;
			cout << "� ����� " << health_mob << "������" << endl;
			cout << "���������� ���� : 5 " << endl;
			health_hero -= 5;
			cout << "����� ����� : " << health_hero << endl;
		}
		else
		{
			cout << "���� �� ����� : " << damag + 20 << " ������ " << endl;
			health_mob -= damag + 20;
			cout << "� �����  " << health_mob << " ������" << endl;
			cout << "���������� ���� :  " << endl;
			health_hero = (health_hero * 5) / 100;
			cout << "����� ����� : " << health_hero << endl;
		}
	}
	return(m1);
}