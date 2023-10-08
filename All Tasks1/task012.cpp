#include<iostream>
using namespace std;
main()
{
int width,height,area,no_of_walls;

cout<<"Number of square meters you can paint: ";
cin>>area;
cout<<"Width of the single wall (in meters): ";
cin>>width;
cout<<"Height of the single wall (in meters): ";
cin>>height;
no_of_walls = area /(width*height);
cout<<"Number of walls you can paint: "<<no_of_walls;
}