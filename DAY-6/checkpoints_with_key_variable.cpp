#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int n1 = n;
  
   int m1 = 0;
   while(n1!=0)
   {
       int digi = n1%10;  // fetching last digit of n1 
       if(digi%2==0)
       {
           m1 = m1*10+digi; // adding last digit of n1 to m1
       }
       n1 /= 10;  // removing digit from n1 
   }
   cout<<m1<<"\n"; // printed the number removing odd digit.
   //cout<<"CheckPoint1\n";
   

   
   int sum = 0;
     n1=n;
   while(n1!= 0)
   {
       int digi = n1%10; // fetching last digit of n1 
       sum += digi;      // adding last digit of n1 to sum
       n1 /= 10;          // removing last digit of n1 
       //cout<<sum<<" "<<n1<<" sum and current number\n"; // analyzing the key variables.
   }
   cout<<sum<<"\n";
 // cout<<"Checkpoint2\n"; 
   // finding there is an error in checkpoint2.
  
    return 0;
}
