#include <iostream>
#include <string>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
 {
   int N, M;
   cin>>N>>M;
   
   if(N <= M){ cout<< N << endl;}
   
   else{ int p = N-M;
   
             p += N;
             
             cout<<p<<endl;
   }
   
  }
return 0;
}
