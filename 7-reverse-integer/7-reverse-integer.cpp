class Solution {
public:
 
    int reverse(int n) {
     
        
       long int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
        return (rev > INT_MAX || rev < INT_MIN) ? 0 : rev;
   
    }
    
};