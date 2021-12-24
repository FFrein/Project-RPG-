
//void printVin() {
  //  cout << "==================" << endl;
 //   cout << "======Победа!=====" << endl;
  //  cout << "==================" << endl;
//}
//void printLose() {
  //  cout << "==================" << endl;
  //  cout << "~~~Поражение...~~~" << endl;
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
	int monster_choose = (rand() % 11);//Выбор монстра
	int lvl_mob = (rand() % hero_level + 10);
	cout << "Вы встретили : " << endl << '\t' << mob_name[monster_choose] << " уровня : " << lvl_mob << endl;
	cout << "Введите тип героя воин, лучник, маг" << endl;
	cin >> hero_type;
	do {
		cout << "1 Сбежать" << endl << "2 Атаковать" << endl;
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
				cout << "Вы теряете жизнии" << endl;
				hero_health -= (100 + hero_health) / 10;
				cout << "Жизни героя :" << hero_health << endl;

			}
			else
			{
				cout << "Вы теряете 10 жизней" << endl;
				hero_health -= (hero_health + 200) / 2;
				cout << "Жизни героя :" << hero_health << endl << endl;
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
			cout << "Вы получаете" << money << "золота " << endl;
			cout << "Вы получаете" << exp << " опыта" << endl;
		}
		else
		{
			cout << "Вы получаете" << exp << " опыта" << endl;
			exp = (hero_level / lvl_mob) * 100;
			money += (lvl_mob / hero_level) * 100;
			cout << "Вы получаете " << money << " золота " << endl;
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
		cout << "1 атака оружием " << endl << "2 метнуть кинжал " << endl << endl;
		cin >> m1;
		if (1 > 4 && m1 < 0)
		{
			cout << "Не та фун-ция" << endl;
		}
		if (m1 == 1)
		{
			if (level_hero > mob_lvl)
			{
				cout << "урон по врагу : " << damag << endl;
				health_mob -= damag;
				cout << "У врага : " << health_mob << " hp" << endl;
				cout << "Получаемый урон : 10 " << endl;
				health_mob -= 10;
				cout << "Жизни героя : " << health_mob << endl;

			}
			else
			{
				cout << "урон по врагу : " << damag << endl;
				health_mob -= damag;
				cout << "У врага : " << health_mob << " hp" << endl;
				health_mob -= health_mob / 10;
				cout << "Получаемый урон :  " << health_mob / 10 << endl;
				cout << "Жизни героя : " << health_mob << endl;
			}
		}
		if (m1 == 2)
		{
			if (level_hero > mob_lvl)
			{
				cout << "урон по врагу " << damag << "жизней " << endl;
				health_mob -= damag;
				cout << "У врага " << health_mob << "жизней" << endl;
				cout << "Получаемый урон : 5 " << endl;
				health_hero -= 5;
				cout << "Жизни героя : " << health_hero << endl;
			}
			else
			{
				cout << "урон по врагу " << damag << "жизней " << endl;
				health_mob -= damag;
				cout << "У врага " << health_mob << "жизней" << endl;
				cout << "Получаемый урон :  " << endl;
				health_hero = (health_hero * 5) / 100;
				cout << "Жизни героя : " << health_hero << endl;
			}
		}
		return(m1);
	}

int archer(int health_hero, int health_mob, int damag, int damag_weap, int level_hero, int mob_lvl, int m1, int agility_hero)
{
	damag = damag_weap + (agility_hero * 1.50);
	cout << "1 Одиночный выстрел" << endl << "2 Огненная стрела " << endl << endl;
	cin >> m1;
	if (1 > 4 && m1 < 0)
	{
		cout << "Не та фун-ция" << endl;
	}
	if (m1 == 1)
	{
		if (level_hero > mob_lvl)
		{
			cout << "урон по врагу : " << damag << endl;
			health_mob -= damag;
			cout << "У врага : " << health_mob << " hp" << endl;
			cout << "Получаемый урон : 10 " << endl;
			health_mob -= 10;
			cout << "Жизни героя : " << health_mob << endl;

		}
		else
		{
			cout << "урон по врагу : " << damag << endl;
			health_mob -= damag;
			cout << "У врага : " << health_mob << " hp" << endl;
			health_mob -= health_mob / 10;
			cout << "Получаемый урон :  " << health_mob / 10 << endl;
			cout << "Жизни героя : " << health_mob << endl;
		}
	}
	if (m1 == 2)
	{
		if (level_hero > mob_lvl)
		{
			cout << "урон по врагу - " << damag << "жизней " << endl;
			health_mob -= damag;
			cout << "У врага " << health_mob << "жизней" << endl;
			cout << "Получаемый урон : 5 " << endl;
			health_hero -= 5;
			cout << "Жизни героя : " << health_hero << endl;
		}
		else
		{
			cout << "урон по врагу - " << damag << "жизней " << endl;
			health_mob -= damag;
			cout << "У врага " << health_mob << "жизней" << endl;
			cout << "Получаемый урон :  " << endl;
			health_hero = (health_hero * 5) / 100;
			cout << "Жизни героя : " << health_hero << endl;
		}
	}
	return(m1);
}

int mag(int health_hero, int health_mob, int damag, int damag_weap, int level_hero, int mob_lvl, int m1, int intellect_hero)
{
	damag = damag_weap + (1.34 * intellect_hero);
	cout << "1 Ударить молнией " << endl << "2 Метнуть фаербол " << endl << endl;
	cin >> m1;
	if (m1 > 4 && m1 < 0)
	{
		cout << "Не та фун-ция" << endl;
	}
	if (m1 == 1)
	{
		if (level_hero > mob_lvl)
		{
			cout << "урон по врагу : " << damag << endl;
			health_mob -= damag;
			cout << "У врага : " << health_mob << " hp" << endl;
			cout << "Получаемый урон : 10 " << endl;
			health_hero -= 10;
			cout << "Жизни героя : " << health_hero << endl;

		}
		else
		{
			cout << "урон по врагу : " << damag << endl;
			health_mob -= damag;
			cout << "У врага : " << health_mob << " hp" << endl;
			health_hero -= (health_hero + 100) / 10;
			cout << "Получаемый урон :  " << (health_hero + 100) / 10 << endl;
			cout << "Жизни героя : " << health_hero << endl;
		}
	}
	if (m1 == 2)
	{
		if (level_hero > mob_lvl)
		{
			cout << "урон по врагу : " << damag + 20 << "жизней " << endl;
			health_hero -= damag + 20;
			cout << "У врага " << health_mob << "жизней" << endl;
			cout << "Получаемый урон : 5 " << endl;
			health_hero -= 5;
			cout << "Жизни героя : " << health_hero << endl;
		}
		else
		{
			cout << "урон по врагу : " << damag + 20 << " жизней " << endl;
			health_mob -= damag + 20;
			cout << "У врага  " << health_mob << " жизней" << endl;
			cout << "Получаемый урон :  " << endl;
			health_hero = (health_hero * 5) / 100;
			cout << "Жизни героя : " << health_hero << endl;
		}
	}
	return(m1);
}