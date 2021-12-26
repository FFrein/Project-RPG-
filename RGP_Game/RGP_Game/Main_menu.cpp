#include <iostream>
#include <conio.h> 
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include<Windows.h>
#include "ClassSelection.h"
#include "Store.h"
#include"Battle_module.h"
#include"Boss_Fight.h"


string ch;
using namespace std;
void statsHero();
void GameOver();
void Victory();

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RUS");
	ClassSelection();
choosing:
	system("color F8");
	if (hero_health <= 0) {
		GameOver();
		Sleep(10000);
		return 0;
	}
	if (experience >= 300) {
		experience -= 300;
		hero_level += 1;
	}
	if (status == 1) {
		Victory();
		Sleep(10000);
		return 0;
	}
	statsHero();
	
	cout << "Сделай выбор: ";
	cin >> ch;
	switch (ch[0])
	{
	case's':
		system("cls");
		Store();
		goto choosing;
	case'b':
		system("cls");
		Battle();
		system("cls");
		goto choosing;
	case'B':
		system("cls");
		Boss(); 
		goto choosing;
	default:
		system("cls");
		goto choosing;
	}
}


void statsHero() {
	cout << "---------------------------------------------Лагерь----------------------------------------------" << endl;
	cout << hero_type_name << " " << hero_name << "         уровень : " << hero_level << endl;
	cout << "Здоровье: " << hero_health << endl;
	cout << "Ловкость: " << hero_agility << endl;
	cout << "Интелект: " << hero_intellect << endl;
	cout << "Зелья: " << hero_poison << endl << endl;
	cout << "Золото: " << hero_money << endl;
	cout << "------------ s - shop ---------------- b - battle -------------- B - BOSS FIGHT -----------------" << endl;
}


void GameOver() {
	system("cls");
	system("color 04");
	COORD p = { 50, 15 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
	cout << "G A M E   O V E R" << endl;

}
void Victory() {
	system("cls");
	system("color 03");
	COORD p = { 50, 15 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
	cout << "V I C T O R Y" << endl;

}



