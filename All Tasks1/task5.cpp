#include<iostream>
using namespace std;
main()
{
int e,m,i;
float agg,final_agg;
string name;
cout<<"Enter the student's name: ";
cin>>name;
cout<<"Enter matriculation marks (out of 1100): ";
cin>>m;
cout<<"Enter intermediate marks (out of 550): ";
cin>>i;
cout<<"Enter Ecat marks (out of 400): ";
cin>>e;
agg = (e/400.0 * 0.5) + (m/1100.0 * 0.1) + (i/550.0 * 0.4);
final_agg = agg * 100;
cout<<"Aggregate score for "<<name <<" in UET is: "<<final_agg<<"%" ;
}