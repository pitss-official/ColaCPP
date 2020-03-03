//
// Created by Pawan Dubey on 08-02-2020.
// version 0.1.2
//
#include "bits/stdc++.h"
#include <ctime>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define CS clock_t t;t = clock();
#define CE t = clock() - t;double time_taken = ((double)t)/CLOCKS_PER_SEC;std::cout<<time_taken<<"sec"<<endl;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long double ld;
typedef uint_fast64_t fll;
#define rep(i,n) for(ll i=0;i<n;i++)
#define reprev(i,n) for(ll i=n-1;i>=0;i--)
#define repn(n) for(ll i=0;i<n;i++)
#define repbet(i,start,end) for(ll i=start;i<end;i++)
#define repcond(i,start,end) for(ll i=start;end;i++)
#define tostr to_string
typedef vector<int> vI;
typedef vector<long long> vll;
typedef vector<uint32_t>vui;
typedef vector<int>vi;
typedef vector<set<uint32_t >> vsui;
typedef vector<set<int32_t >> vsi;
typedef unsigned int uint;
typedef vector<bool> vb;
typedef vector<vector<int>> mat2dI;
typedef vector<vector<uint32_t >> mat2d_ui;
typedef vector<vector<long long>> mat2dLL;
#define endl "\n"
#define nl "\n"
//#define $$(type,name,args,statements) type name(args){statements}
#define CIN(N,arr) rep(i,N)cin>>arr[i];
#define print(arr) for(ll i=0;i<arr.size();i++)cout<<arr[i]<<" ";cout<<"\n";
#define printN(arr,size) cout<<"[ ";for(ll i=0;i<size;i++){cout<<arr[i]<<", ";}cout<<"]\n";
#define printLinearAssoc(arr,size) cout<<"{ ";for(ll i=0;i<size;i++){cout<<nl<<i<<": "<<arr[i]<<", ";}cout<<nl<<"}\n";
#define _(str) cout<<str
#define _$ cout<<"\n";
//#define _$() cout<<"\n";
#define ___(arr) print(arr)
#define __(strnl) cout<<strnl<<"\n";
#define print2N(arr,n,m) cout<<"[\n";for(ll i=0;i<n;i++){cout<<i<<" : [ ";for(ll j=0;j<m;j++){cout<<arr[i][j]<<", ";}cout<<"]\n";}cout<<"]\n";
#define RUNTEST(FILENAME) std::ifstream in("/my_files/temp_projects/dsa_learn_final/4/test.txt");std::cin.rdbuf(in.rdbuf());
#define foreachCase uint32_t T;cin>>T;while(T--)
#define take(type,N) type N;cin>>N
#define $$(type,N) type N;cin>>N
#define $vll(arr) take(ll,N) ;vll arr(N); rep(i,N)cin>>arr[i];
#define program int main()
#define cmain(statements) int main(){CS{statements}CE return 0;}
#define compute(statements) int main(){CS{statements}CE return 0;}
#define prepare(statements) int main(){RUNTEST(T);CS{statements}CE return 0;}
#define ccode_compute(statements) int main(){CS{statements}CE return 0;}
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#define is ==
#define id ===
#define ___sum(arr) ll sum=0; rep(i,arr.size())sum+=arr[i];
#define $(condition,true_statements,false_statements) if(condition){true_statements}else{false_statements}
