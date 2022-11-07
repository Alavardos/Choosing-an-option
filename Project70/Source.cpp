#include<iostream>
#include<string>
#include<cstdlib>
#include <fstream>
#include <unordered_map>
#include<Windows.h>
#pragma warning(disable : 4996)
int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");
	std::string a;
	std::cout << "Чтобы выйти из программы нажмите 1:"<<std::endl;
	bool t = true;
	std::hash<std::string>hasher;
	std::ofstream wri("variant.txt");
	while (t!=false)
	{
		std::cout << "Введите ФИО Студента:";
		std::getline(std::cin, a);
		if (a=="1")
		{
			t = false;
		}
		else {
			char y[100];
			size_t hash = hasher(a);
			int b = static_cast<int>(hash);
			_itoa(b, y, 16);
			wri << a << ":";
			std::cout << "Вариант 1 = ";
			std::cout << y[0] << std::endl;
			wri << y[0] << " ";
		    wri << std::endl;
			//for (int i = 0; i < 1; i++){switch (i){case 0:{ std::cout << "Вариант 1 = ";break; }default:break;}std::cout << y[i] << std::endl;wri << y[i]<<" ";}wri << std::endl;
		}
	}
	wri.close();
	system("chcp 1251");
	system("cls");
}