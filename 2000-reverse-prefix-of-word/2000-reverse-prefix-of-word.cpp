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
        
         reverse(word.begin(),word.begin()+index+1 );
        return word;
    }
};