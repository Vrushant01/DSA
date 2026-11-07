class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        findComb(0,ds,nums,result);
        return result;
    }

    void findComb(int i,vector<int> &ds,vector<int> &nums,vector<vector<int>> &result){
        if(i == nums.size()){
            result.push_back(ds);
            return;
        }

        ds.push_back(nums[i]);
        findComb(i+1,ds,nums,result);
        ds.pop_back();

        while(i+1 < nums.size() && nums[i] == nums[i+1]){
            i++;
        }
        findComb(i+1,ds,nums,result);
        

    }
};