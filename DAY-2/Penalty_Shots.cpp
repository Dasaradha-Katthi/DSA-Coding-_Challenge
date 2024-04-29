


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
         int oddc = 0;
          int evenc = 0;
        int A[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < 10; i += 2) {
            
            if (A[i] == 1) {
                
                oddc++;
            }
            if (A[i + 1] == 1) {
                evenc++;
            }
        }
        
        if(oddc > evenc){
            
            cout << "1" <<endl;
            
        }
        else if(oddc < evenc){
            
            cout << "2"<<endl ;
        }
        else  {
            
            cout<< "0"<<endl ;
        }


    }
}
