#include<iostream>
using namespace std;

void add(int n1,int n2);
void sub(int n1,int n2);
void mul(int n1,int n2);
void divi(float n1,float n2);

main(){

	int n1,n2;
	char op;

	cout <<"Enter 1st number: ";
	cin>> n1 ;
	cout<<"Enter 2nd number: ";
	cin>> n2 ;
	cout <<"Enter an operator (+, -, *, /): ";
	cin>> op;

	if (op == '+')
	add(n1,n2);
	if (op == '-')
	sub(n1,n2);
	if (op == '*')
	mul(n1,n2);
	if (op == '/')
	divi(n1,n2);
}
void add(int n1,int n2){
	int sum = n1 +n2;
	cout<< "Addition: "<<sum;
}
void sub(int n1,int n2){
	int min = n1 - n2;
	cout<< "Subtraction: "<<min;
}
void mul(int n1,int n2){
	int pro = n1 * n2;
	cout<< "Multiplication: "<<pro;
}

void divi(float n1,float n2){
	float divide = n1 / n2;
	cout<< "Division: "<<divide;
}