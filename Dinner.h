#pragma once
#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

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
			[](const Candy& candy1, const Candy& candy2)
			{
				return candy1.price > candy2.price;
			});

	}
	void SortMass()
	{
		cout << "Sorted by mass:" << endl;
		sort(MyCandy.begin(),
			MyCandy.end(),
			[](const Candy& candy1, const Candy& candy2)
			{
				return candy1.mass_in_grams > candy2.mass_in_grams;
			});
	}
	void PrintSortMass()
	{
		for (auto it = MyCandy.begin(); it != MyCandy.end(); it++) {
			cout << it->name << ", " << it->mass_in_grams << endl;

		}

	}
	void PrintTheMostExpensiveCandies()
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