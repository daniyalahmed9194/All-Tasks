#include<iostream>
using namespace std;
void calculateFuel(float dis);
main(){
	float distance;
	cout <<"Enter the distance: ";
	cin >> distance ;
	calculateFuel(distance);
}
void calculateFuel(float a)
{
float fuel;
fuel = a*10;
cout << "Fuel needed: "<<fuel;
}