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
class Dinner
{
private:
	string day;
	int time_in_hours;

public:
	vector<Candy> MyCandy;

	string GetDay()
	{
		return day;
	}

	int GetTime_in_hours()
	{
		return time_in_hours;
	}
	Dinner()
	{
	}
	Dinner(string day, int time_in_hours)
	{
		this->day = day;
		this->time_in_hours = time_in_hours;


	}

	~Dinner()
	{

	};

	void Print_Dinner()
	{
		cout << "day:" << day << endl;
		cout << "time:" << time_in_hours << " o`clock" << endl;

	}
	void AddCandy(Candy candy)
	{
		MyCandy.push_back(candy);

	}
	void findTheMostExpensiveCandies()
	{
		cout << "Top the most expensive candies" << endl;
		sort(MyCandy.begin(),
			MyCandy.end(),
			[](const Candy& s1, const Candy& s2)
			{
				return s1.price > s2.price;
			});

	}
	void SortMass()
	{
		cout << "Sorted by mass:" << endl;
		sort(MyCandy.begin(),
			MyCandy.end(),
			[](const Candy& s1, const Candy& s2)
			{
				return s1.mass_in_grams > s2.mass_in_grams;
			});
	}
	void PrintSortedVector()
	{
		for (auto it = MyCandy.begin(); it != MyCandy.end(); it++) {
			cout << it->name << ", " << it->mass_in_grams << endl;

		}

	}
	void PrintTop()
	{
		for (auto it = MyCandy.begin(); it != MyCandy.end(); it++) {
			cout << it->name << ", " << it->price << endl;

		}

	}
	enum type
	{
		BAR, CARAMEL, BUTTON, GUM, LOLLIPOP, POPCORN
	};
	friend class Candy;
}; 
