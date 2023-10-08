#include<iostream>
using namespace std;
main()
{
float cost_of_bag,size_of_bag,area;
float  cost_per_area,cost_per_pound;

cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>size_of_bag;
cout<<"Enter the cost of the bag: $";
cin>>cost_of_bag;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;
cost_per_pound = cost_of_bag / size_of_bag;
cout<<"Cost of fertilizer per pound: $"<<cost_per_pound<<endl;
cost_per_area = area * size_of_bag;
cout<<"Cost of fertilizing per square foot: $"<<cost_per_area;
}