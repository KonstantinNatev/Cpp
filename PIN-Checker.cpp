#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {

// personal identification number
	long long int pin;

	cin >> pin;

	string size = to_string(pin);
	
	int length = size.length();

	if (length == 10) {

		long long int number = pin;

		int year = number / 100000000;

		int month = number / 1000000;
		month = month % 100;


		int day = number / 10000;
		day = day % 100;

		if (21 <= month && month <= 32){

			month = month - 20;
		}

		if (41 <= month && month <= 52) {

			month = month - 40;
		}

		int x1 = year / 10;
		int x2 = year % 10;

		int x3 = month / 10;
		int x4 = month % 10;

		int x5 = day / 10;
		int x6 = day % 10;

		int x7 = number / 1000;
		x7 = x7 % 10;

		int x8 = number / 100;
		x8 = x8 % 10;

		int x9 = number / 10;
		x9 = x9 % 10;

		int result;

		//x10 = (2 * x1 + 4 * x2 + 8 * x3 + 5 * x4 + 10 * x5 + 9 * x6 + 7 * x7 + 3 * x8 + 6 * x9) % 11
		result = (2 * x1 + 4 * x2 + 8 * x3 + 5 * x4 + 10 * x5 + 9 * x6 + 7 * x7 + 3 * x8 + 6 * x9) % 11;

		if (result == 10){
			result = 0;
		}

		cout << result;
	}else{

		cout << "Invalid input data!";
	}


}
