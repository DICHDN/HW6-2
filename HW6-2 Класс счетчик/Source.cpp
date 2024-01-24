#pragma once
#include <iostream>
#include "Class.h"

void Counter::enter_num(int num)
	{
		this->num = num;
	}
void Counter::progres(char symbol)
	{
		if (symbol == '+') ++num;
		if (symbol == '-') --num;
		if (symbol == '=') std::cout << num << std::endl;
	}

