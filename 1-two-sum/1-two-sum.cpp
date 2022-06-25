class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int a = target-nums[i]; // a+b = target
        // check whether target-nums[i] is present in hashmap ?
            
            
            if(mpp.find(a)!=mpp.end()){   
            // if the a is found in the hashmap then return the index of target-b and the current index of a
                ans.push_back(mpp[a]);
                ans.push_back(i);
               break;
            }
              // if a is not found int hashmap add it 
              // add key as nums[i] and value as i
            mpp[nums[i]] = i;
        }
        return ans;
    }
};