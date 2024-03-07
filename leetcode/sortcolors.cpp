
//SOLUTION 1
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//       sort(nums.begin(),nums.end());
//     }
// };

//SOLUTION 2
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//       int zero=0,one=0,two=0;
//       for(int i=0;i<nums.size();i++){
//           if(nums[i]==0){zero++;}
//           else if(nums[i]==1){one++;}
//           else{two++;}
//       }
//       for(int i=0;i<zero;i++){nums[i]=0;}
//       for(int i=zero;i<=zero+one-1;i++){nums[i]=1;}
//      for(int i=zero+one;i<=zero+one+two-1;i++){nums[i]=2;}
//     }
// };

//SOLUTION 3 TWO POINTERS APPROACH
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n=nums.size();
//         int left=0,right=n-1,i=0;
//         while(i<=right){
//             if(nums[i]==0){
//                 swap(nums[i],nums[left]);
//                 left++;
//                 i++;
//             }
//             else if(nums[i]==2){
//                 swap(nums[i],nums[right]);
//                 right--;
//             }
//             else if(nums[i]==1){
//                 i++;
//             }
//         }
//     }
// };