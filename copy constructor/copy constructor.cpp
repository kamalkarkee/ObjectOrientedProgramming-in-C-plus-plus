//copy constructor
#include <iostream>

class student{
int age;
public:
student(){
  age=0;
}

student(int num){
  age=num;
}
student(student &obj){
  std::cout<<"Copy Constructor is called"<< std::endl;
  age=obj.age;
}
void display(){
  std::cout<<"The student age is: "<< age <<std::endl;
}
};

int main(){
  student s1(24);
  s1.display();  
  
  student s2 (s1);
  s2.display();
  
  student s3=s1;
  s3.display();
  
  return 0;
  };