#include<iostream>
using namespace std;

void evenOrOdd(int n);

main(){

	int number;
	cout<<"Enter a number: ";
	cin>>number;
	evenOrOdd(number);
}
void evenOrOdd(int n){

	if (n%2 == 0)
{
	cout<<"Number "<<n<<" is even";
}

	if (n%2 == 1)
{
	cout<<"Number "<<n<<" is odd";
}
}