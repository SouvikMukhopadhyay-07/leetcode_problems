class Solution {
public:
    vector<string> ans;
    void backtrack(int o,int c,string s,int n)
    {
        if(s.size()==2*n)
        {
            ans.push_back(s);
            return;
        }
        if(o<n)
        {
            s.push_back('(');
            backtrack(o+1,c,s,n);
            s.pop_back();
        }
        if(c<o)
        {
            s.push_back(')');
            backtrack(o,c+1,s,n);
            s.pop_back();
        }
    }
    vector<string>generateParenthesis(int n) {
        string s="";
        backtrack(0,0,s,n);
        return ans;
    }
};