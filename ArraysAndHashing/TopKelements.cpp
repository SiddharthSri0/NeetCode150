class Solution {
public:
    unordered_map < int , int > mpp;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        for(int i= 0 ; i < nums.size(); i ++){
            mpp[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto & p : mpp){
            pq.push({p.second, p.first});
        }
        vector<int> result;
        for(int i = 0; i < k; i++) {
        result.push_back(pq.top().second);  // number is second
        pq.pop();
        }
        return result;
    }
};
