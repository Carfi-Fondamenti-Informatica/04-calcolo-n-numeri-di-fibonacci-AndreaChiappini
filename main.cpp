#include <iostream>
using namespace std;

    int main() {
int n=0,x=1,y=1,z=0;
cin >> n;
        if (n>=2){
            cout << x << endl;
            cout << y << endl;
            for (int i=0;i<n-1;i++){
                int temp = x;
                y = temp;
                x += y;
                cout << y << endl;
            }


    }else {
        cout << "errore" << endl;
}
        return 0;
    }
