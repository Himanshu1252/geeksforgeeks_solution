class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int i = 0,j = arr.size()-1;
        while(i<=j){
            int mid = i+(j-i) / 2;
            if(arr[mid]==k){
                return true;
            }
            else if(arr[mid]>k){
                j = mid-1;
            }
            else{
                i = mid+1;
            }
        }
        return false;
    }
};