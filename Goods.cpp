#include "Goods.h"

bool Goods::Buy(int much)
{
    amount -= much;  // Deduct the specified amount from the available goods
    return true;     // Return true to indicate successful purchase (base implementation)
}

void Goods::Setamount(int amount)
{
    this->amount = amount;  // Set the amount of goods to the specified value
}

void Goods::Setprice(int price)
{
    this->price = price;  // Set the price of goods to the specified value
}

int Goods::Getamount()
{
    return amount;  // Return the current amount of goods
}

int Goods::Getprice()
{
    return price;  // Return the price of goods
}

int Goods::CalculateTotalPrice()
{
    return amount * price;  // Calculate and return the total price of available goods
}

