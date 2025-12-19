#include <bits/stdc++.h>
using namespace std;

bool checkPangam(string &s)
{
    int n= s.size();
    if(n<26)
        return 0;
    vector<bool> alpha(26,0);
    for(int i=0; i<n; i++)
    {
        int index = s[i] - 'a';
        alpha[index] =1;
    }
    for(int i=0; i<26; i++)
    {
        if(alpha[i] == 0)
            return 0;
    }
    return 1;
}

int main()
{
    string s;
    cout<<"Enter string :"<<endl;
    getline(cin,s);
    
    if (checkPangam(s))
        cout << "The string is a Pangram" << endl;
    else
        cout << "The string is NOT a Pangram" << endl;
    
    return 0;
}
