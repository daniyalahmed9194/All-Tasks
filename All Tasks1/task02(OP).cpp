#include<iostream>
using namespace std;

void inches_to_feet(float inches);

main()
{
	float Inches;
	cout << "Enter the measurement in inches: ";
	cin >> Inches ;
	inches_to_feet(Inches);
}
void inches_to_feet(float inches)
{
	float feet;
	feet = inches/12;
	cout << "Equivalent in feet: "<<feet;
}
