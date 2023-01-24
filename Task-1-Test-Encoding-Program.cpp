#include <iostream>
#include <string>

using namespace std;


int main() {
	string expression;

	getline(cin, expression);


	int length = expression.length();

	char* arr = new char[length];

	char asciiChar;

	for (int i = 0; i < length; i++) {

		//cout << expression[i] << endl;

		asciiChar = expression[i];

		if ('A' <= asciiChar && asciiChar <= 'Y') {

			char result = asciiChar + 1;



			//cout << result;
			arr[i] = result;

		}
		else if ('a' <= asciiChar && asciiChar <= 'y') {

			int result = asciiChar + 1;


			//cout << result;
			arr[i] = result;

		}
		else if (asciiChar == 'Z' || asciiChar == 'z') {
			arr[i] = ' ';
		}
		else if (asciiChar == ' ') {

			char nextChar = expression[i + 1];

			if ('A' <= nextChar && nextChar <= 'Z') {
				arr[i] = 'A';
			}
			else if ('a' <= nextChar && nextChar <= 'z'){
				arr[i] = 'a';
			}

		}
	}



	for (int i = 0; i < length; i++) {

		cout << arr[i];
	}
}

