/*  Matthew Green
    Project 4
    CMPS 191-02
    Input:
    Processing:
    Output:
*/


#include <iostream>
#include <string>

using namespace std;

// Function prototypes
void showMenu();
int getFee(string category);
void calculateAndDisplayTotalCost(int fee, int months);

int main() {
    string category;
    int months;

    // Show membership categories
    showMenu();

    // Get user's choice
    cout << "Enter your membership category: ";
    cin >> category;
    
    // Get number of months for subscription
    cout << "Enter the number of months: ";
    cin >> months;

    // Get the fee based on the category
    int fee = getFee(category);

    // Calculate and display total cost
    if(fee != -1) {
        calculateAndDisplayTotalCost(fee, months);
    } else {
        cout << "Invalid category entered. Please restart the program and enter a valid category." << endl;
    }

    return 0;
}

void showMenu() {
    cout << "Membership Categories and Monthly Fees:\n";
    cout << "ADULT = $40\n";
    cout << "SENIOR = $30\n";
    cout << "CHILD = $20\n";
    cout << "VETERAN = $10\n";
    cout << "DISABLEDVETERAN = $1\n";
    cout << "CLUBWORKER = $5\n";
}

int getFee(string category) {
    if (category == "ADULT") {
        return 40;
    } else if (category == "SENIOR") {
        return 30;
    } else if (category == "CHILD") {
        return 20;
    } else if (category == "VETERAN") {
        return 10;
    } else if (category == "DISABLEDVETERAN") {
        return 1;
    } else if (category == "CLUBWORKER") {
        return 5;
    } else {
        return -1; // Invalid category
    }
}

void calculateAndDisplayTotalCost(int fee, int months) {
    int totalCost = fee * months;
    cout << "The total cost for " << months << " month(s) is: $" << totalCost << endl;
}

