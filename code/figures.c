#include <iostream>
using namespace std;

void rectangle();
void triangle();

main(){
  int option=1;

  do{
    cout<<"Select an option: "<<endl;
    cout<<"1. Area of a rectangle"<<endl;
    cout<<"2. Area of a triangle"<<endl;
    cin>>option;
  }while(option<1 || option>2);
  cout<<"Option: "<<option<<endl;
  cout<<endl;
  switch(option){
      case 1: rectangle();
    break;
      case 2: triangle();
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

void triangle(){
  float base=0, height=0, area=0;
  
  cout<<"Base: ";
  cin>>base;
  cout<<"Height: ";
  cin>>height;
  area=(base*height)/2.0;
  cout<<"The area of the triangle is: "<<area<<endl;
}