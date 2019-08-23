#include<stdio.h>
#include<stdlib.h>

void getdata()
{
  printf("getdata"):
}
int binary(int a[100],int low,int high,int key)
{
  if(low<=high)
  {
    int mid;
    mid=(low+high)/2;
    if(a[mid]==key)
      return mid;
    else if(key>a[mid])
      return binary(a,mid+1,high,key);
    else
      return binary(a,low,mid-1,key);
  }
  else
    return -1;
}


int main(void)
{
  int n,a[100],k,pos,i;
  getdata();
  printf("\n enter the number of element ");
  scanf("%d",&n);
  printf("\n enter elements ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n enter key");
  scanf("%d",&k);
  pos=binary(a,0,n-1,k);
  if(pos==-1)
   printf("\n not found ");
  else
    printf("\n found at pos %d",pos);
  return 0;
}
