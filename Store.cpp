#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void Store( int* hero_money, int* hero_health, int* hero_agility, int* hero_intellect, int* hero_poison) /// ����������� � ��������� ���������� �� ����� ������� � ������
{
	setlocale(LC_ALL, "RUS");

	cout << "--------------------------------------------------------";
	cout <<	 "����������� ����, ��������. ��� ������� ����������? ";
	cout << "--------------------------------------------------------";
	cout << "�������";
	cout << "1. ����� ���������� �������� - ���� 10 �����  2.����� ���������� �������� - ����� 10 ����� "<<endl;

	cout << "3.����� ���������� ���������� - ���� 10 ����� 4.����� �������������� �������� - ���� 5 �����" << endl;

	cout << "5. ����� �� ��������" << endl;

	int action_num; ///������ ���� � ��������

	/// ���� ������� � ������ �� ��������

	do {
		cin >> action_num;
		if (action_num == 1) {
			if ( hero_money > 10) {
				hero_health = hero_health + 10; // 10 - ��������� �������� �� 10 ������ // ����� ������ �� �����, ������� ��� �����
				hero_money = hero_money - 10;
			}
			else{
				cout << "� ��� ������������ �����" << endl;
			}
		};

		if (action_num == 2) {
			if (hero_money > 10) {
				hero_agility = hero_agility + 10;
				hero_money = hero_money - 10;
			}
			else {
				cout << "� ��� ������������ �����" << endl;
			}
		};

		if (action_num == 3) {
			if (hero_money > 10) {
				hero_intellect = hero_intellect + 10;
				hero_money = hero_money - 10;
			}
			else {
				cout << "� ��� ������������ �����" << endl;
			}
		};

		if (action_num == 4) {
			if (hero_money > 10) {
				hero_money = hero_money - 10;
				hero_poison = hero_poison + 1;
			}
			else {
				cout << "� ��� ������������ �����" << endl;
			}
		};

		if (action_num == 5) {
			//�������� ������� ������ � ������ / ���� ������

		};
		cout << "1. ����� ���������� �������� - ���� 10 �����  2.����� ���������� �������� - ����� 10 ����� " << endl;

		cout << "3.����� ���������� ���������� - ���� 10 ����� 4.����� �������������� �������� - ���� 5 �����" << endl;

		cout << "5. ����� �� ��������" << endl;
	} while (action_num != 5);

}