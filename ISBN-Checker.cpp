#include <iostream>

using namespace std;

int main() { // Task 2 Corrrect ISBN code 0-7167-0344-0
	char isbn[14], * isbn_ptr;
	int* isbn_numbers = new int[10];
	cout << "Please enter an ISBN code: ";
	cin >> isbn;

	isbn_ptr = isbn;
	int i = 0;
	while (*isbn_ptr != '\0') {
		if (*isbn_ptr != '-' && *isbn_ptr != 'X') {
			isbn_numbers[i++] = (int)(*isbn_ptr) - 48;
		}
		if (*isbn_ptr == 'X') {
			isbn_numbers[i++] = 10;
		}
		isbn_ptr++;
	}
	int sum = 0;
	for (int i = 0, j = 1; i < 10; i++, j++) {
		cout << j << " * " << isbn_numbers[i] << " + ";
		sum += j * isbn_numbers[i];
	}
	cout << "\nThe sum is: " << sum << endl;
	cout << "The ISBN number is" << ((sum % 11) ? " not " : " ") << "correct" << endl;
}
