#include <iostream>
using namespace std;

int nrestoM(int n,int m){
    if (n==0)
    {
      return 1;
    }
    if(m==0)
    {
      return 1;
    }
    
    return n*nrestoM(n,m-1);
}

int main() 
{
    int n=0,m=0,res;
    res=nrestoM(n,m);
    cout<<res;
    return 0;
}
