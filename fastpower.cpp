//Fast power using recursion

#include <iostream>
using namespace std;

int powerCal(int n, int m)
{
  if(m==0)
  {
    return 1;
  }
  if(m==1)
  {
    return n;
  }
  int ans=powerCal(n,m/2);
  
  if(m%2==0)
  {
    return ans*ans;
  }
  else
  {
    return n*ans*ans;
  }
}

int main() 
{
    int n=3,m=5;
    int ans=powerCal(n,m);
    cout<<ans;
    return 0;
}
