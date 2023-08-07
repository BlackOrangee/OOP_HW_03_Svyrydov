#pragma once
#include "Goods.h"
class Electronic :
    public Goods
{
public:
    // Function to buy a specified amount of food
    // Returns true if the purchase is successful, otherwise false
    bool Buy(int);

    // Function to check if a specified amount of food is available for purchase
    // Returns true if there's enough amount, otherwise false
    bool Check(int);
};