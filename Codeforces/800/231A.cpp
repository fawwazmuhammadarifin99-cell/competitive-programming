#include <iostream>
using namespace std;

int main () {
    int soal;
    int hasil;
    hasil = 0;
    cin>>soal;
    while(soal--) {
        int a, b, c;
        cin>>a>>b>>c;
        if (a+b+c>=2) hasil++;
        }
    cout<<hasil;
        
}