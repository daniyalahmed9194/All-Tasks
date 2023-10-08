#include<iostream>
using namespace std;
void pet(int Holidays);
main()
{

	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);

}

void pet(int Holidays)
{

	int wDays,tomGames,normalPlayTime = 30000,diff,hourDiff,minuteDiff;
	wDays = 365 - Holidays;
	tomGames = wDays * 63 + holidays * 127;
	diff = normalPlayTime - tomGames;
	hourDiff = diff/60;
	minuteDiff = diff % 60;
	if (tomGames > normalPlayTime)
	{
		cout<<"Tom will run away"<<endl;
		hourDiff *= -1;
		minuteDiff *= -1;
		cout<<hourDiff<<" hours and "<<minuteDiff<<" minutes for play";
	}
	if (tomGames <= normalPlayTime)
	{
		cout<<"Tom sleeps well"<<endl;
		cout<<hourDiff<<" hours and "<<minuteDiff<<" minutes less for play";
	}

}