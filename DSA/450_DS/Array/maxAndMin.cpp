#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
        std::cin>>a[i];
    int min= 2147483640;
    int max= -2147483640;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    std::cout<<"Maximum element in array is "<<max<<std::endl;
    std::cout<<"Minimum element in array is "<<min<<std::endl;
    return 0;
}

/*
test case 1:
5
4 5 7 6 9
test case 2:
10
1 49 54 7 88 35 44 78 3 4
test case 3:
10
-24 -7 8 87 -96 54 32 74 24 7 
*/
