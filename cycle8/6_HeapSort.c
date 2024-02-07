#include <stdio.h>

void heapify(int A[],int n,int i)
{
    int L,R,largest;
    L=2*i+1;     
    R=2*i+2;     // Left and Right child indices
    largest=i;   // Initialize largest as root
    // Check if left child is valid and larger
    if(L<n && A[L]>A[largest])
    {
        largest=L;
    }
    // Check if right child is valid and larger
    if(R<n && A[R]>A[largest])
    {
        largest=R;
    }
    // Swap and recursively heapify if needed
    if(largest!=i)
    {
        int temp=A[i];
        A[i]=A[largest];
        A[largest]=temp;
        heapify(A,n,largest);
    }
}

void BuildMaxHeap(int A[],int n)
{
    int i;
    // Start from last non-leaf node and go up
    for(i=(n/2)-1;i>=0;i--)
    {
        heapify(A,n,i);
    }
}

void HeapSort(int A[],int n)
{
    int i;
    BuildMaxHeap(A,n);
    // Swap root with last element and heapify
    for(i=n-1;i>0;i--)
    {
        int temp1=A[0];
        A[0]=A[i];
        A[i]=temp1;
        heapify(A,i,0);    // Heapify reduced array
    }
}

void main()
{
    int A[20],i=0,num;
    printf("How many numbers?");
    scanf("%d",&num);
    printf("Enter the numbers to be sorted: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&A[i]);
    }
   // heapify(A,num,i);
    //BuildMaxHeap(A,num);
    HeapSort(A,num);
   
    printf("Sorted numbers: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
