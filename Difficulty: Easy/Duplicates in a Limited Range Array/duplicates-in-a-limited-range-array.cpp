class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> freq(arr.size()+1,0);
        vector<int> extraElement;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]>1){
                extraElement.push_back(i);
            }
        }
        return extraElement;
    }
};