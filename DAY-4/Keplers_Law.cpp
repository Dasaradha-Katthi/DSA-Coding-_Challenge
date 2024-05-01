// Update the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int t1, t2, r1, r2;
	    cin >> t1 >> t2 >> r1 >> r2;
	    
	    int c1=pow(t1,2) , c2=pow(r1,3);
	    
	    int c3=pow(t2,2) , c4=pow(r2,3);
	    
	    if(( pow(t1,2) / pow(r1,3) )  == (pow(t2,2) / pow(r2,3) ) ){
	        
	        cout<< "Yes" <<endl;
	    }
	    
	    else{
	        
	        cout<< "No" <<endl;
	    }
	 
	}
	
	
}	
