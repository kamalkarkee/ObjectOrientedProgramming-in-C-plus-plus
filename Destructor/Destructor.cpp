#include <iostream>

class Employee{
    public : 
       Employee () = default;
        Employee(std::string name_parameter, int height_parameter, int  age_parameter);
        ~Employee();

    private : 
        std::string name;
        int height;
        int * p_age{nullptr} ;
};
Employee::Employee(std::string name_parameter, int height_parameter, int  age_parameter){
    name = name_parameter;
    height = height_parameter;
    p_age = new int;
    *p_age = age_parameter;
    std::cout << "Employee constructor called for: " << name << std::endl;
}

Employee::~Employee(){
    delete p_age;
    std::cout << "Employee destructor called for : " << name << std::endl;
}

void employee1(){
    Employee* p_Employee = new Employee("Mike",3,2);

    delete p_Employee;// Causes for the destructor of Employee to be called
}

int main(){ 

    employee1();
  
    std::cout << "Done!" << std::endl;
    return 0;
}