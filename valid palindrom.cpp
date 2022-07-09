bool valid(char c)
{
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>=0&&c<=9))
       {
           return true;
       }
       return false;
}
bool checkPalindrome(string s)
{
    
    string str="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]-'A'+'a';
        }
        if(valid(s[i]))
        {
            str.push_back(s[i]);
        }
    }   
    int start=0;
    int end=str.size()-1;
    int cnt=0;
    while(start<end)
    {
       
        if(s[start++]==s[end--])
        {
            cnt++;
        }
     
    }
    if(cnt==str.size()/2)
    {
        return true;
    }
    return false;
}
