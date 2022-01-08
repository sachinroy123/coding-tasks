#include<bits/stdc++.h>
using namespace std;

void reverseArray(int a[],int n)
{
    int start=0;
    int end=n-1;
   while(start<=end)
   {
       int temp = a[start];
       a[start] = a[end];
       a[end] = temp;
       start++;
       end--;
   }
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
   int a[] = {1,2,3,4,5,6};
   int n = sizeof(a)/sizeof(a[0]);
   reverseArray(a,n);
   display(a,n);
}