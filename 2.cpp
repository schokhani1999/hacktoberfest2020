#include <bits/stdc++.h>
using namespace std;
int comp(int a[],int b[])
{
  int al=0,bo=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]>b[i])
      al++;
    else if (b[i]>a[i])
      bo++;
    cout<<al<<" "<<bo;
  }
}
int main()
{
  int a[3],b[3];
  for (int i=0;i<3;i++)
    cin>>a[i];
  for (int i=0;i<3;i++)
    cin>>b[i];
  comp(a,b);
  return 0;
}
