class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int index=0;
        for(int i=0;i<n;i++)
        {
            if(word[i]==ch)
                {index=i;
                break;}
        }
        if(index==0)
            return word;
        
        for(int j=0;j<=index/2;j++)
        {
            int temp=word[j];
            word[j]=word[index-j];
            word[index-j]=temp;
        }
        return word;
    }
};