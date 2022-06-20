#include <iostream>
//getter and setter concept
class Area{
public:
Area()= default;

 Area(double length, double breadth){
 }
  double area(){
     return length*breadth;
    }
//getter
double get_length(){
  return length;
}
 double get_breadth(){
   return breadth;
 }
//setter
void set_length(double length1){
  length=length1;
}

void set_breadth(double breadth1){
  breadth=breadth1;
}
private:
  int length=5;
  int breadth=6;
};

int main(){
  Area area1;
  std::cout<<"The area(before the getter and setter) is "<< area1.area() <<std::endl;
  //modify our object
  area1.set_length(10);
  area1.set_breadth(6);
  std::cout<<"The area(after modifying with getter and setter) is "<< area1.area() <<std::endl;

   return 0;
 }