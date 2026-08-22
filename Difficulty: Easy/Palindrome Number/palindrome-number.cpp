class Solution {
  public:
    bool isPalindrome(int n) {
        // code here
        int rev = 0;
        int demo = n;
        while(n != 0){
            int lastDigit = n%10;
            rev = (rev*10) + lastDigit;
            n /= 10;
        }
        if(demo==rev){
            return true;
        }
        else{
            return false;
        }
    }
};