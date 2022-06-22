#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
        std::cin>>a[i];

    int start=0;
    int end=n-1;
    while (start!=end)
    {
        std::swap(a[start],a[end]);
        start++;
        end--;
    }
    for (int j = 0; j < n; j++)
        std::cout<<a[j]<<" ";
    
    return 0;
}
/*
test case 1:
5
4 5 7 6 9
test case 2:
10
1 4 6 9 12 15 18 51 100 120
test case 3:
7
5 78 34 18 38 87 7
*/


