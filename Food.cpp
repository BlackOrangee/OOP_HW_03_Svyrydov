#include "Food.h"


bool Food::Check(int much)
{
    // Check if there's enough amount of food to purchase
    if (amount - much >= 0)
    {
        return true; // Return true if enough amount is available
    }
    return false; // Return false if not enough amount is available
}

bool Food::Buy(int much)
{
    // Check if there's enough amount of food to buy
    if (Check(much))
    {
        amount -= much; // Reduce the amount of food
        return true;    // Return true to indicate successful purchase
    }
    cerr << "Not enough amount of food"; // Display an error message if purchase is not possible
    return false; // Return false to indicate unsuccessful purchase
}
