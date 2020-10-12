#include<stdio.h>
using namespace std;
int sum(int a[],n)
{
  int sum=0
  for(int i=0;i<n;i++)
    sum=sum+a[i];
  return(sum);
}
int main()
{
  int n;
  cout<<"Enter size of array";
  cin>>n;
  int a[n],sum;
  for(int i=0;i<n;i++)
    cin>>a[i];
  sum=sum(a,n);
  std::cout << sum << '\n';
  return 0;

}
