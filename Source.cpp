#include <iostream>
#include <string>

using  namespace std;

int main() {

	string expression;
	int counter;

	getline(cin, expression);
	
	cin >> counter;
	
	


if (counter <= 25) {


	int length = expression.length();

	char* arr = new char[length];

	char asciiChar;

	for (int i = 0; i < length; i++){

		//cout << expression[i] << endl;

		asciiChar = expression[i];
		
		if ('A' <= asciiChar && asciiChar <= 'Z') {

			char result = asciiChar + counter;	


			if(result > 'Z') {

				char middleStep = result - 'Z';

				result = 64 + middleStep;

			}

			//cout << result;
			arr[i] = result;

		}else if ('a' <= asciiChar && asciiChar <= 'z') {

			int result = asciiChar + counter;


			if (result > 'z') {

				char middleStep = result - 'z';

				result = 'a' + middleStep;

			}

			//cout << result;
			arr[i] = result;

		}
		else{
			arr[i] = asciiChar;
		}

	}

	for (int i = 0; i < length; i++){

		cout << arr[i];
	}
}
else
{
	cout << "Invalid input data!";
}

}