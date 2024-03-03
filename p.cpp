#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) arr.begin(), arr.end()

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        vector<pair<int,int>> heap;
        fori(0,n) cin >> arr[i];
        int max = *max_element(bend(arr));
        heap.push_back(pair<int,int>(arr[max], max));
        while(!heap.empty()){
            pop_heap(bend(arr));
            pair<int,int> top = heap[heap.size()-1];
            heap.pop_back();
            int left = top.second-1;
            int right = top.second+1;
            if(left >= 0){
                heap.push_back(pair<int,int>(arr[left], left));
                push_heap(bend(heap));
            }
            if(right < n-1){
                heap.push_back(pair<int,int>(arr[right], right));
                push_heap(bend(heap));
            }
        }
    }
}
