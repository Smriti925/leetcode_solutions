 class Solution {
        public:
            int longestCommonSubsequence(string text1, string text2)
{
    int ans = 0;

    int l1 = text1.size();
    int l2 = text2.size();

    vector<vector<int>> mat(l1 + 1, vector<int>(l2 + 1, 0));

    for (int i = 0; i <= l1; i++)
    {
        mat[i][0] = 0;
    }
    for (int j = 0; j <= l2; j++)
    {
        mat[0][j] = 0;
    }

    for (int i = 1; i <= l1; i++)
    {
        for (int j = 1; j <= l2; j++)
        {
            if (text1[i - 1] == text2[j - 1])
            { // matched
                mat[i][j] = mat[i - 1][j - 1] + 1;
            }
            else
            {
                mat[i][j] = max(mat[i - 1][j], mat[i][j - 1]);
            }

            ans = max(mat[i][j], ans);
            
            //matrix check
            ans=mat[i][j];
            cout<<ans;
            }
            cout<<endl;
    }

    return ans;

            }
        };