#include "Candy.h"
#include "DInner.h"


int main()
{
	vector<Candy> MyCandy;
	Candy candy1("Milka", 40, 100, 21);
	Candy candy2("chupa-chups", 10, 5, 3);
	Candy candy3("Barbarys", 35, 200, 2);
	Dinner dinner1("Monday", 19);
	dinner1.Print_Dinner();
	cout << "___________________________________" << endl;
	candy1.ate();
	candy1.Print_candy();
	cout << "___________________________________" << endl;
	candy2.ate();
	candy2.Print_candy();
	cout << "___________________________________" << endl;
	candy3.ate();
	candy3.Print_candy();
	dinner1.AddCandy(candy1);
	dinner1.AddCandy(candy2);
	dinner1.AddCandy(candy3);
	cout << "___________________________________" << endl;
	dinner1.SortMass();
	dinner1.PrintSortMass();
	cout << "___________________________________" << endl;
	dinner1.findTheMostExpensiveCandies();
	dinner1.PrintTheMostExpensiveCandies();

}

	
