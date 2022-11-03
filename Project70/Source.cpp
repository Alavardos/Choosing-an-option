#include<iostream>
#include<string>
#include<cstdlib>
#include<Windows.h>
#pragma warning(disable : 4996)
unsigned int hashq(const char* word)
{
	unsigned int hash = 0;
	for (int i = 0; word[i] != '\0'; i++)
	{
		hash = 31 * hash + word[i];
	}
	return hash;
}

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");
	std::string a;
	while (true)
	{
		std::cout << "Введите ФИО Студента:";
		std::cin >> a;
		char y[20];
		const char* g = a.c_str();
		int b;
		b = hashq(g);
		_itoa(b, y, 16);
		std::cout << "Вариант для студента: " << a << std::endl;
		for (int i = 0; i < 2; i++)
		{
			switch (i)
			{
			case 0:
			{ std::cout << "Первый вариант = ";
			break; }
			case 1:
			{
				std::cout << "Второй варинт = ";
				break;
			}
			default:
				break;
			}
			std::cout << y[i] << std::endl;
		}
	}
	system("chcp 1251");
	system("cls");
}