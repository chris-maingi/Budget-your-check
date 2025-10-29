// this is a simple C++ program to help users budget their paycheck
// It calculates the allocation of funds into different categories based on user-defined percentages
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double paycheck;
    double bills, fun, savings, investments;
    double billsPercent, funPercent, savingsPercent, investmentsPercent;
    // Set precision for currency output
    std::cout << fixed << setprecision(2);

    // Get user input for paycheck amount
    std::cout << "Enter your total paycheck amount: $";
    std::cin >> paycheck;

    // lets allocate percentages for each category
    std::cout << "From the book 'THE RICHEST MAN IN BABYLON' the recommended budget is: 70/20/10 \n";
    std::cout << "\nIn a more modern book 'I WILL TEACH YOU TO BE RICH' the recommended budget is 50/30/20 \n";
    std::cout << "\nAfter a little research I found that a good budget is 50/30/10/10 \n";
    std::cout << "\n50% for Bills (necessities) \n";
    std::cout << "\n30% for Fun (lifestyle) \n";
    std::cout << "\n10% for Savings \n";
    std::cout << "\n10% for Investments \n";
    billsPercent = 50.0;
    funPercent = 30.0;
    savingsPercent = 10.0;
    investmentsPercent = 10.0;

    // lets calculate the allocations
    bills = (billsPercent / 100) * paycheck;
    fun = (funPercent / 100) * paycheck;
    savings = (savingsPercent / 100) * paycheck;
    investments = (investmentsPercent / 100) * paycheck;

    // Display the results
    std::cout << "\nBased on a paycheck of $" << paycheck << ", your budget allocation is as follows:\n";
    std::cout << "Bills (Necessities): $" << bills << " (" << billsPercent << "%)\n";
    std::cout << "Fun (Lifestyle): $" << fun << " (" << funPercent << "%)\n";
    std::cout << "Savings: $" << savings << " (" << savingsPercent << "%)\n";
    std::cout << "Investments: $" << investments << " (" << investmentsPercent << "%)\n";


   

    return 0;

}