class Solution {
  public:
    int countDigits(int n) {
        int count = 0;
        while(n!=0){
            int last =  n%10;
            count++;
            n = n/10;
        }
        return count;
    }
};