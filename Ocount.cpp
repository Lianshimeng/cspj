#include <iostream>
using namespace std;

int main(){
    int y1,m1,d1;
    cin >> y1 >> m1 >> d1;

    int y2,m2,d2;
    cin >> y2 >> m2 >> d2;

    int a,b;
    if(d1 < d2){
        a = d1;
        b = d2;
    }
    else{
        b = d1;
        a = d2;
    }
    if(a % 2 != 0){
        a ++;
    }

    int sum = 0;
    for(int i = a; i <= b; i += 2){
        sum += i;
    }
    cout << sum;
}