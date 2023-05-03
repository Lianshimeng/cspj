#include <iostream>
using namespace std;

int main(){
    int a1,b1;
    int a2,b2;
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a1 >> b1;
        cin >> a2 >> b2;
        if(a1 == a2){
            if (b1 > b2 || b1 == b2){
                cout << "Yes" << " " << b1 - b2 << endl;
            }
            else{
                cout << "No" << " " << b2 - b1 << endl;
            }
        }
        else{
            if(a1 > a2){
                cout << "Yes" << " " << (a1-a2)*60-b2+b1 << endl;
            }
            else{
                cout << "No" << " " << (a2-a1)*60+b2-b1 << endl;
            }
        }
    }
}