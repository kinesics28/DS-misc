#include<iostream>

using namespace std;

int main()
{
    int n;  // size of array
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) // numbers in array
        cin>>a[i];
    int negative=0;
    int positive=n-1;

    while (negative<positive)
    {
        if(a[positive]<0)
        {
            swap(a[negative],a[positive]);
            negative++;
        }
        else
        {
            positive--;
        }
    }
    for (int j = 0; j < n; j++)
        cout<<a[j]<<" ";
    return 0;
}
