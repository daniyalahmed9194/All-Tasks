#include<iostream>
using namespace std;

void calculatePayableAmount(string din, int paisay);

main(){
	string day;
	int amount;
	
	cout << "Enter the day of purchase: ";
	cin >> day;
	cout << "Enter the total purchase amount: $";
	cin >> amount;
	calculatePayableAmount(day,amount);
}

void calculatePayableAmount(string din, int paisay)
{
	float discount;
	if (din == "Sunday")
{
	discount = paisay - (paisay*0.1);
	cout << "Payable Amount: $"<<discount;
}
	if (din == "Monday")
{
	discount = paisay;
	cout << "Payable Amount: $"<<discount;
}
	if (din == "Tuesday")
{
	cout << "Payable Amount: $"<<discount;
}
	if (din == "Wednesday")
{
	discount = paisay;
	cout << "Payable Amount: $"<<discount;
}
	if (din == "Thursday")
{
	discount = paisay;
	cout << "Payable Amount: $"<<discount;
}
	if (din == "Friday")
{
	discount = paisay;
	cout << "Payable Amount: $"<<discount;
}
	if (din == "Saturday")
{
	discount = paisay;
	cout << "Payable Amount: $"<<discount;
}
}