#pragma once
#include "Goods.h"
#include "Electronic.h"
#include "Cloches.h"
#include "Food.h"
#include "Storage.h"

class Basket
{
private:
    Electronic electronic; // Electronic goods in the basket
    Cloches cloches;       // Cloches goods in the basket
    Food food;             // Food goods in the basket

public:
    // Constructor that initializes the basket with goods from the storage
    Basket(Storage);

    // Add goods to the basket
    void add(string, int);

    // Print the contents of the basket
    void Print();
};

