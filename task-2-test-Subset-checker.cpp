#include <iostream>
#include <string>

using namespace std;

bool isSubsetFunc(int* firstSet, int* secondSet) {

	bool isSubset = true;

	for (int i = 0; i < sizeof(firstSet); i++) {

		if (firstSet[i] == 1) {
			if (firstSet[i] != secondSet[i]){

				isSubset = false;
			}
		}

	}

	return isSubset;
}

int main() {
	//1,2,3,4,5,6,7,8,9,10 
	int Universal[10] = { 1,1,1,1,1,1,1,1,1,1 };

		//1,2,3,4,5,6,7,8,9,10
	int A[10] = {1,1,1,1,1,1,1,1,1,1};

	//1,2,3,4,5,6,7,8,9,10
	int B[10] = {1,1,1,1,1,1,1,1,1,1};

	//1,3,5
	int C[10] = {1,0,1,0,1,0,0,0,0,0};

	//1,2
	int D[10] = {1,1,0,0,0,0,0,0,0,0};

	//1
	int E[10] = {1,0,0,0,0,0,0,0,0,0};

	cout << isSubsetFunc(D, A);

}
