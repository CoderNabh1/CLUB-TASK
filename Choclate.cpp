#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Rupees:";
    cin >> n;

    // Variables to keep track of chocolates, wrappers, and total chocolates
    int chocolates = n; // Initially, chocolates bought directly with rupees
    int wrappers = chocolates; // Initially, wrappers from bought chocolates
    int totalChocolates = chocolates;

    while (wrappers >= 3) 
    {
        // Calculate new chocolates from wrappers
        int newChocolates = wrappers / 3;
        
        // Update total chocolates and wrappers
        totalChocolates += newChocolates;
        wrappers = newChocolates + (wrappers % 3);
    }

    cout << "You have: " << totalChocolates << " chocolates." << endl;
    return(0);
}