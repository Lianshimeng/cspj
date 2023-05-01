#include <iostream>
using namespace std;

int main(){
    int x;
    int maxn = 1,minn = 100,sum = 0;
    for(int i = 1; i <= 10; i++){
        cin >> x;
        if(x > maxn){
            maxn = x;
        }
        if(x < minn){
            minn = x;
        }
        sum += x;
    }
    cout << maxn << "," << minn << "," << sum/10.0;
}