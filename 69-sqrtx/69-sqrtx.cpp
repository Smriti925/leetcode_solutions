class Solution {
public:
    int mySqrt(int x) {
        int i=1;
        while(x>0)
        {
            x=x-(2*i+1);
            i++;
        }return i-1;
    }
};