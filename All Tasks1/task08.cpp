#include<iostream>
using namespace std;
main()
{
float price_of_veg,price_of_fruit,Rps,Total_price,total_fruits_price,total_vegs_price;
float total_kilos_veg, total_kilos_fruit;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>price_of_veg;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>price_of_fruit;
cout<<"Enter total kilograms of vegetables: ";
cin>>total_kilos_veg;
cout<<"Enter total kilograms of fruits: ";
cin>>total_kilos_fruit;
total_fruits_price = price_of_fruit *total_kilos_fruit;
total_vegs_price = price_of_veg*total_kilos_veg;
Total_price = total_fruits_price+total_vegs_price;

Rps = Total_price / 1.94;

cout<<"Total earnings in Rupees (Rps): "<<Rps;
}