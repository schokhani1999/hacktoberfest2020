#include <bits/stdc++.h>

using namespace std;
void main()
{
    long int arr[5],i,j;
    for(i=0;i<5;i++)
    scanf('%ld',&arr[i]);
    for(i=0;i<4;i++)
      for(j=0;j<4-i;j++)
        if(arr[j]>arr[j+1])
          {
            long int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
  int  max=arr[1]+arr[2]+arr[4]+arr[3];
    printf("%ld ",max );
    max=arr[1]+arr[2]+arr[0]+arr[3];
    printf("%ld",max );
}
