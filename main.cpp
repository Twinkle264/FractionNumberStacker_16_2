#include <iostream>
#include <string>

using namespace std;

bool isCorrect(string num) {
    if (num[0] != '-' && (num[0] < '0' || num[0] > '9')) {
        cerr << "Invalid input! Please try again!" << endl;
        return false;
    }
    for (int i = 1; i < num.size(); ++i) {
        if (num[i] < '0' || num[i] > '9') {
            cerr << "Invalid input! Please try again!" << endl;
            return false;
        }
    }
    return true;
}

int main() {
    string intPart;
    string fracPart;

    double c;

    do {
        cout << "Input the integer part of number: ";
        cin >> intPart;
        cout << endl;
    } while (!isCorrect(intPart));


    do {
        cout << "Input the fractional part of a number: ";
        cin >> fracPart;
        cout << endl;
        if (fracPart[0] == '-') {
            cerr << "The fractional part cannot be negative! Try again." << endl;
        }
    } while (fracPart[0] == '-' || !isCorrect(fracPart));

    c = stod(intPart + '.' + fracPart);

    cout << "Double is " << c;
    return 0;
}
