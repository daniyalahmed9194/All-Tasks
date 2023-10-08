#include<iostream>
using namespace std;
void howManyStickers(int stickerNo);

main()
{
	int sticker1;

	cout << "Enter the side length of the Rubik's Cube: ";
	cin >> sticker1;
	howManyStickers(sticker1);
}
void howManyStickers(int n){
	int length ;
	length = n*6*n;
	cout<< "Number of stickers needed: "<<length;
}