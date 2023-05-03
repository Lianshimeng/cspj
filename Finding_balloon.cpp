#include <iostream>
using namespace std;

int main(){
    int n,k,x;
    cin >> n >> k >> x;
    int nk = n - k + 1;
    if(x == nk){
        cout << n;
    }
    else if(x < nk){
        cout << n - nk + x;
    }
    else{
        cout << x - nk;
    }
}