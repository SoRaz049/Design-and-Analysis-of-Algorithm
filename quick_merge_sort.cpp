#include<iostream>
using namespace std;

int counter =0;

void Sorted_array(int A[], int n)
{
    cout << "The sorted array is:" << endl;

    for (int i = 0; i < n; i++)
        cout << "|"<< A[i];

    cout<<"|";
    cout << endl;
}

int Quick_Partition(int A[], int l, int r)
{
    int pivot = A[r], i = l-1;
    int j;

    for(j=l; j<r; j++)
    {
        if(A[j]<pivot)
        {
            i++;
            swap(A[i],A[j]);
        }

    }

    swap(A[i+1],r);
    return i+1;
}

int Quick_Sort(int A[], int l, int r)
{
    int p;
    if(l <= r)
    {
        counter++;
        p = Quick_Partition(A,l,r);
        Quick_Sort(A, l, p-1);
        Quick_Sort(A, p+1, r);
    }
    return counter;
}



int main()
{
    int A[]={4,5,6,8,3,1};
    int n = 6;
    int c;
    c = Quick_Sort(A,0 , n-1);
    Sorted_array(A,n);
    cout<<c;
}
