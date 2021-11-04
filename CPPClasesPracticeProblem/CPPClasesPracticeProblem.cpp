// CPPClasesPracticeProblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"

int main()
{
    //note i dont know much about cars other than how to partially drive them
    // 
    // 
    //seting car values 

    Car myCar1("Car","happens to be a car");

    Car myCar2("Van", "not car, is van");

    Car myCar3("Bus", "its a bus");

    Car myCar4("Truck", "its a truck");
    
    Car myCar5("IDK", "idk, could be anything");


    //Print functions
    myCar1.Print();
    myCar2.Print();
    myCar3.Print();
    myCar4.Print();
    myCar5.Print();

    //Drive functions 
    myCar1.Drive();
    myCar2.Drive();
    myCar3.Drive();
    myCar4.Drive();
    myCar5.Drive();
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
