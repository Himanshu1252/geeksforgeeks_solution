class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int sumArr = 0;
        int sumNum = 0;
        for(int i=0;i<n;i++){
            sumArr += arr[i];
        }
        for(int i=1;i<=n+1;i++){
            sumNum += i;
        }
        return sumNum-sumArr;
    }
};