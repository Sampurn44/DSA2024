class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        vector<int> vect(n);
        
       for(int i=0;i<n;i++){
           int j=(i+k)%n;
           vect[j]=nums[i];
       }
       nums=vect;}
};