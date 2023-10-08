#include<iostream>
using namespace std;

void vote(int age);

main(){
	int Age;
	cout <<"Enter your age: ";
	cin>>Age;
	vote(Age);
}
void vote(int n)
{
	if (n>=18)
{
	cout<<"You are eligible to vote.";
}
	if (n<18)
{
	cout<<"You are not eligible to vote.";
}
}