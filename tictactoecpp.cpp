#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	char p1 = '1', p2 = '2', p3 = '3', p4 = '4', p5 = '5', p6 = '6', p7 = '7', p8 = '8', p9 = '9';
	
	cout << p1 << p2 << p3 << endl;
	cout << p4 << p5 << p6 << endl;
	cout << p7 << p8 << p9 << endl;

	while (true)
	{
		// Крестик
		while (true)
		{
			char x_choice;
			cout << "Ход крестика: "; cin >> x_choice;
			if (x_choice == '1')
			{
				if (p1 != 'X' && p1 != 'O')
				{
					p1 = 'X';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (x_choice == '2')
			{
				if (p2 != 'X' && p2 != 'O')
				{
					p2 = 'X';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (x_choice == '3')
			{
				if (p3 != 'X' && p3 != 'O')
				{
					p3 = 'X';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (x_choice == '4')
			{
				if (p4 != 'X' && p4 != 'O')
				{
					p4 = 'X';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (x_choice == '5')
			{
				if (p5 != 'X' && p5 != 'O')
				{
					p5 = 'X';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (x_choice == '6')
			{
				if (p6 != 'X' && p6 != 'O')
				{
					p6 = 'X';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (x_choice == '7')
			{
				if (p7 != 'X' && p7 != 'O')
				{
					p7 = 'X';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (x_choice == '8')
			{
				if (p8 != 'X' && p8 != 'O')
				{
					p8 = 'X';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (x_choice == '9')
			{
				if (p9 != 'X' && p9 != 'O')
				{
					p9 = 'X';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
		}
		cout << p1 << p2 << p3 << endl;
		cout << p4 << p5 << p6 << endl;
		cout << p7 << p8 << p9 << endl;

		if ((p1 == 'X' && p2 == 'X' && p3 == 'X') || (p4 == 'X' && p5 == 'X' && p6 == 'X') || (p7 == 'X' && p8 == 'X' && p9 == 'X') || (p1 == 'X' && p4 == 'X' && p7 == 'X') || (p2 == 'X' && p5 == 'X' && p8 == 'X') || (p3 == 'X' && p6 == 'X' && p9 == 'X') || (p1 == 'X' && p5 == 'X' && p9 == 'X') || (p3 == 'X' && p5 == 'X' && p7 == 'X'))
		{
			cout << "Победили крестики!" << endl;
			Sleep(3000);
			return 0;
		}

		if (p1 != '1' && p2 != '2' && p3 != '3' && p4 != '4' && p5 != '5' && p6 != '6' && p7 != '7' && p8 != '8' && p9 != '9')
		{
			cout << "Ничья!" << endl;
			Sleep(3000);
			return 0;
		}

		// Нолик
		while (true)
		{
			char o_choice;
			cout << "Ход нолика: "; cin >> o_choice;
			if (o_choice == '1')
			{
				if (p1 != 'X' && p1 != 'O')
				{
					p1 = 'O';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (o_choice == '2')
			{
				if (p2 != 'X' && p2 != 'O')
				{
					p2 = 'O';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (o_choice == '3')
			{

				if (p3 != 'X' && p3 != 'O')
				{
					p3 = 'O';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (o_choice == '4')
			{
				if (p4 != 'X' && p4 != 'O')
				{
					p4 = 'O';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (o_choice == '5')
			{
				if (p5 != 'X' && p5 != 'O')
				{
					p5 = 'O';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (o_choice == '6')
			{
				if (p6 != 'X' && p6 != 'O')
				{
					p6 = 'O';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (o_choice == '7')
			{
				if (p7 != 'X' && p7 != 'O')
				{
					p7 = 'O';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (o_choice == '8')
			{
				if (p8 != 'X' && p8 != 'O')
				{
					p8 = 'O';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
			else if (o_choice == '9')
			{
				if (p9 != 'X' && p9 != 'O')
				{
					p9 = 'O';
					break;
				}
				else
				{
					cout << "Занято!" << endl;
					continue;
				}
			}
		}
		cout << p1 << p2 << p3 << endl;
		cout << p4 << p5 << p6 << endl;
		cout << p7 << p8 << p9 << endl;

		if ((p1 == 'O' && p2 == 'O' && p3 == 'O') || (p4 == 'O' && p5 == 'O' && p6 == 'O') || (p7 == 'O' && p8 == 'O' && p9 == 'O') || (p1 == 'O' && p4 == 'O' && p7 == 'O') || (p2 == 'O' && p5 == 'O' && p8 == 'O') || (p3 == 'O' && p6 == 'O' && p9 == 'O') || (p1 == 'O' && p5 == 'O' && p9 == 'O') || (p3 == 'O' && p5 == 'O' && p7 == 'O'))
		{
			cout << "Победили нолики!" << endl;
			Sleep(3000);
			return 0;
		}

		if (p1 != '1' && p2 != '2' && p3 != '3' && p4 != '4' && p5 != '5' && p6 != '6' && p7 != '7' && p8 != '8' && p9 != '9')
		{
			cout << "Ничья!" << endl;
			Sleep(3000);
			return 0;
		}
	}
}
