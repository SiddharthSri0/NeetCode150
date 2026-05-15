class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string , vector<string > > mpp;
       for(auto s : strs ) {
         string sortedString = s; 
         sort(sortedString.begin() , sortedString.end() ) ;
         mpp[sortedString].push_back(s) ; 
       }
      vector<vector<string> > v; 
      for(auto x : mpp) {
          v.push_back(x.second)  ; 
      }
      return v; 
    }
};
