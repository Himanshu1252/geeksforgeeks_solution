class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
    int revNum = 0;
    while(n != 0){
        int last = n%10;
        revNum = (revNum*10)+last;
        n /= 10;
    }
    return revNum;
    }
};