// Name: Peter Choi
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main ()
{

    //Setup and declare variables.
    double tax = .0775;
    double tip = .2;
    double meal_total;
    double tax_total;
    double tip_total;
    double bill_total;

    //Request amounts from user.
    std::cout << "How much did the food and drinks cost?\n";
    std::cin >> meal_total;
    std::cout << std::endl;

    //Calculate the tax, tip and total.
    tax_total = meal_total * tax;
    tip_total = meal_total * tip;
    bill_total = meal_total + tax_total + tip_total;

    //Display bill_total
    std::cout << "Here is the total of your bill:\n";
    std::cout << "Tax Amount: \t" << tax_total << std::endl;
    std::cout << "Tip Amount: \t" << tip_total << std::endl;
    std::cout << "Total Bill: \t" << bill_total << std::endl;

  return 0;
}
