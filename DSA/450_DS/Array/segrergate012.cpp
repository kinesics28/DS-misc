#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
        std::cin>>a[i];

    int n0=0;
    int n2=n-1;
    int n1;
    while ( n0 < n2 )   // this to shift all 2s towards right
    {
        if(a[n0]==2)
        {
            std::swap(a[n0],a[n2]);
            n2--;
        }
        else{
            n0++;
        }
    }
    n0=0;
    n1=n2;
    
    while ( n0 < n1 )// this to shift all 1s towards right (before 2), leaving all the 0s to left
    {
        if(a[n0]==1)
        {
            std::swap(a[n0],a[n1]);
            n1--;
        }
        else{
            n0++;}
    }

    for (int j = 0; j < n; j++)
        std::cout<<a[j]<<" ";
    
    return 0;
}
