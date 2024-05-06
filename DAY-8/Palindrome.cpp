class Solution {
public:
    bool isPalindrome(int x) {

        if (x<0)
           return false;
        
      long long p=x;
       long long rev=0;
       while(p != 0){
       int ld= p%10;
       rev= rev*10 +ld;
       p = p/10;
       }

       if (x==rev)
           return true;
        else
            return false;
    }

};
