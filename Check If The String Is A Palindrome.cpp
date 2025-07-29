//Check If The String Is A Palindrome

#include <bits/stdc++.h> 

char convertLow(char ch)
{
    if(ch>='a' && ch<='z')
        return ch;
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool isAlphaNumeric(char ch) {
    // '0' to '9' or 'A' to 'Z' or 'a' to 'z'
    if ((ch >= '0' && ch <= '9') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z')) {
        return true;
    }
    return false;
}

bool checkPalindrome(string s)
{
    int st=0;
    int e=s.length()-1;

    while(st<=e)
    {
        while (st < e && !isAlphaNumeric(s[st])) st++;
        while (st < e && !isAlphaNumeric(s[e])) e--;

        char c1 = convertLow(s[st]);
        char c2 = convertLow(s[e]);

        if (c1 != c2) return false;

        st++;
        e--;

    }
    return true;
}
