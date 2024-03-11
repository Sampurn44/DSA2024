class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int n = mat.size();
        int OneCount=INT_MIN;
        int rowMax=-1;

        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){count++;}
            }
            if(count>OneCount){OneCount=count;rowMax=i;}
        }
        ans.push_back(rowMax);
        ans.push_back(OneCount);
        return ans;
    }
};