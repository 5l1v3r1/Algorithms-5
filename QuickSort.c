//C program to implement quick sort

#include<stdio.h>

int partition(int [], int , int);
void quicksort(int [], int , int);

void main()
{
int A[20], n, i;
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
    printf("\n The Sorted Array is : ");
    for(i=0;i<n;i++)
        {
        printf("\nA[%d] : %d ", i+1, A[i]);
        }

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
