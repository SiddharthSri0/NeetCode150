class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int , int > mpp; 
        for(auto x : nums){
            mpp[x]++;
        }

        pair <int , int > p ;

        priority_queue <pair <int,int>,
        vector < pair<int,int>>,
        greater< pair <int,int >>> minH;

        for(auto x : mpp){
            minH.push({x.second,x.first});
            if(minH.size() > k ){
                minH.pop();
            }
        }
        vector <int > v;
        while(!minH.empty()){
            v.push_back(minH.top().second);
            minH.pop();
        }
        return v;
    }
};