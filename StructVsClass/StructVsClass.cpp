#include <iostream>

class Boss{ //class are private by default
  std::string m_name;
};

struct Employee //struct are public by default
{
  public : 
    std::string m_name;
};

int main(){
  Boss boss1;
  Employee employee1;

  //boss1.m_name = "Mike"; // Compiler error
  employee1.m_name = "Jason";
  std::cout << employee1.m_name << std::endl;

  return 0;
}