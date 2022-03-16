//OOP: Encapsulation: default privet, public, protected
//abstraction: what's virtual class? what's virtual function?
//inheritance: 
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

	Employee();//1.same name as the class 2.need to be public 3. no return type
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
class Developer : Employee
{
public:
	std::string ProgramLanguage;

	Developer();
	Developer(std::string name, int age, std::string progLan)
		:Employee(name, age)
	{
		ProgramLanguage = progLan;
	}

	void Cout()
	{
		saySomething();
		std::cout << ProgramLanguage << std::endl;
	}
};


int main()
{
	Employee employee1 = Employee("Lulu Lee", 30);
	employee1.saySomething();
	Developer dev1 = Developer("sisi", 55, "java");
	dev1.Cout();
}