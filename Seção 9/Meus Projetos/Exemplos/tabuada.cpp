#include <iostream>

using namespace std;

int main(){
    cout << "===========================================" << endl;
    cout << "                  TABUADA                  " << endl;
    cout << "===========================================" << endl;

    for(int i{1}; i <= 10 ; i++){
        for(int j{1} ; j <= 10 ; j++){
            cout << i << " X " << j << " = " << i*j << endl;
        }

        cout << "=============================" << endl;
    }
}