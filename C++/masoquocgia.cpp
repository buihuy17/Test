#define ll long long
#include <bits/stdc++.h>
using namespace std;

int count(long long a);
int check(int m, int A[]);

int check(int m, int A[])
{
    for (int i = 1; i < m - 1; i++)
    {
        if (A[i - 1] == 0)
            if (A[i] == 8)
                if (A[i + 1] == 4)
                    return i;
    }
    return 0;
}

int count(long long a)
{
    int m = 0;
    while (a)
    {
        a /= 10;
        m++;
    }
    return m;
}

int main()
{
    int n;
    cin >> n;
    int A[18];
    for (; n; n--)
    {
        long long a;
        cin >> a;
        int m = count(a);
        for (int i = m - 1; i >= 0; i--)
        {
            A[i] = a % 10;
            a /= 10;
        }
        int i = check(m, A);
        if (i)
        {
            for (int p = 0; p < i - 1; p++)
                cout << A[p];
            for (int p = i + 2; p < m; p++)
                cout << A[p];
        }
        cout << endl;
    }
}