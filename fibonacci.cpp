#include <iostream>

using namespace std;

int main()
{
    int x, f1= 0,f2= 1, berikutnya = 0;
    cout << "masukkan batas deret fibonacci: ";
    cin >> x;
        cout <<endl;
    cout << "deret fibonacci: ";


        for (int i =1; i <= x; i++) {
           if (i == 1) {
            cout << " " << f1 << " ";
            continue;
           }
           if (i == 2) {
            cout << f2 << " ";
            continue;
           }
           berikutnya = f1 + f2;
           f1 = f2;
           f2 = berikutnya;
           cout << berikutnya << " " << endl;
        }
    return 0;
}
