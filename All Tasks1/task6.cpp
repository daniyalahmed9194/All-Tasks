#include <iostream>
using namespace std;
main()
	{
	cout << "Enter the size of the fertilizer bag in pounds: ";
	float size;
	cin >> size;
	cout << "Enter the cost of the bag: $";
	float cost;
	cin >> cost;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	float area;
	cin >> area;
	float fertilizerPerPound = cost / size;
	cout << "Cost of fertilizer per pound: $" << fertilizerPerPound << endl;
	float fertilizerPerSquareFeet = cost / area;
	cout << "Cost of fertilizing per square foot: $" << fertilizerPerSquareFeet; 
	}