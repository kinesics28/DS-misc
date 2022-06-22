#include <iostream>
using namespace std;
void quickSort(int a[], int first, int last)
{
    int i, j, pivot;
    if (first < last && first != last)
    {
        i = first;
        j = last;
        pivot = first;
    }
    else
    {
        return;
    }
    while (i < j)
    {

        while (a[i] <= a[pivot] && i < last)
            i++;
        while (a[j] > a[pivot] && j > first)
            j--;
        if (i < j)
            swap(a[i], a[j]);
    }
    swap(a[pivot], a[j]);
    quickSort(a, first, j - 1);
    quickSort(a, j + 1, last);
}

int main()
{
    cout << "Array 1 ->"<<endl;
    int n;
    cin >> n;
    int arr1[n];
    for (int input = 0; input < n; input++) // input for 1st array
    {
        cin >> arr1[input];
    }
    quickSort(arr1, 0, n - 1);  // O(n logn)

    cout << "Array 2 ->"<<endl;
    int n1;
    cin >> n1;
    int arr2[n1];
    for (int input = 0; input < n1; input++) // input for 2st array
    {
        cin >> arr2[input];
    }
    quickSort(arr2, 0, n1 - 1); // O(n2 logn2)

    // for union of arrays
    int i = 0;
    int j = 0;
    cout<<"Union of both the arrays --> { ";
    while (i < n && j <n1 )
    {
        if(arr1[i]<arr2[j])
        {
           cout<<arr1[i]<<" "; 
           i++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;                // or we can write arr2[j++]  :)
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;j++;
        } 
    }
    // print remaining elements
    while (i<n)// either this will run
    {
        cout<<arr1[i++]<<" ";
    }
    while (j<n1)// or this will run
    {
        cout<<arr2[j++]<<" ";
    }
    cout<<"}"<<endl;
    
    // Intersection of arrays
    i = 0;
    j = 0;
    cout<<"Intersection of both the arrays --> { ";
    while (i<n && j<n1)
    {
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }    
    }
    cout<<"}"<<endl;
    return 0;
}

/*
test case
input:-
5
1 7 6 4 2
7
8 7 5 4 3 1 11

output:-
Union of both the arrays --> { 1 2 3 4 5 6 7 8 11 }  
Intersection of both the arrays --> { 1 4 7 }
*/