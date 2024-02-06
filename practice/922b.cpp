#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t; 
    while(t--){
        int l;
        cin >> l;
        int a[l];
        int b[l];
        for(int i = 0; i < 3; ++i){
            for(int j = 0, n; j < l; ++j){
                if(i == 0){
                    cin >> n;
                    cout << j + 1 << " ";
                    a[j] = n;
                } else if(i == 1){
                    cin >> n;
                    b[a[j]-1] = n;
                } else{
                    cout << b[j] << " ";
                }
            }
            if(i == 0 || i == 2){
                cout << "\n";
            }
        }
    }
}
