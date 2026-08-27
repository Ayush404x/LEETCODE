class Solution {
public:
   int  gcd(int odd,int even)
    {
        int a = odd;
        int b = even;
        while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
        }
        return a;
    }

    int gcdOfOddEvenSums(int n) {
        int odd  = n*n;
        int even  = n *(n+1);
        return gcd(odd , even);

    
    }
};