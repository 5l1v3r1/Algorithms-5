//Merge Sort C program
#include<stdio.h>
#include<math.h>

void mergesort(int [], int , int);
void merge(int [], int, int, int);
void insert(int [], int);
void display(int [], int);

void main()
{
int a[10], n;
printf("\nEnter the Size of Array(<=10)");
scanf("%d", &n);
insert(a, n);
mergesort(a, 0, n-1);
display(a, n);
}

void mergesort(int a[], int p, int r)
{ int q;
if(p<r)
    {
    q=floor((p+r)/2);
    mergesort(a, p, q);
    mergesort(a, q+1, r);
    merge(a, p, q, r);
    }
return;
}

void merge(int a[], int p, int q, int r)
{int i, j, k, n1, n2;
n1=q-p+1;
n2=r-q;
int L[n1], R[n2];
for(i=0;i<n1;i++)
L[i]=a[p+i];
for(j=0;j<n2;j++)
R[j] = a[q+j+1]; 
i=0;
j=0;
k=p;
while(i<n1 && j<n2)
{
    if(L[i]<=R[j])
        {
        a[k]=L[i];
        i++;
        k++;
        }
    else
        {
        a[k]=R[j];
        j++;
        k++;
        }
}
while(i<n1)
{
a[k]=L[i];
i++;
k++;
}

while(j<n2)
{
a[k]=R[j];
j++;
k++;
}
}


void insert(int a[], int n)
{ int i;
if(n<=10)
    {
    printf("\nEnter the elements of Array: ");
    for(i=0;i<n;i++)
        {
        printf("\nA[%d]: ", i+1);
        scanf("%d", &a[i]);
        }
    }
else
printf("\nWrong Input!");
return;
}

void display(int a[], int n)
{
int i;
printf("\n");
for(i=0;i<n;i++)
    {
    printf(" A[%d]: %d", i+1, a[i]);
    }
return;
}
