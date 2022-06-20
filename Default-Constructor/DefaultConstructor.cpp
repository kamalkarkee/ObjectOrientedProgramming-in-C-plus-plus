#include <iostream>
//default constructor

class Area{
public:
Area()= default;

 Area(double length, double breadth){
 }
  double area(){
     return length*breadth;
    }
private:
  int length=5;
  int breadth=6;
};

int main(){
  Area area1;
  std::cout<<"The area is "<< area1.area() <<std::endl;

   return 0;
 }