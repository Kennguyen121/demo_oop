// demo OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Animal
{
protected:
	//attributes
	std::string name;
public:
	//contrustor
	Animal(std::string _name) 
	{
		name = _name;
	}

	//methods
	virtual void makeSound() 
	{
		std::cout << "Animals make sound" << std::endl;
	}
};

class Dog : public Animal {
public:
	//contrustor
	Dog(std::string _name) : Animal(_name) {}

	//methods
	void makeSound() 
	{
		std::cout << name << " make sound" << std::endl;
	}
	void fetch() 
	{
		std::cout << name << " are fetching" << std::endl;
	}
};

class Cat : public Animal {
public:
	//constructors
	Cat(std::string _name) : Animal(_name) {}

	//methods
	void makeSound()
	{
		std::cout << name << " make sound" << std::endl;
	}
	void scratch() 
	{
		std::cout << name << " are scratching" << std::endl;
	}
};

int main() {
	Animal* animal1 = new Dog("Dogs");
	Animal* animal2 = new Cat("Kitties");

	animal1->makeSound();
	animal2->makeSound();

	Dog* dog = dynamic_cast<Dog*>(animal1);
	if (dog != nullptr) 
	{
		dog->fetch();
	}

	Cat* cat = dynamic_cast<Cat*>(animal2);
	if (cat != nullptr) 
	{
		cat->scratch();
	}

	delete animal1;
	delete animal2;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
