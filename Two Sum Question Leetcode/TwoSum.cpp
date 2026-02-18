class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        vector<int> arr;

      

        for(int i=0;i<nums.size();i++){
            int res = target - nums[i];
            if(hash.find(res) != hash.end()){
               arr.push_back(hash[res]);
                arr.push_back(i);
                return arr;
              
            }else{
                  hash[nums[i]] = i;
                
            }
        }

        return arr;
    }
};