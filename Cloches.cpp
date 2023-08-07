#include "Cloches.h"

bool Cloches::Check(int much)
{
    // Check if there's enough amount of cloches to purchase
    if (amount - much >= 0)
    {
        return true; // Return true if enough amount is available
    }
    return false; // Return false if not enough amount is available
}

bool Cloches::Buy(int much)
{
    // Check if there's enough amount of cloches to buy
    if (Check(much))
    {
        amount -= much; // Reduce the amount of cloches
        return true;    // Return true to indicate successful purchase
    }
    cerr << "Not enough amount of cloches"; // Display an error message if purchase is not possible
    return false; // Return false to indicate unsuccessful purchase
}
