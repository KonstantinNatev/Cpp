#include <iostream>
#include <algorithm> 

using namespace std;

void RemoveCharFromString(char* p, char character) {

	if (NULL == p){
		return;
	}

	char* pDest = p;

	while (*p){
		if (*p != character){

			*pDest++ = *p;

		}
		p++;
	}
		
	
}





int main() {

	int lengthA, lengthB;

	cin >> lengthA;
	cin >> lengthB;
	
	bool isTrue = (lengthA >= 0 && lengthA <= 20) && (lengthB >= 0 && lengthB <= 20);

	if (isTrue){

		char* arrA = new char[lengthA];
		char* arrB = new char[lengthB];	

		int lengthC = lengthA + lengthB;

		char sequenceD[20] = "";


		// A - a,c,d
		// B - b,d
		// C - a,b,c

		char* arrC = new char[lengthC];

		for (int i = 0; i < lengthA; i++){
			char temp;
			cin >> temp;

			arrA[i] = temp;
		}

		for (int i = 0; i < lengthB; i++) {
			char temp;
			cin >> temp;

			arrB[i] = temp;
		}

		for (int i = 0; i < lengthA; i++) {
			char element = arrA[i];

			sequenceD[i] = element;
		}

			int counter = 0;
		for (int i = lengthA; i < lengthC; i++) {
			char element = arrB[counter];

			sequenceD[i] = element;

			counter++;
		}


		for (int i = 0; i < lengthC; i++)
		{
			//sequenceD
			bool isTrue = true;

			char currentElement = sequenceD[i];

			for (int j = i + 1; j < lengthC; j++) {
				char nextElement = sequenceD[j];

				if (currentElement == nextElement) {
					RemoveCharFromString(sequenceD, currentElement);
					lengthC--;

				}
			}

		}

		cout << lengthC;

	}
	else
	{
		cout << "Invalid input data!";
	}

}