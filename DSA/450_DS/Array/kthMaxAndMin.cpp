#include<iostream>

int main()
{
    int k;
    int n;
    std::cin>>n;
    int a[n];
    for (int inp = 0; inp < n; inp++)
        std::cin>>a[inp];
    std::cin>>k;
    int temp;
    for (int pass = 1; pass < n; pass++)
    {
        for (int i = 0; i < n-pass; i++)
        {
            if (a[i]>a[i+1])
            {
                std::swap(a[i],a[i+1]);
            }
        }
    }
    std::cout<<k<<"th largest number is "<<a[n-k-1]<<std::endl;
    std::cout<<k<<"th smallest number is "<<a[k]<<std::endl;
    return 0;
}
