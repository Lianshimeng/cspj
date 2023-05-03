#include <iostream>
using namespace std;

int main(){
    int max1 = 0;
    int max2 = 0;

    int n,x;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x > max1){
            max2 = max1;
            max1 = x;
        }
        else if(x > max2){
            max2 = x;
        }
    }
    cout << max1 << " " << max2;
}