#include<stdio.h>

int main()
{
  int a[5]={1,2,3,4,5};
  int b[5]={1,2,3,4,5};
  
  for(int i=0;i<5;i++)
  {
    int c[i]=a[i]+b[i];
  }
  return 0;
}

//This code works fine
