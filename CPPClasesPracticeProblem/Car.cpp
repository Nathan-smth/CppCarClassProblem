#include "Car.h"
#include <iostream>


//Car::Car(std::string newMake, std::string newModel, int newNumOfDoors, float newMileage, float newMilesPerGallon, float newPetrolLevel)
	//: make(newMake)
	//, model(newModel)
	//, numOfDoors(newNumOfDoors)
//	, mileage(newMileage)
	//, milesPerGallon(newMilesPerGallon)
//	, petrolLevel(newPetrolLevel)

//{
//	std::cout << "this do be working!" << "\n";
//	std::cout << "\n";
	//std::cout << "\n";
//}
int counter=1;
Car::Car(std::string newMake, std::string newModel)
	: make(newMake)
	, model(newModel)
{

	
	if (newMake == "Car")
	{
		numOfDoors = 4;
		mileage = 12000.0f;
		milesPerGallon = 25.0f;
		petrolLevel = 50.0f;
	}
	else if (newMake == "Van")
	{
		numOfDoors = 4;
		mileage = 100000.0f;
		milesPerGallon = 17.5f;
		petrolLevel = 100.0f;
	}
	else if (newMake == "Bus")
	{
		numOfDoors = 1;
		mileage = 250000.0f;
		milesPerGallon = 10.0f;
		petrolLevel = 200.0f;
	}
	else if (newMake == "Truck")
	{
		numOfDoors = 4;
		mileage = 200000.0f;
		milesPerGallon = 6.0f;
		petrolLevel = 250.0f;
	}
	else
	{
		 std::cout << "Please enter the number of doors for car " << counter << ": ";
		 std::cin >> numOfDoors;
		 std::cout << "\n";


		 std::cout << "Please enter the mileage for car " << counter << ": ";
		 std::cin >> mileage;
		 std::cout << "\n";


		 std::cout << "Please enter the miles per gallon for car " << counter << ": ";
		 std::cin >> milesPerGallon;
		 std::cout << "\n";


		 std::cout << "Please enter the petrol level for car "<<counter<<": ";
		 std::cin >> petrolLevel;
		 std::cout << "\n";
	}

	std::cout << "this do be working!" << "\n";
	std::cout << "\n";
	std::cout << "\n";

	counter++;
}

void Car::Print()
{
	std::cout << "The make is: " << make << "." << "\n";
	std::cout << "The model is: " << model << "." << "\n";
	std::cout << "The number of doors is: " << numOfDoors << "." << "\n";
	std::cout << "The mileage is: " << mileage << "." << "\n";
	std::cout << "The miles per gallon is: " << milesPerGallon << "." << "\n";
	std::cout << "The petrol level is: " << petrolLevel << "." << "\n";

	std::cout << "\n";
	std::cout << "\n";
	counter = 1;
}

void Car::Drive()
{
	int milesUserWants;
	std::cout << "Please eneter how many miles you wanna drive with car " << counter << ": ";
	std::cin >>  milesUserWants;
	std::cout << std::endl;

	mileage = mileage + milesUserWants;
	petrolLevel = petrolLevel - (milesUserWants / milesPerGallon);

	std::cout << "The make is: " << make << "." << "\n";
	std::cout << "The model is: " << model << "." << "\n";
	std::cout << "The number of doors is: " << numOfDoors << "." << "\n";
	std::cout << "The new mileage is: " << mileage << "." << "\n";
	std::cout << "The miles per gallon is: " << milesPerGallon << "." << "\n";
	std::cout << "The new petrol level is: " << petrolLevel << "." << "\n";

	std::cout << "\n";
	std::cout << "\n";
}
