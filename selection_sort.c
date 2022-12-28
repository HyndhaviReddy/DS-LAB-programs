/* selection sort */
#include<stdio.h>
void selection_sort(int a[],int n)
{
	int i,j,temp,min;
	for(i=0;i<n;i++)
	{  min = i;
	  for(j=i+1;j=n;j++)
         { if(a[j]>a[min])
	     { temp = a[i];
	       a[i] = a[min];
	       a[min] = temp;
	      }
	  }
	 }
}
int main()
{ int a[20],n,i;
  printf("\n enter a number : ");
  scanf("%d",&n);
  printf("\n enter an array element : ");
  for(i=0;i<n;i++)
  { scanf("%d",&a[i]);
  }
 printf("\n before sorting");
 for( i=0;i<n;i++)
 { printf("%d",a[i]);
 }
selection_sort(a,n);
 printf("\n after sorting  ");
 for(i=0;i<n;i++)
  { printf("%d",a[i]);
  }
 }
