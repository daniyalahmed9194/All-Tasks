#include<iostream>
using namespace std;
main()
{
int input;
int current = 300;
int converted;
cout<<" 1$ ="<<current<<"rupees"<<endl;
cout<<"input amount in dollars";
cin>>input;
converted = current * input;
cout<<input<<"dollars ="<<converted<<"rupees";
}