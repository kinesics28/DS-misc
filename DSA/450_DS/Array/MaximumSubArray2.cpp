/* time complexity is n^2 */

#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int iota = 0; iota < n; iota++)
        cin >> a[iota];
    int sum = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=a[j];
            max = maximum(max, sum);
        }
    }

    cout << "Maximum sum of the array given is " << max;

    return 0;
}
/*
5
1 2 3 -2 5
*/