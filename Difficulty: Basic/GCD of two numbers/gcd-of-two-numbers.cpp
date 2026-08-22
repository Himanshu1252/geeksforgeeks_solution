#include<math.h>
class Solution {
  public:
    int gcd(int a, int b) {
        // code herea
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
