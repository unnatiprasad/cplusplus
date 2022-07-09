class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map <char,int> mp;
        for(int i=0;i<str.size();i++)
        {
            mp[str[i]]++;
        }
        int mx=INT_MIN;
        char ans;
        for(auto it:mp)
        {
            if(it.second>mx)
            {
                mx=it.second;
                ans=it.first;
            }
        }
        
        return ans;
    }

};
