#include<iostream>
using namespace std;
main()
{
string  name;
int adult_price,child_price,adult_tickets,child_tickets,atp,ctp;
int total_tickets,remaining;
float charity,price_of_total_tickets,charity_given;

cout<<"Enter the movie name: ";
cin>>name;
cout<<"Enter the adult ticket price: $";
cin>>adult_price;
cout<<"Enter the child ticket price: $";
cin>>child_price;
cout<<"Enter the number of adult tickets sold: ";
cin>>adult_tickets;
cout<<"Enter the number of child ticket sold: ";
cin>>child_tickets;
total_tickets = adult_tickets+child_tickets;
atp = adult_price*adult_tickets;
ctp =child_price * child_tickets;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>charity;
price_of_total_tickets = atp+ctp;
charity_given =price_of_total_tickets * (charity/100.0)<<endl;
cout<<"Movie: "<<name<<endl;
cout<<"Total amount generated from ticket sales: $"<<price_of_total_tickets<<endl;
cout<<"Donation to charity (10%): $"<<charity_given<<endl;
remaining = price_of_total_tickets - charity_given;
cout<<"Remaining amount after donation: $"<<remaining;
}
