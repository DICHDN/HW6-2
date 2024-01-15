#pragma once
#include <iostream>
#include <windows.h>
#include <string>
class Counter
{
private:
	char symbol;
	int num = 1;
public:
	Counter()
	{}
	Counter(char symbol)
	{
		this->symbol = symbol;
	}
	Counter(int num)
	{
		this->num = num;
	}
	void enter_num(int num)
	{
		this->num = num;
	}
	void progres(char symbol)
	{
		if (symbol == '+') ++num;
		if (symbol == '-') --num;
		if (symbol == '=') std::cout << num << std::endl;
	}

};