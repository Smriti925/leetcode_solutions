class Solution {
public:
    bool isPerfectSquare(int num) {
        int result=sqrt(num);
        if(num==result*result)
            return true;
        else
            return false;
    }
};