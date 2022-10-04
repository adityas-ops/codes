class Solution {
public:
    vector<vector<int>> ans;
    void solver(int idx, vector<int>&ds,vector<int>arr, int n, int target){
        if(idx == n){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[idx] <= target){
            ds.push_back(arr[idx]);
            solver(idx,ds,arr,n,target-arr[idx]);
            ds.pop_back();
        }
        solver(idx+1, ds,arr,n,target);
      
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> ds;
        solver(0,ds,candidates, n, target);
        return ans;
        
    }
};