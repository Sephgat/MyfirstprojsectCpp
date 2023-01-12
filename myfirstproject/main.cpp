#include <iostream>
#include <string>
using namespace std;

    int main() {
        string color;
        int favNum = 0;
        cout << "please enter your favorite color: ";
        getline (cin, color);
        cout << "please enter your favorite number";
        cin >> favNum;
        cout << "your favorite color is: " << color;
        cout << " and, your favorite number is: " << favNum;
        return 0;
    }

