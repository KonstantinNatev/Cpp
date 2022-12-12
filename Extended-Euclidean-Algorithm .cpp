// the logic for extended eucldean algorithm is not full main. I use some code from one Arabic guy :)

#include <iostream>

using namespace std;

int ext_gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;

        return a;
    }

    int x1, y1;

    int d = ext_gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - y1 * (a / b);

    return d;
 }


int main() {

    int a, b, c, x, y;

    cin >> a >> b >> c;

    if (1 <= a && a <= 100 && 1 <= b && b <= 100 && 1 <= c && c <= 100) {

        int g = ext_gcd(a, b, x, y);


        x = x * (c / (g));
        y = y * (c / (g));

      //  int result = a*x + b*y;

        if (c % g == 0){

            cout << x << endl;
            cout << y << endl;

        }
        else {

            cout << "No solution!";
        }

    }
    else {
        cout << "Invalid input data!";
    }
}
