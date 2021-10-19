#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int numRemaining, originalMonths;
    double numAdded = 0;
    double numAdded2 = 0;
    std::cout << "enter the months remaining: " << endl;
    cin >> numRemaining;
    cout << "Enter the original months: " << endl;
    cin >> originalMonths;

    for(int a = numRemaining; a > 0; a--)
    {
        numAdded = numAdded + a;
    }
    for(int a = originalMonths; a > 0; a--)
    {
        numAdded2 = numAdded2 + a;
    }

    string ans;
    cout << "Looking for the fraction or refund? " << endl;
    cin >> ans;

    for_each(ans.begin(), ans.end(), [](char & a)
    {
        a = ::toupper(a);
    });

    if(ans == "FRACTION")
    {
        cout << "The refund fraction is : " << numAdded << " / " << numAdded2;
    }
    else if(ans == "REFUND")
    {
        double costValue = 0;
        cout << "What was the cost value?" << endl;
        cin >> costValue;
        double refunded = (numAdded/numAdded2) * costValue;
        cout << "The amount refunded is : " << refunded << endl;
    }

    return 0;
}
