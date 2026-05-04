class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        for(auto x : nums)
            mp[x]++;
        vector <int> v;
        for(auto &p : mp){
            v.push_back({p.first});
        }
        int max = 1;
        int freq =1;
        for(int i =0 ; i <(int)v.size()-1; i ++){
            if(v[i+1]-v[i]==1){
                freq++;
            }
            else{
                freq=1;
            }
            max = std::max(max,freq);
        }
        if(v.size()==0){
            return 0;
        }
        return max;
    }
};
