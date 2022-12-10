#include <iostream>

using namespace std;

int main(){

    int x, y, z, reslut;
    bool flag = true;

    cin >> x;
    cin >> y;
    cin >> z;

    bool isItInRangeX = 10 <= x && x <= 100;
    bool isItInRangeY = 10 <= y && y <= 100;
    bool isItInRangeZ = 10 <= z && z <= 100;

    if (isItInRangeX && isItInRangeY && isItInRangeZ){

        int maxI = max(x, max(y, z));
        int counter = 1;

        while (flag){
            
            reslut = maxI * counter;

            if (reslut % x == 0 && reslut % y == 0 && reslut % z == 0){
                flag = false;
                break;
            }

            counter++;
        }
        
     cout << reslut;   
    }else{
        cout << "Invalid input data!";
    }
}
