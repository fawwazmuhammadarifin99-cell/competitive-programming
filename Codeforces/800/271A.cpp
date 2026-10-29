#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y;
    cin >> y;
    y ++;

    while (true) {
        string str = to_string(y);
        set<char> st;

        for (int i = 0; i < str.size(); i++) {
            st.insert(str[i]);
        }
        if (st.size() == 4) {
            break;
        } else {
            y++;
    }    
}
    cout << y;
    return 0;
}