#include<iostream>
using namespace std;
main()
{
float initial_v,acceleration,time,final_v;
cout<<"Enter Initial Velocity (m/s): ";
cin>>initial_v;
cout<<"Enter Acceleration (m/s^2): ";
cin>>acceleration;
cout<<"Enter Time (s): ";
cin>>time;
final_v = (acceleration * time) + initial_v;
cout<<"Final Velocity (m/s): "<<final_v;
}