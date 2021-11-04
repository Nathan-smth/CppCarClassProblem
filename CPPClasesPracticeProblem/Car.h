#pragma once

#include <string>


class Car
{
public:

	//constructors

	//Car(std::string newMake, std::string newModel, int newNumOfDoors, float newMileage,
	//	float newMilesPerGallon, float newPetrolLevel);

	Car(std::string newMake, std::string newModel);

	//functions
	void Print();
	void Drive();



	//Data

	std::string make;
	std::string model;
	int numOfDoors;
	float mileage;
	float milesPerGallon;
	float petrolLevel;


};