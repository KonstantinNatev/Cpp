#include <iostream>
#include <string>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    long long int ISBN;

    cout << "Enter IBSN: ";
    cin >> ISBN;
    
    /*
    if (((1 * (ISBN % 10) + 2 * (ISBN / 10 % 10) + 3 * (ISBN / 100 % 10)
        + 4 * (ISBN / 1000 % 10) + 5 * (ISBN / 10000 % 10)
        + 6 * (ISBN / 100000 % 10) + 7 * (ISBN / 1000000 % 10)
        + 8 * (ISBN / 10000000 % 10) + 9 * (ISBN / 100000000 % 10)
        + 10 * (ISBN / 1000000000 % 10)) % 11) == 0) {
        cout << "Korekten e!" << endl;
    }
    else {
        cout << "NE E KOREKTEN" << endl;
    }
    */

    int result = 0;

    for (int i = 1; i <= 10; i++) {
        result = result + (i * (ISBN / (int)(pow(10, i-1)) % 10));
    }

    if (result % 11 == 0) {
        cout << "Correct ISBN!" << endl;
    }
    else {
        cout << "Not correct ISBN!" << endl;
    }


    return 0;
}
