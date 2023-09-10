#include<iostream>
using namespace std;

int counter=0;

int Binary_Search(int A[], int l, int r, int key)
{
    int m;
    if(l<=r)
    {
        counter++;
        m = (l+r)/2;
        if(A[m] == key)
        {
            return m;
        }
        else if (A[m] > key)
            return Binary_Search(A,l,m-1,key);
        else
            return Binary_Search(A,m+1,r,key);
    }

    return -1;
}

int main()
{
    int A[50], i,num, key,check;

    cout<<"Enter the number of element: ";
    cin>>num;

    for(i=0;i<num;i++)
    {
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>A[i];
    }
    cout<<endl;

    cout<<"Enter the key to search: ";
    cin>>key;

    check = Binary_Search(A, 0, num-1, key);

    if(check != -1)
        cout<<"Element found at index "<<check<<"."<<endl;
    else
        cout<<"Element not found."<<endl;

    cout<<"The time complexity is: "<<counter<<"."<<endl;
}
