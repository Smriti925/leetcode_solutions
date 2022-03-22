class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low=0;
        long long high=num;
        long long mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(mid*mid>num)
                high= mid-1;
            else
                low= mid+1;
        }
        return high*high==num;
    }
};