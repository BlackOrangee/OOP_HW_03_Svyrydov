#pragma once

#include "Electronic.h"
#include "Cloches.h"
#include "Food.h"

class Storage
{
private:
    Electronic electronic; // Instance of the Electronic class for storing electronic goods
    Cloches cloches;       // Instance of the Cloches class for storing cloches goods
    Food food;             // Instance of the Food class for storing food goods

public:
    // Default constructor to initialize the storage
    Storage();

    // Method to get a pointer to the electronic goods
    Electronic* Getelectronic();

    // Method to get a pointer to the cloches goods
    Cloches* Getcloches();

    // Method to get a pointer to the food goods
    Food* Getfood();

    // Method to print the contents of the storage
    void Print();
};
