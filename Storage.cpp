#include "Storage.h"

Storage::Storage()
{
    // Initialize the electronic goods with a random amount and price
    electronic.Setamount(rand() % 50);
    electronic.Setprice(rand() % 50);

    // Initialize the cloches goods with a random amount and price
    cloches.Setamount(rand() % 50);
    cloches.Setprice(rand() % 50);

    // Initialize the food goods with a random amount and price
    food.Setamount(rand() % 50);
    food.Setprice(rand() % 50);
}


void Storage::Print()
{
    // Print information about the electronic goods
    cout << "\n\n\tElectronic:\n\tAmount: " << electronic.Getamount() << "\n\tPrice: " << electronic.Getprice();

    // Print information about the cloches goods
    cout << "\n\n\tCloches:\n\tAmount: " << cloches.Getamount() << "\n\tPrice: " << cloches.Getprice();

    // Print information about the food goods
    cout << "\n\n\tFood:\n\tAmount: " << food.Getamount() << "\n\tPrice: " << food.Getprice();
}


// Get a pointer to the Electronic goods in the storage
Electronic* Storage::Getelectronic()
{
    return &electronic;
}

// Get a pointer to the Cloches goods in the storage
Cloches* Storage::Getcloches()
{
    return &cloches;
}

// Get a pointer to the Food goods in the storage
Food* Storage::Getfood()
{
    return &food;
}
