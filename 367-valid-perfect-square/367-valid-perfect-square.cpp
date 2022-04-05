class Solution {
public:
    bool isPerfectSquare(int num) {
        long long high=num;
        long long low=0;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            if(mid*mid>num)
            {
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return high*high==num;;
    }
};