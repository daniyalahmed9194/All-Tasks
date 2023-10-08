#include<iostream>
using namespace std;

void calculateFuel(float dis);

main(){
	float distance;
	cout <<"Enter the distance: ";
	cin>> distance;
	calculateFuel(distance);
}
void calculateFuel(float dis)
{
	int fuel;
	fuel = dis *10;
	if (fuel>100)
{
	cout <<"Fuel needed: "<<fuel;
}
	if (fuel<=100)
{
	fuel = 100;
	cout <<"Fuel needed: "<<fuel;
}
}