
 #include<stdio.h>
#include<stdlib.h>

struct Array
{
  int *A;
  int size;
  int length;
};

void display(struct Array arr)
{
    int i =0;
    for(i=0;i<arr.size;i++)
        printf("%d element is %d\n",i+1,arr.A[i]);
}

int main()
{
int i=0,n;
struct Array arr;

printf("enter the size of the array :");
scanf("%d",&arr.size);

arr.A = malloc(arr.size * sizeof(int));
if (arr.A == NULL)
  return 1;

arr.length =0;

printf("enter the number of numbers :");
scanf("%d",&n);

if (n < 0 || n > arr.size)
{
  free(arr.A);
  return 1;
}

printf("enter all the elements:");
 for(i=0;i<n;i++)
    { 
       scanf("%d",&arr.A[i]);
    }
arr.length = n;
display(arr);

free(arr.A);
 return 0;
}
 