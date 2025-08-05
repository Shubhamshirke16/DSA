#include <iostream>
using namespace std;

void reverseString(string &s,int i,int j)
{
  if(i>=j)
  {
    return ;
  }
  swap(s[i],s[j]);

  reverseString(s,i+1,j-1);
  
}
int main() 
{
    string s="rbedcw";
    reverseString(s,0,5);
    cout<<s;
    return 0;
}
