class Solution {
public:
    int hIndex(vector<int>& citations) {
        int result=0;
        sort(citations.begin(),citations.end());
        for(int i = citations.size()-1;i >= 0 ; i-- ){
            if(citations[i] > result){
                result++;
            }
            else{
                break;
            }
        }
        return result;
    }
};