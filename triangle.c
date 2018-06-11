Question:practice Name: Coupon System

#include<stdio.h>
int main()
{
int t,j;
scanf("%d",&t);
for(j=0;j<t;j++)
{
int n,x,g;
scanf("%d",&n);
int a[n][3];
for(x=0;x<n;x++)
{
 for(g=0;g<3;g++)
  {
   scanf("%d",&a[x][g]);
  }
}
int i;
for(i=0;i<3;i++)
{
int p[3],b[n];
p[i]=0;
for(x=0;x<n;x++)
{
  if(a[x][1]==i+1)
{
    b[p[i]]=a[x][2];
  
  p[i]++;
}
}
  int z=b[0];
 for(g=0;g<p[i];g++)
{
  if(b[g]>z)
   {
     z=b[g];
   }

}
printf("%d",z);

int g,d[p[i]],h=0;
for(g=0;g<n;g++)
{
 if(a[g][2]==z&&a[g][1]==i+1)
  {
     d[h]=a[g][0];

     h++;
  }
}
int u=d[0];
for(g=0;g<h;g++)
{
  if(d[g]<u)
{
  u=d[g];
}
}
printf(" %d\n",u);
}
}
return 0;
}
 
