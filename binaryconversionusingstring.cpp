#include <iostream>
#include <string>
using namespace std;
string decimalToBinary(int decimal) {
    if (decimal == 0) {
        return "0";
    }
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2; 
    }
    return binary;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    string binary = decimalToBinary(decimal);
    cout << "Binary representation: " << binary << endl;
    return 0;
}
