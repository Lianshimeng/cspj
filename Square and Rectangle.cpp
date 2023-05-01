#include <iostream>
using namespace std;

int main(){
    long long x;
    long long a,b;
    cin >> x;
    cin >> a >> b;
    long long c = (a+b)*2;
    long long s = x*x;
    if(c > s){
        cout << "RECTANGLE";
    }
    else if(c == s){
        cout << "SAME";
    }
    else{
        cout << "SQUARE";
    }
}