class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        findSum(0, target, candidates, ds, result);
        return result;
    }

    void findSum(int i, int target, vector<int>& candidates, vector<int>& ds,vector<vector<int>>& result) {

        if (target == 0) {
            result.push_back(ds);
            return;
        }

        for (int ind = i; ind < candidates.size(); ind++) {
            if (i < ind && candidates[ind] == candidates[ind - 1]) continue;
            if (candidates[ind] > target) break;
            ds.push_back(candidates[ind]);
            findSum(ind + 1, target - candidates[ind], candidates, ds,result); // take
            ds.pop_back();
        }
    }
};