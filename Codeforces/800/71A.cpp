#include <iostream>
using namespace std;

int main() {
string x;
int n;
cin>>n;
    while(n--) {
        cin>>x;
        if(x.size() > 10) {
            cout<<x[0] << x.size() - 2 << x.back() << endl;
        }
        
        else cout<<x<<endl;
    }
}