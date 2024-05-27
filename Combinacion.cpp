#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if (n==0) return 1;
    else return n * factorial (n-1);
}

double Combinacion(int n, int r){
    double comb;
    int aux;
    aux=n-r;
    comb= factorial(n)/(factorial(aux) * factorial(r)) ;
    return comb;
}


int main(){
    ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n, r;
	cin>>n>>r
    cout<< Combinacion(n,r)<<"\n";
    return 0;
}
