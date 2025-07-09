#include <iostream>
using namespace std;

int main() {
    float units, amount , totalBill;

   
    cout << "Enter total electricity units consumed: ";
    cin >> units;

    
    if (units <= 50) {
        amount = units * 0.50;
    } else if (units <= 150) {
        amount = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        amount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

 
    totalBill = amount + (amount * 0.20);


    cout << "Total Electricity Bill: Rs. " << totalBill << endl;

 
}
