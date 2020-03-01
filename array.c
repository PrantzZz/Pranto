#include<stdio.h>
int main()
{

int n,count=0;
scanf("%d",&n);
int sum,i,a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
count++;
}
 printf("%d ",count);

return 0;
}
