#include<stdio.h>
int main(void)
{
int a[100],n,c,temp,i;
scanf("%d",&n);
for(i=0;i<n;i++)
sacnf("%d",&a[i]);
for(i=0;i<n;i++)
{
  if(a[i]>0 &&  a[i]>n)
  {
  temp=a[i];
  a[i]=a[temp];
  a[temp]=temp;
  }
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
