#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 1000000007;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

int binsearch(vector<int>& nums,int start,int end,int find){
    while(start<=end){
        int mid = (start+end)/2;
        if(nums[mid]==find){
            return mid;
        }
        else if(nums[mid]>find){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
 

int main()
{
    fast_cin();
    ll t;
    t=1;
    for(int it=1;it<=t;it++) {
        //get input
        v32 v = {0,0,0,1,1};
        int end = 1;
        while(v[end]!=1){
            end*=2;
        }

        int initial = binsearch(v,0,end,1);
        while(binsearch(v,0,initial-1,1)!=-1){
            initial = binsearch(v,0,initial-1,1);
        }
        cout<<initial<<endl;
    }
    return 0;
}