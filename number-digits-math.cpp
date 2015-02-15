/*
number-digits-math.cpp
*/

#include <iostream>

using namespace std;

/*
# Build with the following command 
g++ -Wall number-digits-math.cpp -o number-digits-math && ./number-digits-math
*/

int numberOfDigits(int n){
    int result = 0;

    do {
        n /= 10;
        result++;
    } while (n > 0);

    return result;
}

int tenthPower(int n){
    int result = 1;
    for (int i = 0; i < n; i++){
        result *= 10;
    }
    return result;
}

int reverseNumber(int n){
    int result = 0;

    int digitsCount = numberOfDigits(n);
    int currentTenthPower = digitsCount - 1;

    do {
        int lastDigit = n % 10;

        int tenthPowerValue = tenthPower(currentTenthPower);
        result += lastDigit * tenthPowerValue;
        currentTenthPower--;

        n /= 10;
    } while(n > 0);
    return result;
}

void printDigitsReversed(int n){
    do {
        cout << n % 10 << " ";
        n /= 10;
    } while(n > 0);
}

int sumOfDigits(int n){
    int result = 0;
    do {
        result += n % 10;
        n /= 10;
    } while(n > 0);
    return result;
}

int main() {
    int myNumber = 0;
    cout << "Enter a number: ";
    cin >> myNumber;

    // cout << "Number of digits: " << digitsCount << endl;
    // cout << "Third power of ten: " << tenthPower(3) << endl;

    int reversedNumber = reverseNumber(myNumber);

    // cout << "Reversed Number: " << reversedNumber << endl;

    cout << "Its digits are: " ; 
    printDigitsReversed(reversedNumber);
    cout << endl;

    cout << "The sum of the digits is: " << sumOfDigits(myNumber) << endl;

    return 0;
}
