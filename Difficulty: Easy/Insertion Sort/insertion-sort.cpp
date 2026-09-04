class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            int curr = arr[i];
            for(int j=i-1;i>=0;j--){
                if(curr<arr[j]){
                    arr[j+1] = arr[j];
                    arr[j] = curr;
                }
                else{
                    break;
                }
            }
        }
        
    }
};