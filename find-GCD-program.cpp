#include <iostream>

using namespace std;
int main(){

    int x, y, z , result=1;

    cin >> x;
    cin >> y;
    cin >> z;

    bool isItInRangeX = 20 <= x && x <= 300;
    bool isItInRangeY = 20 <= y && y <= 300;
    bool isItInRangeZ = 20 <= z && z <= 300;

    if (isItInRangeX && isItInRangeY && isItInRangeZ){

        int maxI = max(x, max(y, z));
        
        for (int i = maxI; i > 1; i--){
           
           if(x % i == 0 && y % i == 0 && z % i == 0){
            result = i;
            break;
           }
        }
        
        cout << result;
    }else{
        cout << "Invalid input data!";
    }
    
}