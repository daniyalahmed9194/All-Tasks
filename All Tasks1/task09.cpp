#include<iostream>
using namespace std;
main()
{
int numbers;
int op1,op2,op3,op4,sum;

cout<<"Enter a 4-digit number: ";
cin>>numbers;
op1 = numbers % 10;
numbers /= 10;
op2 = numbers % 10;
numbers /= 10;
op3 = numbers % 10;
numbers /= 10;
op4 = numbers % 10;
sum = op1+op2+op3+op4;
cout<<"Sum of the individual digits: "<<sum;
}