class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int armstrong = 0;
        int demo = n;
        while(n != 0){
            int last = n%10;
            int cube = last*last*last;
            armstrong += cube;
            n /= 10;
        }
        if(demo == armstrong) return true;
        else return false;
    }
};