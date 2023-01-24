#include <iostream>
#include "CMatrix.h"
#include <conio.h>
#include <stdio.h>
#include <windows.h>

int main()
{
	{   setlocale(LC_ALL, "");
	int input = 0;
	cout << "Реализация класса 'Матрицы'." << endl;
	cout << "1.Продолжить" << endl;
	cout << "2.Выйти" << endl;
	while ((input != 1) && (input != 2))
	{
		cin >> input;
		switch (input) {
		case 1:
			system("cls");
			cout << "Что будем делать?" << endl << endl;
			cout << "1.Умножение матрицы на число" << endl;
			cout << "2.Сложение матриц" << endl;
			cout << "3.Вычитание матриц" << endl;
			cout << "4.Умножение матриц" << endl;
			cout << "5.Транспонирование матрицы" << endl;
			cout << "6.Удалить столбец матрицы" << endl;
			cout << "7.Удалить строку матрицы" << endl;
			cout << "8.Найти определитель матрицы второго порядка" << endl;
			cout << "9.Найти определитель матрицы третьего порядка" << endl;
			cout << "10.Выйти" << endl;
			cin >> input;
			switch (input) {
			case 1:
				system("cls");
				cout << "Каким способом инициализировать матрицу?" << endl;
				cout << "1.Сгенерировать матрицу с случайными числами" << endl;
				cout << "2.Считать матрицу с консоли" << endl;
				input = 0;
				cin >> input;
				if (input == 1) {
					CMatrix M1, M2; int x, y, k;
					system("cls");
					cout << "Введите количество столбцов матрицы" << endl;
					cin >> x;
					cout << endl << "Введите количество строк матрицы" << endl << endl;
					cin >> y;
					cout << endl;
					M1.Random(x, y);
					cout << endl << "Введите число,на которое будем умножать элементы матрицы" << endl;
					cin >> k;
					system("cls");
					cout << endl << "Матрица до умножения" << endl;
					M1.View();
					cout << endl << "Матрица после умножения" << endl;
					M2 = M1.multiel(k);
					M2.View();
				}
				else if (input == 2) {
					CMatrix M1, M2; int k;
					system("cls");
					M1.scan();
					cout << endl << endl;
					cout << endl << "Введите число,на которое будем умножать элементы матрицы" << endl;
					cin >> k;
					system("cls");
					cout << endl << "Матрица до умножения" << endl;
					M1.View();
					cout << endl << "Матрица после умножения" << endl;
					M2 = M1.multiel(k);
					M2.View();
				}
				else cout << "Неверный ввод данных.Введите 1 чтобы попробовать еще раз,2 чтобы выйти из программы." << endl;
				break;

			case 2:
				system("cls");
				cout << "Каким способом инициализировать матрицы?" << endl;
				cout << "1.Сгенерировать две матрицы с случайными числами" << endl;
				cout << "2.Считать две матрицы с консоли" << endl;
				input = 0;
				cin >> input;
				if (input == 1) {
					CMatrix M1, M2, M3; int x, y;
					system("cls");
					cout << "Введите количество столбцов матрицы" << endl;
					cin >> x;
					cout << endl << "Введите количество строк матрицы" << endl << endl;
					cin >> y;
					cout << endl;
					M1.Random(x, y);
					M2.Random(x, y);
					system("cls");
					cout << endl << "Первая матрица" << endl;
					M1.View();
					cout << endl << "Вторая матица" << endl;
					M2.View();
					M3 = M1.plus(M2);
					cout << endl << "Сумма двух матриц:" << endl;
					M3.View();
				}
				else if (input == 2) {
					CMatrix M1, M2, M3;
					system("cls");
					cout << "Считаем две матрицы.Размеры матриц должны совпадать." << endl;
					M1.scan();
					M2.scan();
					cout << endl << endl;
					system("cls");
					cout << endl << "Первая матрица" << endl;
					M1.View();
					cout << endl << "Вторая матица" << endl;
					M2.View();
					M3 = M1.plus(M2);
					cout << endl << "Сумма двух матриц:" << endl;
					M3.View();
				}
				else cout << "Неверный ввод данных.Введите 1 чтобы попробовать еще раз,2 чтобы выйти из программы." << endl;
				break;
			case 3:
				system("cls");
				cout << "Каким способом инициализировать матрицы?" << endl;
				cout << "1.Сгенерировать две матрицы с случайными числами" << endl;
				cout << "2.Считать две матрицы с консоли" << endl;
				input = 0;
				cin >> input;
				if (input == 1) {
					CMatrix M1, M2, M3; int x, y;
					system("cls");
					cout << "Введите количество столбцов матрицы" << endl;
					cin >> x;
					cout << endl << "Введите количество строк матрицы" << endl << endl;
					cin >> y;
					cout << endl;
					M1.Random(x, y);
					M2.Random(x, y);
					system("cls");
					cout << endl << "Первая матрица" << endl;
					M1.View();
					cout << endl << "Вторая матица" << endl;
					M2.View();
					M3 = M1.minus(M2);
					cout << endl << "Разность двух матриц:" << endl;
					M3.View();
				}
				else if (input == 2) {
					CMatrix M1, M2, M3;
					system("cls");
					cout << "Считаем две матрицы.Размеры матриц должны совпадать." << endl;
					M1.scan();
					M2.scan();
					cout << endl << endl;
					system("cls");
					cout << endl << "Первая матрица" << endl;
					M1.View();
					cout << endl << "Вторая матица" << endl;
					M2.View();
					M3 = M1.minus(M2);
					cout << endl << "Разность двух матриц:" << endl;
					M3.View();
				}
				else cout << "Неверный ввод данных.Введите 1 чтобы попробовать еще раз,2 чтобы выйти из программы." << endl;
				break;
			case 4:
				system("cls");
				cout << "Каким способом инициализировать матрицы?" << endl;
				cout << "1.Сгенерировать две матрицы с случайными числами" << endl;
				cout << "2.Считать две матрицы с консоли" << endl;
				input = 0;
				cin >> input;
				if (input == 1) {
					CMatrix M1, M2, M3; int x, y, x1, y1;
					system("cls");
					cout << "Введите количество столбцов 1 матрицы" << endl;
					cin >> x;
					cout << endl << "Введите количество строк 1 матрицы" << endl << endl;
					cin >> y;
					cout << endl;
					M1.Random(x, y);
					cout << "ВНИМАНИЕ.Число столбцов первой матрицы должно равняться числу строк второй матрицы!" << endl;
					cout << "Введите количество столбцов 2 матрицы" << endl;
					cin >> x1;
					cout << endl << "Введите количество строк 2 матрицы" << endl << endl;
					cin >> y1;
					M2.Random(x1, y1);
					system("cls");
					cout << endl << "Первая матрица" << endl;
					M1.View();
					cout << endl << "Вторая матица" << endl;
					M2.View();
					M3.multi(M1, M2);
					cout << endl << "Произведение двух матриц:" << endl;
					M3.View();
				}
				else if (input == 2) {
					CMatrix M1, M2, M3;
					system("cls");
					cout << "Считаем две матрицы.ВНИМАНИЕ.Число столбцов первой матрицы должно равняться числу строк второй матрицы!" << endl;
					M1.scan();
					M2.scan();
					cout << endl << endl;
					system("cls");
					cout << endl << "Первая матрица" << endl;
					M1.View();
					cout << endl << "Вторая матица" << endl;
					M2.View();
					M3.multi(M1, M2);
					cout << endl << "Произведение двух матриц:" << endl;
					M3.View();
				}
				else cout << "Неверный ввод данных.Введите 1 чтобы попробовать еще раз,2 чтобы выйти из программы." << endl;
				break;
			case 5:
				system("cls");
				cout << "Каким способом инициализировать матрицу?" << endl;
				cout << "1.Сгенерировать матрицу с случайными числами" << endl;
				cout << "2.Считать матрицу с консоли" << endl;
				input = 0;
				cin >> input;
				if (input == 1) {
					CMatrix M1, M2; int x, y;
					system("cls");
					cout << "Введите количество столбцов матрицы" << endl;
					cin >> x;
					cout << endl << "Введите количество строк матрицы" << endl << endl;
					cin >> y;
					cout << endl;
					M1.Random(x, y);
					system("cls");
					cout << endl << "Матрица до транспонирования" << endl;
					M1.View();
					cout << endl << "Транспонированная матрица" << endl;
					M2 = M1.transp();
					M2.View();
				}
				else if (input == 2) {
					CMatrix M1, M2;
					system("cls");
					M1.scan();
					cout << endl << endl;
					system("cls");
					cout << endl << "Матрица до транспонирования" << endl;
					M1.View();
					cout << endl << "Транспонированная матрица" << endl;
					M2 = M1.transp();
					M2.View();
				}
				else cout << "Неверный ввод данных.Введите 1 чтобы попробовать еще раз,2 чтобы выйти из программы." << endl;
				break;

			case 6:
				system("cls");
				cout << "Каким способом инициализировать матрицу?" << endl;
				cout << "1.Сгенерировать матрицу с случайными числами" << endl;
				cout << "2.Считать матрицу с консоли" << endl;
				input = 0;
				cin >> input;
				if (input == 1) {
					CMatrix M1, M2; int x, y, j;
					system("cls");
					cout << "Введите количество столбцов матрицы" << endl;
					cin >> x;
					cout << endl << "Введите количество строк матрицы" << endl << endl;
					cin >> y;
					cout << endl;
					M1.Random(x, y);
					cout << "Введите номер столбца,который нужно удалить(счет столбцов в матрице начинается с 0)" << endl;
					cin >> j;
					system("cls");
					cout << endl << "Матрица до удаления столбца" << endl;
					M1.View();
					cout << endl << "Матрица без " << j << " столбца" << endl;
					M2 = M1.eraseColumns(j);
					M2.View();
				}
				else if (input == 2) {
					CMatrix M1, M2; int j;
					system("cls");
					M1.scan();
					cout << "Введите номер столбца,который нужно удалить(счет столбцов в матрице начинается с 0)" << endl;
					cin >> j;
					cout << endl << endl;
					system("cls");
					cout << endl << "Матрица до удаления столбца" << endl;
					M1.View();
					cout << endl << "Матрица без " << j << " столбца" << endl;
					M2 = M1.eraseColumns(j);
					M2.View();
				}
				else cout << "Неверный ввод данных.Введите 1 чтобы попробовать еще раз,2 чтобы выйти из программы." << endl;
				break;
			case 7:
				system("cls");
				cout << "Каким способом инициализировать матрицу?" << endl;
				cout << "1.Сгенерировать матрицу с случайными числами" << endl;
				cout << "2.Считать матрицу с консоли" << endl;
				input = 0;
				cin >> input;
				if (input == 1) {
					CMatrix M1, M2; int x, y, i;
					system("cls");
					cout << "Введите количество столбцов матрицы" << endl;
					cin >> x;
					cout << endl << "Введите количество строк матрицы" << endl << endl;
					cin >> y;
					cout << endl;
					M1.Random(x, y);
					cout << "Введите номер строки,которую нужно удалить(счет строк в матрице начинается с 0)" << endl;
					cin >> i;
					system("cls");
					cout << endl << "Матрица до удаления строки" << endl;
					M1.View();
					cout << endl << "Матрица без " << i << " строки" << endl;
					M2 = M1.eraseRows(i);
					M2.View();
				}
				else if (input == 2) {
					CMatrix M1, M2; int i;
					system("cls");
					M1.scan();
					cout << "Введите номер строки,которую нужно удалить(счет строк в матрице начинается с 0)" << endl;
					cin >> i;
					cout << endl << endl;
					system("cls");
					cout << endl << "Матрица до удаления строки" << endl;
					M1.View();
					cout << endl << "Матрица без " << i << " строки" << endl;
					M2 = M1.eraseRows(i);
					M2.View();
				}
				else cout << "Неверный ввод данных.Введите 1 чтобы попробовать еще раз,2 чтобы выйти из программы." << endl;
				break;
			case 8:
				system("cls");
				cout << "Каким способом инициализировать матрицу?" << endl;
				cout << "1.Сгенерировать матрицу с случайными числами" << endl;
				cout << "2.Считать матрицу с консоли" << endl;
				input = 0;
				cin >> input;
				if (input == 1) {
					CMatrix M1;
					M1.Random(2, 2);
					system("cls");
					cout << endl << "Матрица" << endl;
					M1.View();
					cout << endl << "Её определитель равен:" << M1.determinat2() << endl;
				}
				else if (input == 2) {
					CMatrix M1;
					cout << "Размеры матрицы 2Х2" << endl;
					M1.scan();
					cout << endl << endl;
					system("cls");
					cout << endl << "Матрица" << endl;
					M1.View();
					cout << endl << "Её определитель равен:" << M1.determinat2() << endl;
				}
				else cout << "Неверный ввод данных.Введите 1 чтобы попробовать еще раз,2 чтобы выйти из программы." << endl;
				break;
			case 9:
				system("cls");
				cout << "Каким способом инициализировать матрицу?" << endl;
				cout << "1.Сгенерировать матрицу с случайными числами" << endl;
				cout << "2.Считать матрицу с консоли" << endl;
				input = 0;
				cin >> input;
				if (input == 1) {
					CMatrix M1;
					M1.Random(3, 3);
					system("cls");
					cout << endl << "Матрица" << endl;
					M1.View();
					cout << endl << "Её определитель равен:" << M1.determinat3() << endl;
				}
				else if (input == 2) {
					CMatrix M1;
					cout << "Размеры матрицы 3Х3" << endl;
					M1.scan();
					cout << endl << endl;
					system("cls");
					cout << endl << "Матрица" << endl;
					M1.View();
					cout << endl << "Её определитель равен:" << M1.determinat3() << endl;
				}
				else cout << "Неверный ввод данных.Введите 1 чтобы попробовать еще раз,2 чтобы выйти из программы." << endl;
				break;
			case 10:
				cout << "Точно?" << endl;
				cout << "Введите 1 чтобы продолжить работу с программой,2 чтобы выйти из программы." << endl;
				break;


				;
			}
			break;
		case 2:
			system("cls");
			cout << "Спасибо за внимание" << endl;
			break;
		default:
			cout << "Ошибка ввода данных.Введите 1 чтобы продолжить,2 чтобы выйти из программы" << endl;
			break;
		}
	}
	_getch();
	return 0;
	}
}
