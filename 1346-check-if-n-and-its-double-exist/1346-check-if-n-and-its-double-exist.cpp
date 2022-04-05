class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        bool res=false;
        int n=arr.size();
        float a;
        float b;
        for(int i=0;i<n;i++)
            {for(int j=i+1;j<n;j++)
            {
                 a=arr[i];
                 b=arr[j];
                if(a/2==b || a*2==b)
                {
                    res=true;
                    break;
                }
                
            }}
        return res;
    }
};