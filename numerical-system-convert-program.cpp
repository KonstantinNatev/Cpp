#include <iostream>

using namespace std;

int main(){

    int x, y;
    string ans = "";

    cin >> x;
    cin >> y;

    bool isItOne = 2 <= x && x <= 16;
    bool isItTwo = 1 <= y && y <= 100;


    int temp = abs(y);
    if (isItTwo && isItOne){

    while (temp != 0){

        char ch;
        
        int rem = temp % x;

        if (rem < 10) {
            ch = rem + 48;
        }else{
            ch = rem + 55;
        }
        
        ans += ch;
        temp /= x;
    }
    
    int i = 0, j = ans.size() - 1;

    while (i <= j){
        swap(ans[i], ans[j]);
        i++;
        j--;
    }

    cout << ans;

    }else{

        cout << "Invalid input data!";  

    }
   
}