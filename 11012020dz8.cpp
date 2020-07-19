/*
*** Пользователь 	вводит с клавиатуры время в секундах, прошедшее с начала дня.Вывести на экран 	текущее время в часах, минутах и секундах.Посчитать, сколько часов, минут и секунд 	осталось до полуночи.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите время в секундах, прошедшее с начала дня : ";
	int a, sec, sec1, god, god1, hv, hv1, ost_do_polynochi_sec;
	cin >> a;
	sec = a % 60;
	hv = a / 60 % 60;
	god = a / 3600 % 24;
	cout << "Текущее время в часах, минутах и секундах : " << god / 10 << god % 10 << ":" << hv / 10 << hv % 10 << ":" << sec / 10 << sec % 10 << endl;
	int sytki_v_sec = 86400;
	ost_do_polynochi_sec = sytki_v_sec - a;
	sec1 = ost_do_polynochi_sec % 60;
	hv1 = ost_do_polynochi_sec / 60 % 60;
	god1 = ost_do_polynochi_sec / 3600 % 24;
	cout << "До полуночи осталось часов, минут, секунд : " << god1 / 10 << god1 % 10 << ":" << hv1 / 10 << hv1 % 10 << ":" << sec1 / 10 << sec1 % 10 << endl;
}
