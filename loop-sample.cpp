/*
loop-sample.cpp
*/

#include <iostream>

using namespace std;

/*
# Build with the following command 
g++ -Wall loop-sample.cpp -o loop-sample && ./loop-sample
*/

int main()
{
    int myNumber = 0;
    cin >> myNumber;

    for (int i = 0; i < 4; i++)
    {
        cout << "Alex";
        cout << " Saldana";
        cout << myNumber;
        cout << " ";
    }

    cout << endl;

    return 0;
}
