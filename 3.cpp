#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int diagdiff(int n,int a[n][])
{
  int diff,s1=0,s2=0,j;
  for(int i=0; i<n;i++)
    s1=s1+a[i][i];
  for(int i=0; i<n;i++)
  {
    j=n-1-i;
    s2=s2+a[i][j];
  }
  diff=abs(s1-s2);
  return(diff);
}
void main()
{
  int n,**ptr;
  cin>>n;
  int i,j,diff;
  for(i=0;i<n;i++)
    ptr[i]=new int[n]
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      cin>>ptr[i][j];
  diff=diagdiff(a,n);
  cout<<diff;
}
