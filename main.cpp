#include <iostream>
using namespace std;

    int main() {
int n=0,x=1,y=1,z=0;
cin >> n;
        if (n>=2){
            cout << x << endl;
            cout << y << endl;
            for (int i=2;i<n;i++){
                z=x+y;
                x=y;
                y=z;
                cout << z << endl;
            }


    }else {
        cout << "errore" << endl;
}
        return 0;
    }
