//Code: Palindrome Check Using Recursion
#include <iostream>
using namespace std;

bool Ispalindrome(string s,int i,int j)
{
  if(i>=j)
  {
    return true;
  }
  
  if(s[i]!=s[j]) return false;

  return Ispalindrome(s,i+1,j-1);
}

int main() 
{
    string s="madam";
    bool ans=Ispalindrome(s,0,4);
    cout<<ans;
    return 0;
}
