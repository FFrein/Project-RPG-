#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "����������� ����, ��������. ��� ���� �����? ";
	string hero_name;
	string hero_type_name;
	cin >> hero_name;
	cout << "��� �����: " << endl
		<< "1)����" << endl
		<< "2)������" << endl
		<< "3)���" << endl;
	int hero_type, hero_health, hero_agility, hero_intellect, hero_money, hero_level;
	cin >> hero_type;

	if (hero_type < 0 || hero_type > 4) // �������� ������������
	{
		do {
			cout << "������� ���������";
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
			hero_type_name = "����";
		}
		if (hero_type == 2)
		{
			hero_health = 10;
			hero_agility = 20;
			hero_intellect = 5;
			hero_money = 100;
			hero_level = 1;
			hero_type_name = "������";
		}
		if (hero_type == 3)
		{
			hero_health = 10;
			hero_agility = 20;
			hero_intellect = 5;
			hero_money = 100;
			hero_level = 1;
			hero_type_name = "���";
		}
		system("cls"); //������� �������
		cout << "���������� ����, " << hero_type_name << " " << hero_name << ". ����� ���������� � ���� :)\n ��� ���� ��������� ��������������:" << endl << //�������� � ��� ��������������
			"��������: " << hero_health << endl <<
			"��������: " << hero_agility << endl <<
			"���������: " << hero_intellect << endl <<
			"��������� ������: " << hero_money << endl;

}