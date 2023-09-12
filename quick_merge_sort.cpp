#include <iostream>
using namespace std;

void Sorted_array(int A[], int n)
{
    cout << "The sorted array is:" << endl;

    for (int i = 0; i < n; i++)
        cout << "|" << A[i];

    cout << "|" << endl;
}

int Quick_Partition(int A[], int l, int r)
{
    int pivot = A[r];
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (A[j] < pivot)
        {
            i++;
            swap(A[i], A[j]);
        }
    }

    swap(A[i + 1], A[r]);
    return i + 1;
}

void Quick_Sort(int A[], int l, int r)
{
    if (l < r)
    {
        int p = Quick_Partition(A, l, r);
        Quick_Sort(A, l, p - 1);
        Quick_Sort(A, p + 1, r);
    }
}

int main()
{
    int A[20], num;
    cout << "Enter the number of elements: ";
    cin >> num;

    if (num <= 0 || num > 20)
    {
        cout << "Invalid input. Please enter a valid number of elements (1-20)." << endl;
        return 1;
    }

    for (int i = 0; i < num; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> A[i];
    }
    cout << endl;

    Quick_Sort(A, 0, num - 1);
    Sorted_array(A, num);

    return 0;
}
