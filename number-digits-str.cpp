/*
number-digits-str.cpp
*/

#include <iostream>

using namespace std;

/*
# Build with the following command 
g++ -Wall number-digits-str.cpp -o number-digits-str && ./number-digits-str
*/

int main()
{
    string myNumberStr;
    int sumDigits = 0;

    cout << "Enter a number: ";
    cin >> myNumberStr;    

    for (int i = 0; i < myNumberStr.length(); i++){
        cout << myNumberStr[i] << " ";
        sumDigits += (myNumberStr[i] - 0x30);
    }
    cout << endl;

    cout << "The sum of the digits is: " << sumDigits << endl;

    return 0;
}
