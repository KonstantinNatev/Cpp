#include <string>
#include <iostream>
using namespace std;

//a=  c d f g
// b= c j k l g 


    
int main()
{
    int PowerSetA;
    cin >> PowerSetA;
    if (PowerSetA >=0 && PowerSetA <= 20)
     {
        int PowerSetB;
        cin >> PowerSetB;
        if (PowerSetB >= 0 && PowerSetB <= 20)
         {
            //string SetA;
            //cin >> SetA;

            string SetA;
            cin >> SetA;

    
            string SetB;
            cin >> SetB;

            int PowerSetC = 0;
            for (int i = 0; i < PowerSetA; i++)
            {
            bool isTrue = true;
                for (int j = 0; j < PowerSetB; j++)
                {
                    if (SetA[i] == SetB[j])
                    {
                        isTrue = false;
                        break;
                        
                    }
                }
                if (isTrue)
                {
                    PowerSetC++;
                }
            }

            for (int i = 0; i < PowerSetB; i++)
            {
                bool isTrue = true;
                for (int j = 0; j < PowerSetA; j++)
                {
                    if (SetB[i] == SetA[j])
                    {
                        isTrue = false;
                        break;

                    }
                }
                if (isTrue)
                {
                    PowerSetC++;
                }
            }
            
            cout << PowerSetC;
            
        }
    else
    {
        cout << "Invalid input data!";
    }
    }
    else
    {
        cout << "Invalid input data!";
    }
    
}
