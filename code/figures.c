#include <iostream>
using namespace std;

void rectangle();
void triangle();
void circle();

main(){
  int option=1;

  do{
    cout<<"Select an option: "<<endl;
    cout<<"1. Area of a rectangle"<<endl;
    cout<<"2. Area of a triangle"<<endl;
    cout<<"3. Area of a circle"<<endl;
    cin>>option;
  }while(option<1 || option>2);
  cout<<"Option: "<<option<<endl;
  cout<<endl;
  switch(option){
      case 1: rectangle();
    break;
      case 2: triangle();
    break;
      case 3: circle();
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

void circle(){
  float radius=0, area=0;
  
  cout<<"Radius: ";
  cin>>radius;
  area=3,1415*radius*radius;
  cout<<"The area of the circle is: "<<area<<endl;
}