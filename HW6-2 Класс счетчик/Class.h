#pragma once

class Counter
{
private:
	char symbol='0';
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
	void enter_num(int num);
	
	void progres(char symbol);
	

};