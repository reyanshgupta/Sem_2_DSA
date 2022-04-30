#include <bits/stdc++.h>
using namespace std;
int creativeSort(vector<int>&a, int lo, int hi){
    if(lo+1 == hi)
    return 1;
    int mid = (lo+hi)/2;
    int leftlen = creativeSort(a, lo, mid);
    int rightlen = creativeSort(a, mid, hi);
    int len = hi - lo;
    if(leftlen == rightlen && leftlen == len/2 && a[mid-1] <= a[mid])
        return len;
    return max(leftlen, rightlen);
}

void solve(){
        int n, i=0;
        cout << "Enter size of array: ";
        cin >> n;
        vector<int>a(n);
        for(i; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> a[i];
        }
        cout << creativeSort(a, 0, n) << endl;
}

int main(){
    solve();
    return 0;
}
