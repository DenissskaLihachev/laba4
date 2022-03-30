#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

void firstTask();
void secondTask();
void individualTask();
void additionalTask();

void main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	while (true)
	{

		cout << "\t\t\t/////      /////  ////////  //////     ///  ///      ///\n";
		cout << "\t\t\t//////    //////  ////////  //////     ///  ///      ///\n";
		cout << "\t\t\t///  //////  ///  ///       /// ///    ///  ///      ///\n";
		cout << "\t\t\t///   ////   ///  //////    ///  ///   ///  ///      ///\n";
		cout << "\t\t\t///          ///  //////    ///   ///  ///  ///      ///\n";
		cout << "\t\t\t///          ///  ///       ///    /// ///  ///      ///\n";
		cout << "\t\t\t///          ///  ////////  ///     //////  ///      ///\n";
		cout << "\t\t\t///          ///  ////////  ///      /////  ////////////\n";
		cout << "\t\t\t--------------------------------------------------------\n";


		cout << "\t\t\t\t\t|1)Задание 1             |\n\t\t\t\t\t|2)Задание 2             |\n\t\t\t\t\t" <<
			"|3)Индивидуальное задание|\n\t\t\t\t\t|4)Дополнительное задание|\n\t\t\t\t\t---------------" <<
			"-----------\n\t\t\t\t\tВыбор: ";
		int menuChoice; cin >> menuChoice;

		switch (menuChoice)
		{
		case(1): { std::system("cls"); firstTask();      break; }
		case(2): { std::system("cls"); secondTask();     break; }
		case(3): { std::system("cls"); individualTask(); break; }
		case(4): { std::system("cls"); additionalTask(); break; }
		default: {std::cout << "Введено неверное значение..."; _getch(); std::system("cls"); break; }
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region firstGeneralTask

//Задание 1
//	Напишите функцию, которая получает 2 целых числа в качестве аргумента.Эти числа
//	должны быть положительными.Функция вычисляет разницу между первым и вторым.При этом
//	результат разницы не должен быть меньше 0.
//	Функция должна вызывать исключение, если один из переданных аргументов не
//	положительный или если первый аргумент оказался меньше второго.
//	Также необходимо отловить и обработать эти исключения.

void FOO(int a, int b)
{
	int res;

	if (a < 0 || b < 0)		{	throw exception("ERROR: Один из аргументов отрицательный!");	}
	else if (a < b)         {	throw exception("ERROR: Первый аргумент меньше второго!");	}
	else                    {	res = a - b; cout << "Результат = " << res;	}
}

void firstTask()
{
	int a, b;

	cout << "Введите 1-е число: "; cin >> a;
	cout << "Введите 2-е число: "; cin >> b;

	system("cls");

	try
	{
		FOO(a, b);
	}
	catch (const std::exception &ex)
	{
		cout << ex.what();
	}

	_getch(); system("cls");
}

#pragma endregion 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region secondTask

//Задание 2
//	Функция принимает 2 числа и номер операции(число от 1 до 4).Между двумя аргументами
//	выполняется арифметическая операция в зависимости от ее номера(1 – сложение, 2 – вычитание,
//	3 – деление, 4 - умножение).Для выбора операции используйте конструкцию switch ().
//	Функция должна вызывать исключение, если номер операции оказывается неправильным.
//	Необходимо отловить и обработать это исключение.Также обработайте ситуацию с делением на
//	0.



void FOO1(float a, float b, int choice)
{
	float res;

	switch (choice)
	{
	case(1): {	res = a + b;	cout << "Результат = " << res;	break;	}	//Сложение
	case(2): {	res = a - b;	cout << "Результат = " << res;	break;  }	//Вычитание
	case(3):														//Деление
	{
		if (b == 0)
		{
			throw exception("ERROR: На ноль делить нельзя!");
			_getch();	system("cls");
		}
		else
		{
			res = a / b;
			cout << "Результат = " << res;
			;
		}
		break;
	}
	case(4): {	res = a * b;	cout << "Результат = " << res;	break;	}	//Умножение
	default: {	throw exception("ERROR: Выбрана несуществующая операция, попробуйте поменять запрос!");	break; }
	}
}


void secondTask()
{


	int choice;
	float a, b;

	while (true)
	{
		cout << "\tВыберите опреацию\n1) Сложение\n2) Вычитание\n3) Деление\n4) Умножение\n\n\tВыбор: "; cin >> choice;

		system("cls");

		cout << "Введите 1-е число: "; cin >> a;
		cout << "Введите 2-е число: "; cin >> b;

		system("cls");

		try
		{
			FOO1(a, b, choice);
		}
		catch (const std::exception &ex)
		{
			cout << ex.what();
			_getch();	system("cls");
		}
	}
	system("cls");
}

#pragma endregion

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region individualTask

void individualTask()
{

}

#pragma endregion

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





void additionalTask()
{
	_getch();
}