#include <iostream>
using namespace std;

void rectangle();


main(){
  int option=1;

  do{
    cout<<"Select an option: "<<endl;
    cout<<"1. Area of a rectangle"<<endl;
    cin>>option;
  }while(option!=1);
  cout<<"Option: "<<option<<endl;
  cout<<endl;
  switch(option){
      case 1: rectangle();
      break;
  }
}

void rectangle(){
  float base=0, height=0, area=0;
  
  cout<<"Base: ";
  cin>>base;
  cout<<"Height: ";
  cin>>height;
  area=base*height;
  cout<<"The area of the rectangle is: "<<area<<endl;
}