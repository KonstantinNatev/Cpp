#include <iostream>

using namespace std;

int main() {
	int sz = 5;

	int arr[5] = { 1,2,3,1,5 };
	string isTrue = "true";

		for (int i = 0; i < sz; i++)
		{
			for (int j = i + 1; j < sz; j++)
			{
				if (arr[i] == arr[j])
				{
					isTrue = "false";
				}
			}
		}
		cout << isTrue;
	
}