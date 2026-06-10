class Solution {
public:
    int m1=0; 
    int m2 =0;
    vector<int>v;
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0 ; i < nums.size(); i++){
            m1=nums[i];
            for(int j=i+1 ; j<nums.size();j++){
              m2=nums[j];
              if(m1+m2==target){
                v.push_back(i);
                v.push_back(j);
              }  
            }
        }
        return v;
    }
};
