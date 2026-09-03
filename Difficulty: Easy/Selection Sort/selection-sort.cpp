class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<n-1;i++){
            // int min = arr[i];
            int minIndex = i;
            for(int j=i;j<n;j++){
                if(arr[j]<arr[minIndex]){
                    // arr[i]=arr[j];
                    minIndex = j;
                }
            }
            swap(arr[i],arr[minIndex]);
        }
    }
};