#include<iostream>
using namespace std;
main()
{
int polygon_sides;
float angles;
cout<<"Enter the number of sides of the polygon: ";
cin>>polygon_sides;
angles= (polygon_sides - 2) * 180;
cout<<"The sum of internal angles of a "<<polygon_sides<<"-sided polygon is: "<<angles<<" degrees";
}