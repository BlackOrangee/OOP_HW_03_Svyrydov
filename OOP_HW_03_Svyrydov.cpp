#include <iostream>
#include "Goods.h"
#include "Basket.h"
#include "Storage.h"

// Function to print the contents of the storage and basket
void Print(Storage& storage, Basket& basket)
{
	// Display a header for the storage section
	cout << "\n\n\tStorage:";

	// Call the Print function of the Storage class to display the storage contents
	storage.Print();

	// Display a header for the basket section
	cout << "\n\n\tBasket:";

	// Call the Print function of the Basket class to display the basket contents
	basket.Print();
}

// Function to add goods to the basket from the storage
void AddToBasket(Storage& storage, Basket& basket)
{
    // Declare variables to store user input
    string name;
    int amount = 0;

    // Obtain pointers to different types of goods from the storage
    Electronic* electronic = storage.Getelectronic();
    Cloches* cloches = storage.Getcloches();
    Food* food = storage.Getfood();

    // Prompt the user to enter the name of the goods
    cout << "\n\n\tEnter goods name: ";
    cin >> name;

    // Prompt the user to enter the amount of goods to add to the basket
    cout << "\n\tEnter amount: ";
    cin >> amount;

    // Check the name of the goods and add them to the basket if available in the storage
    if (name == "electronic")
    {
        // Check if the requested amount of electronic goods is available and can be bought
        if (electronic->Buy(amount))
        {
            // Add the electronic goods to the basket
            basket.add(name, amount);
        }
    }
    else if (name == "cloches")
    {
        // Check if the requested amount of cloches is available and can be bought
        if (cloches->Buy(amount))
        {
            // Add the cloches to the basket
            basket.add(name, amount);
        }
    }
    else if (name == "food")
    {
        // Check if the requested amount of food is available and can be bought
        if (food->Buy(amount))
        {
            // Add the food to the basket
            basket.add(name, amount);
        }
    }
}

// Function to display the menu and handle user's choices
void Menu(Storage& storage, Basket& basket)
{
    // Declare a variable to store user's menu choice
    int menu = 0;

    // Display the menu options
    cout << "\n\n\t1 -- Print goods\n\t2 -- Add to basket\n\t";
    cin >> menu;

    // Use a switch statement to handle different menu choices
    switch (menu)
    {
    case 1:
        // If user chooses to print goods, call the Print function
        Print(storage, basket);
        break;
    case 2:
        // If user chooses to add to the basket, call the AddToBasket function
        AddToBasket(storage, basket);
        break;
    default:
        // For any other choice, do nothing
        break;
    }

    // After processing the current choice, display the menu again for the next choice
    Menu(storage, basket);
}


int main()
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Create instances of Storage and Basket classes
    Storage storage;
    Basket basket(storage);

    // Start the menu-based interaction by calling the Menu function
    Menu(storage, basket);
}