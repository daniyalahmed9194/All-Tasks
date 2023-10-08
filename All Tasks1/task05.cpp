#include<iostream>
using namespace std;
main()
{
    int days,t_w;
    string name;
    

    cout<<"Enter the Name of the Person: ";
    cin>>name;
    cout<<"Enter the target weight loss in kilograms: ";
    cin>>t_w;
    days = t_w * 15;
    cout<<name<<" will need "<<days<<" days to lose "<<t_w<< " kg of weight by following the doctor's suggestions";
}