#include<bits/stdc++.h>
using namespace std;

long permutacion(int start, int finish)
{
    long f = start;
    start--;
    while(start >= finish)
    {
        f *= start;
        start--;
    }
    return f;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, r;
    cin>>n>>r;
    cout<<permutacion(n, ((n-r)+1))<<"\n";
    return 0;
}
