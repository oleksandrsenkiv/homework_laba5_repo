#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;


class Candy
{

public:
	int price;
	int mass_in_grams;
	int amount;
	string name;
	Candy()
	{
	}
	Candy(string name, int price, int mass_in_grams, int amount)
	{
		this->name = name;
		this->price = price;
		this->mass_in_grams = mass_in_grams;
		this->amount = amount;

	}

	~Candy()
	{

	};

	void Print_candy()
	{
		cout << "name:" << name << endl;
		cout << "price:" << price << endl;
		cout << "mass in grams:" << mass_in_grams << endl;
		cout << "amount:" << amount << endl;

	}
	void ate()
	{
		if ((mass_in_grams * amount) < 2000)
			cout << "What delicious candies!" << endl;
		else
			cout << "You are on a diet!" << endl;
	}


};

