//OOP: Encapsulation: default privet, public, protected
//abstraction: what's virtual class? what's virtual function?
//
#include <iostream>

class iEmloyee//this is the virtual class
{
	virtual void saySomething() = 0;
};

class Employee:iEmloyee//here we are inheriting from that virtual class which has only one function
{
public:
	std::string Name = "jiji";
	int Age = 0;

	Employee();
	Employee(std::string name, int age)
	{
		Name = name;
		Age = age;
	
	}
	void saySomething()//have to implement the virtual function in the lower class, I'm calling it [Mandatory override]
	{
		std::cout << Name<<std::endl;
		std::cout << Age<<std::endl;
	}
};

int main()
{
	Employee employee1 = Employee("Lulu Lee", 30);
	employee1.saySomething();
}