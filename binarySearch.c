#include<stdio.h>
#include<math.h>
int partition(int [], int , int);
void quicksort(int [], int , int);
int binarysearch(int [], int, int, int);
void display(int [], int);
void main()
{int A[20], n,target, i, result=0;
A: printf("\nEnter The size of Array(max 20): ");
scanf("%d", &n);
if(n<=20)
    {
    printf("\nEnter the Elements Of array: ");
    for(i=0;i<n;i++)
        {
        printf("\nA[%d] : ", i+1);
        scanf("%d", &A[i]);
        }
    quicksort(A,0,n-1);
    printf("\nEnter the element to be searched: ");
    scanf("%d", &target);
    result = binarysearch(A,0,n-1,target);
    display(A, result);
      }   
else
    {
    printf("\nWrong Input!");   
    goto A;
    }
}


void quicksort(int A[], int p, int r)
{
int q;
if(p<r)
    {
    q = partition(A, p, r);
    quicksort(A, p, q-1);
    quicksort(A, q+1, r);
    }   
}

int partition(int A[], int p, int r)
{
int x, i , j, temp;
x= A[r];
i=p-1;
for(j=p;j<=r-1;j++)
    {
    if(A[j]<= x)
        {
        i=i+1;
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        }
   }
temp = A[i+1];
A[i+1] = A[r];
A[r] = temp;
return i+1;
}

int binarysearch(int a[], int l, int r, int target)
{
if(l<=r)
    {int m;
    m = floor((l+r)/2);
    if(a[m]==target)
        return m;
    if(a[m]>target)
        binarysearch(a, l, m-1, target);
    if(a[m]<target)
        binarysearch(a, m+1, r, target);
    }
}

void display(int a[],int result)
{
if(result==0)
    printf("\nElement not found!");
else
{
printf("\nElement found at index: %d", result);
}
return;
}
