#include<iostream>
using namespace std;
void result(int number);

main()
{
	int numbers;
	cout << "Enter your score: ";
	cin>> numbers;
	result(numbers);
}
void result(int number)
{
	if (number>50)
{
	cout<<"Pass";
}
	if (number<=50)
{
	cout<<"Fail";
}
}