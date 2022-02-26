class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        int X=0;
        for(int i=0;i<operations.size();i++)
        {  
            if(operations[i]=="--X"|| operations[i]=="X--")
                ans--;
            else
                ans++;
        }return ans;
    }
};
//Solution 2
// class Solution {
// public:
//     int finalValueAfterOperations(vector<string>& operations) {
//         int ans=0;
//         for(auto it:operations)
//         {   if(it=="--X"|| it=="X--")
//                 ans--;
//             else
//                 ans++;
//         }return ans;
//     }
// };
