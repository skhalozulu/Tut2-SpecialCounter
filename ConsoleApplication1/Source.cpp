#include <iostream>
using namespace std;


class SpecialCounter
{
private:

	int Start, Stop, Up, Down;

public:

	SpecialCounter();
	void count();
	void count(int, int, int, int);

};
int main()
{
	SpecialCounter counting;
	counting.count();
	system("pause");
	return 0;
}

SpecialCounter::SpecialCounter()
{
	Start = 0;
	Stop = 255;
	Up = 1;
	Down = 1;
}
void SpecialCounter::count()
{
	
	cout << endl << endl << " Counting up"<< Sleep(500);

	for (int i = Start; i <= Stop; i += Up)
	{
		cout << endl << "  " << i; Sleep(70);
	} Sleep(500);

	system("cls");

	cout << endl << endl << " Counting down"; Sleep(500);

	for (int i = Stop; i >= Start; i -= Down)
	{
		cout << endl << "  " << i; Sleep(70);
	}
	cout << endl << endl;
}

void SpecialCounter::count(int strt, int stp, int incrm, int dcrm)
{
	Start = strt;
	Stop = stp;
	Up = incrm;
	Down = dcrm;
	count();
}