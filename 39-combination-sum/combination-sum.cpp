class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ds;
        findSum(0,candidates,target,ds,result);
        return result;
    }

public:
    void findSum(int i ,vector<int> &candidates,int target, vector<int> &ds , vector<vector<int>> &result){
        

        if(i == candidates.size()){
            if(target == 0){
                result.push_back(ds);
            }
            return;
        }

        if(target >= candidates[i]){
            ds.push_back(candidates[i]);
            findSum(i,candidates,target - candidates[i],ds,result);
            ds.pop_back();
        }

        findSum(i+1,candidates,target,ds,result);
    }
};