#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if (n==0) return 1;
    else return n * factorial (n-1);
}

double Permutacion (int n, int r){
    double perm;
    int aux;
    aux=n-r;
    perm= factorial(n)/factorial(aux);
    return perm;
}


int main(){
    ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n, r;
	cin>>n>>r
    cout<<Permutacion(n,r)<<"\n";
    return 0;
}
