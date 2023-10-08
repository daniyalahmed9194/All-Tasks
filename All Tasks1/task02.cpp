#include<iostream>
using namespace std;
main()
{
int min,sec,frames,fps;
cout<<"Number of Minutes: ";
cin>>min;
cout<<"Frames per Second: ";
cin>>frames;
sec = min * 60;
fps = frames * sec;
cout<<"Total Number of Frames: "<<fps;
}