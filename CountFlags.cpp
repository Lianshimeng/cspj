#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 8; i <= n; i += 1){
        if(i % 10 == 8){
            cout << i * 5 << endl;
        }
    }
}