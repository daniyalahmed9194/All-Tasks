#include<iostream>
using namespace std;
main()
{
float i,p,imposter_chance;

cout<<"Enter Imposter Count: ";
cin>>i;
cout<<"Enter Player Count: ";
cin>>p;
imposter_chance = 100*(i/p);
cout<<"Chance of being an imposter: "<<imposter_chance<<"%";
}