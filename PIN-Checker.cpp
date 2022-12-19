#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {

// personal identification number
	string pin = "";

	cin >> pin;

	int length = pin.length();

	char* array = new char[length];

	

	if (length == 10) {


		for (int i = 0; i < length; i++){

			array[i] = pin[i];
		}

		//for ( int i = 0; i < length; i++){


		//	cout << array[i];
		//}

		string months = "";
		months = array[2];
		months += array[3];

		int month = stoi(months);



		
		if (21 <= month && month <= 32){

			month = month - 20;
		}

		if (41 <= month && month <= 52) {

			month = month - 40;
		}

		int x1s = array[0] ;
		int x1 = x1s;

		int x2 =  array[1];

		int x3;
		int x4;
		if (month < 9){

			 x3 = 0;
			 x4 = month;
		}
		else {

		x3 =  month / 10;

		x4 = month % 10;
		}

		int x5 = array[4];
		int x6 = array[5];

		int x7 = array[6];

		int x8 = array[7];

		int x9 = array[8];

		int result;
		//9021011124
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

