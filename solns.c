/* Enter your solutions in this file */
#include <stdio.h>
float average(int z[], int n)
{
 int sum =0;
  for (int i=0;i<n;i++)
  {
    sum +=z[i];
  }
 float avg;
  avg = (float)sum/n;
  return avg;
}
int factors(int n, int r[])
{
  int p[] ={2,3,5,7,9,11,13,17,19};
  int sum =0 , j=0;
 for(int i=0;i<9;i++)
 {
     while(n%p[i] ==0)
  { r[j]=p[i];
  n=n/p[i];
   sum +=1;
   j++;
      
  }
     
 }
  return sum;
}
int max(int z[], int n)
{
  for(int i=0;i<=n;i++)
  {
    int sum=0;
    for(int j=0;j<=n;j++)
     {
       if(z[i]>=z[j])
       {
         sum +=1;
       }
      if(sum == n)
        return z[i];
    }
  }
}
 int min(int z[], int n)
{
  for(int i=0;i<=n;i++)
  {
    int sum=0;
    for(int j=0;j<n;j++)
     {
       if(z[i]<=z[j])
       {
         sum +=1;
       }
      if(sum == n)
        return z[i];
    }
  }
}
int mode(int z[], int n)
{
  int count[n], sum =0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(z[i]==z[j])
        count[i] +=1;
    }
  }
   for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(count[i]>=count[j])
        sum +=1;
      if(sum==n){
        return z[i];}
    }
   }
}
