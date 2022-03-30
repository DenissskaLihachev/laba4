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


		cout << "\t\t\t\t\t|1)������� 1             |\n\t\t\t\t\t|2)������� 2             |\n\t\t\t\t\t" <<
			"|3)�������������� �������|\n\t\t\t\t\t|4)�������������� �������|\n\t\t\t\t\t---------------" <<
			"-----------\n\t\t\t\t\t�����: ";
		int menuChoice; cin >> menuChoice;

		switch (menuChoice)
		{
		case(1): { std::system("cls"); firstTask();      break; }
		case(2): { std::system("cls"); secondTask();     break; }
		case(3): { std::system("cls"); individualTask(); break; }
		case(4): { std::system("cls"); additionalTask(); break; }
		default: {std::cout << "������� �������� ��������..."; _getch(); std::system("cls"); break; }
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region firstGeneralTask

//������� 1
//	�������� �������, ������� �������� 2 ����� ����� � �������� ���������.��� �����
//	������ ���� ��������������.������� ��������� ������� ����� ������ � ������.��� ����
//	��������� ������� �� ������ ���� ������ 0.
//	������� ������ �������� ����������, ���� ���� �� ���������� ���������� ��
//	������������� ��� ���� ������ �������� �������� ������ �������.
//	����� ���������� �������� � ���������� ��� ����������.

void FOO(int a, int b)
{
	int res;

	if (a < 0 || b < 0)		{	throw exception("ERROR: ���� �� ���������� �������������!");	}
	else if (a < b)         {	throw exception("ERROR: ������ �������� ������ �������!");	}
	else                    {	res = a - b; cout << "��������� = " << res;	}
}

void firstTask()
{
	int a, b;

	cout << "������� 1-� �����: "; cin >> a;
	cout << "������� 2-� �����: "; cin >> b;

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

//������� 2
//	������� ��������� 2 ����� � ����� ��������(����� �� 1 �� 4).����� ����� �����������
//	����������� �������������� �������� � ����������� �� �� ������(1 � ��������, 2 � ���������,
//	3 � �������, 4 - ���������).��� ������ �������� ����������� ����������� switch ().
//	������� ������ �������� ����������, ���� ����� �������� ����������� ������������.
//	���������� �������� � ���������� ��� ����������.����� ����������� �������� � �������� ��
//	0.



void FOO1(float a, float b, int choice)
{
	float res;

	switch (choice)
	{
	case(1): {	res = a + b;	cout << "��������� = " << res;	break;	}	//��������
	case(2): {	res = a - b;	cout << "��������� = " << res;	break;  }	//���������
	case(3):														//�������
	{
		if (b == 0)
		{
			throw exception("ERROR: �� ���� ������ ������!");
			_getch();	system("cls");
		}
		else
		{
			res = a / b;
			cout << "��������� = " << res;
			;
		}
		break;
	}
	case(4): {	res = a * b;	cout << "��������� = " << res;	break;	}	//���������
	default: {	throw exception("ERROR: ������� �������������� ��������, ���������� �������� ������!");	break; }
	}
}


void secondTask()
{


	int choice;
	float a, b;

	while (true)
	{
		cout << "\t�������� ��������\n1) ��������\n2) ���������\n3) �������\n4) ���������\n\n\t�����: "; cin >> choice;

		system("cls");

		cout << "������� 1-� �����: "; cin >> a;
		cout << "������� 2-� �����: "; cin >> b;

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