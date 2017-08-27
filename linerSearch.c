//Linear Search C program
#include<stdio.h>
void insert(int [],int );
void display(int [],int );
int linearsearch(int [], int, int, int);

void main()
{
int a[10], n, result, target;
result = 0;
printf("\nEnter the Size of Array(<=10)");
scanf("%d", &n);
insert(a, n);
printf("\nEnter the element to be seached: ");
scanf("%d", &target);
result = linearsearch(a, 0, n-1, target);
display(a, result);
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

int linearsearch(int a[], int p, int r, int target)
{
if(p<=r)
    {
    if(a[p]==target)
      {  return p;}
    else{
        linearsearch(a, p+1, r, target);}
  }
}
void display(int a[], int result)
{
if(result==-0)
{ printf("\nElement Not found!!"); }
else{
printf("\nElement found at %d index", result);
}
return;    
}
