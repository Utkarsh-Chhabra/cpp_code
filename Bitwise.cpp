#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num1, num2;

    
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;


    cout << "\nBinary of " << num1 << ": " << bitset<8>(num1);
    cout << "\nBinary of " << num2 << ": " << bitset<8>(num2);

    
    cout << "\n\nBitwise AND: " << (num1 & num2) << " (" << bitset<8>(num1 & num2) << ")";
    cout << "\nBitwise OR: " << (num1 | num2) << " (" << bitset<8>(num1 | num2) << ")";
    cout << "\nBitwise XOR: " << (num1 ^ num2) << " (" << bitset<8>(num1 ^ num2) << ")";
    cout << "\nBitwise NOT of num1: " << (~num1) << " (" << bitset<8>(~num1) << ")";
    cout << "\nBitwise NOT of num2: " << (~num2) << " (" << bitset<8>(~num2) << ")";

    cout << "\n\nChecking if " << num1 << " is even or odd: ";
    if (num1 & 1)
        cout << "Odd";
    else
        cout << "Even";

    cout << "\nMultiplying " << num1 << " by 2 using left shift: " << (num1 << 1);
    cout << "\nMultiplying " << num1 << " by 4 using left shift: " << (num1 << 2);
    cout << "\nDividing " << num1 << " by 2 using right shift: " << (num1 >> 1);

    return 0;
}