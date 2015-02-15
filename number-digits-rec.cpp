/*
number-digits-rec.cpp
*/

#include <iostream>

using namespace std;

/*
# Build with the following command 
g++ -Wall number-digits-rec.cpp -o number-digits-rec && ./number-digits-rec
*/

void printReversedDigits(int n) {
    cout << n % 10;

    n /= 10;

    if (n > 0){
        printReversedDigits(n);
    }
}

int main()
{
    int myNumber = 0;
    cout << "Enter a number: ";
    cin >> myNumber;

    printReversedDigits(myNumber);

    cout << endl;

    return 0;
}
