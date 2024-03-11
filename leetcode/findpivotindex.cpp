class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int n=nums.size();
     int lsum[n];
     int rsum[n];
     lsum[0]=0;
     rsum[n-1]=0;
     for(int i=1;i<n;i++){
         lsum[i]=lsum[i-1]+nums[i-1];
          cout<<lsum[i]<<" ";
     }   
     cout<<endl;
     for(int j=n-2;j>=0;j--){
         rsum[j]=rsum[j+1]+nums[j+1];
         cout<<rsum[j]<<" ";
     }
     cout<<endl;
     for(int i=0;i<n;i++){
     if(lsum[i]==rsum[i]){
         return i;
     }
     }
     return -1;
    }
};