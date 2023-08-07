#pragma once

#include <iostream>

using namespace std;
class Goods
{
protected:
    int price = 0;   // Price of the goods
    int amount = 0;  // Available amount of the goods

public:
    // Virtual function to buy a certain amount of goods
    virtual bool Buy(int);

    // Setter for the amount of goods
    void Setamount(int);

    // Setter for the price of goods
    void Setprice(int);

    // Getter for the amount of goods
    int Getamount();

    // Getter for the price of goods
    int Getprice();

    // Calculate the total price of the available goods
    int CalculateTotalPrice();
};
