#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int lines;
    cin >> lines;
    while(lines--){
        int letters;
        cin >> letters;
        int a = 0; int b = 0;
        bool first = 1;
        for(int i = 0; i < letters; i++){
            char s;
            cin >> s;
            if(s == 'B'){
                if(first){
                    a = i; b = i;
                    first = 0;
                } else{
                    b = i;
                }
            }
        }
        cout << b - a + 1 << "\n";
    }
}
