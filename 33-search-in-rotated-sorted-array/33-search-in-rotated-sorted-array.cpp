class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=-1;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        
        // for(int i=0 ; i<nums.size() ; i++)
        // {
        //     if(m.find(target) != m.end())
        //     {
        //         ans = m[target];
        //     }
        // }
        
         for(auto it=m.find(target);it!=m.end();it++){
                ans=it->second; 
        break;
            }
    return ans;
    }
};