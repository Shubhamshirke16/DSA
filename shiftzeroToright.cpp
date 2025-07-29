To shift all zeros to the right of array


#include <iostream>
using namespace std;
#include<vector>

vector<int> shiftzeroToright(vector<int> &v)
{
  int pos=0;
  for(int i=0;i<v.size();i++)
    {
      if(v[i]!=0)
      {
        v[pos]=v[i];
        pos++;
      }
    }
  while(pos<v.size())
  {
    v[pos]=0;
    pos++;
  }
  return v;
}

int main() 
{
    vector <int> v={0,1,2,0,4,0,5};
    vector <int> ans;
    ans=shiftzeroToright(v);
    for(int i=0;i<v.size();i++)
    {
      cout<<v[i];
    }
    return 0;
}
