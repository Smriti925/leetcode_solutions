//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


int findmax(long long arr[], int n){
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }return ans;
}

int findmin(long long arr[], int n){
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<ans){
            ans=arr[i];
        }
    }return ans;
}


pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> p;
    p.second= findmax(a,n);
    p.first= findmin(a,n);
    return p;
}