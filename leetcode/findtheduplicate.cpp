// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//      int n=nums.size();
//      vector<int>arr(n);
//      for(int i=0;i<n;i++){
//          arr[nums[i]]++;
//      }   
     
//      for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//      }   
//      cout<<endl;
     
//      for(int i=0;i<n;i++){
//          if(arr[i]>1){
//              return i;
//          }
//      }   
//      return 0;
//     }
// };
//Approach 1 external memory use krke Frequency Array banad di




// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int ans=-1;
//         for(int i=0;i<nums.size();i++){
//             int index= abs(nums[i]);
//             if(nums[index]<0){return index;}
//             else {nums[index]=nums[index]*-1;}
//         }
//     return ans;
//     }
// };
//Approach 2 without using external memory



//class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//      while(nums[0]!=nums[nums[0]]){
//          swap(nums[0],nums[nums[0]]);
//      }   
//      return nums[0];
//     }
// };
//Approach 3 comparing with their index values