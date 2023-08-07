#include "Basket.h"

Basket::Basket(Storage storage)
{
	// Initialize the electronic goods in the basket based on the storage
	Electronic* electronic_temp = storage.Getelectronic(); // Get electronic goods info from storage
	electronic.Setprice(electronic_temp->Getprice());      // Set the price of electronic goods in the basket
	electronic.Setamount(0);                               // Initialize the amount of electronic goods in the basket

	// Initialize the cloches goods in the basket based on the storage
	Cloches* cloches_temp = storage.Getcloches();          // Get cloches goods info from storage
	cloches.Setprice(cloches_temp->Getprice());             // Set the price of cloches goods in the basket
	cloches.Setamount(0);                                  // Initialize the amount of cloches goods in the basket

	// Initialize the food goods in the basket based on the storage
	Food* food_temp = storage.Getfood();                   // Get food goods info from storage
	food.Setprice(food_temp->Getprice());                  // Set the price of food goods in the basket
	food.Setamount(0);                                     // Initialize the amount of food goods in the basket
}


void Basket::add(string name, int amount)
{
	// Check the name of the goods and update its amount in the basket accordingly
	if (name == "electronic")
	{
		electronic.Setamount(amount); // Update the amount of electronic goods in the basket
	}
	else if (name == "food")
	{
		food.Setamount(amount);       // Update the amount of food goods in the basket
	}
	else if (name == "cloches")
	{
		cloches.Setamount(amount);    // Update the amount of cloches goods in the basket
	}
}


void Basket::Print()
{
	// Print the details of each type of goods in the basket
	cout << "\n\n\tElectronic:\n\tAmount: " << electronic.Getamount() << "\n\tTotal Price: " << electronic.CalculateTotalPrice();
	cout << "\n\n\tCloches:\n\tAmount: " << cloches.Getamount() << "\n\tTotal Price: " << cloches.CalculateTotalPrice();
	cout << "\n\n\tFood:\n\tAmount: " << food.Getamount() << "\n\tTotal Price: " << food.CalculateTotalPrice();
}
