#include "Electronic.h"


bool Electronic::Check(int much)
{
    // Check if there's enough amount of electronic items to purchase
    if (amount - much >= 0)
    {
        return true; // Return true if enough amount is available
    }
    return false; // Return false if not enough amount is available
}

bool Electronic::Buy(int much)
{
    // Check if there's enough amount of electronic items to buy
    if (Check(much))
    {
        amount -= much; // Reduce the amount of electronic items
        return true;    // Return true to indicate successful purchase
    }
    cerr << "Not enough amount of electronic items"; // Display an error message if purchase is not possible
    return false; // Return false to indicate unsuccessful purchase
}
