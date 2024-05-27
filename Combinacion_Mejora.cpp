#include<bits/stdc++.h>
using namespace std;


int factorial(int n){
    if (n==0) return 1;
    else return n * factorial (n-1);
}

long Simplificacion(int start, int finish)
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
    cout<<(Simplificacion(n, ((n-r)+1))/factorial(r))<<"\n";
    return 0;
}
