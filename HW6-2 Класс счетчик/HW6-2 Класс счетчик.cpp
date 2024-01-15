#include <iostream>
#include <windows.h>
#include <string>
#include "Class.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Counter count;
	std::string answer;
	char symbol;
	int i = 0, start;
	std::cout << "Желаете задать начальное значение счетчика? да или нет : ";
	std::cin >> answer;
	do
	{
		if (answer == "да")
		{
			std::cout << std::endl << "Введите начальное значение: ";
			std::cin >> start;
			i = 1;
			count.enter_num(start);
		}
		else {
			if (answer == "нет") { count; i = 1; }
			else { std::cout << "введите корректное подтверждение: "; std::cin >> answer; continue; }
		}

	} while (i == 0);

	do
	{
		std::cout << "Введите команду (англ. раскладка) ('+' увеличить, '-' уменьшить, '=' показать результат, 'x' выйти из программы): ";
		std::cin >> symbol;
		std::cout << std::endl;
		if (symbol == '+')
		{
			count.progres(symbol); continue;
		}
		if (symbol == '-')
		{
			count.progres(symbol); continue;
		}
		if (symbol == '=')
		{
			count.progres(symbol); continue;
		}
	} while (symbol != 'x');
	std::cout << "До свидания!" << std::endl;


	return 0;
}