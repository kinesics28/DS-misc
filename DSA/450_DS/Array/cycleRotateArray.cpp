#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int iota = 0; iota < n; iota++)
        cin>>a[iota];
    int temp=a[n-1];
    for (int i = n - 1; i > 0; i--)
    {
        swap(a[i],a[i-1]);
    }
    a[0]=temp;

    for (int print = 0; print < n; print++)
        cout<<a[print]<<" ";
    
    return 0;
}
