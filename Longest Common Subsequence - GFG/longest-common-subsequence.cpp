//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        vector<vector<int>> v(x+1,vector<int>(y+1,0));
        int ans=0;
        for(int i=0;i<=x;i++){
            v[i][0]=0;
        }
        for(int j=0;j<=y;j++){
            v[0][j]=0;
        }
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(s1[i-1]==s2[j-1]){
                    v[i][j]=v[i-1][j-1]+1;
                }else{
                    v[i][j]=max(v[i-1][j],v[i][j-1]);
                }
                 ans=v[i][j];
            }
           
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends