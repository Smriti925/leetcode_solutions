class Solution {
public:
//     int countBits(int n){
//     int count = 0;
//     while (n){
//         count += n & 1;
//         n >>= 1;
//     }
//     return count;}

//     vector<int> sortByBits(vector<int>& arr) {
//         sort(arr.begin(),arr.end());
//         unordered_map<int,int> m;
//         vector<int> v;
//         int n=arr.size();
//         for(int i=0;i<arr.size();i++){
//             int count=countBits(arr[i]);
//             m[arr[i]]=count;
//         }
//         int mini=INT_MAX;
//         int maxi=INT_MIN;
//         for(auto it:m){
//             mini=min(mini,it.second);
//             maxi=max(maxi,it.second);
//             cout<<it.first<<" " <<it.second<<endl;
//         }
//         cout<<mini<<" "<<maxi<<endl;
        
//         v.push_back(100);
//         return v;
//     }
    int hammingWeight(int n)
{
    int sum = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        sum++;
    }
    return sum;
}
vector<int> sortByBits(vector<int> &arr)
{
    map<int, multiset<int>> m;
    for (auto x : arr)
    {
        int val = hammingWeight(x);
        m[val].insert(x);
    }
    vector<int> res;
    for (auto y : m)
    {
        for (int z : y.second)
        {
            res.push_back(z);
        }
    }
    return res;
}
};