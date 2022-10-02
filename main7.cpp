#include <iostream>

using namespace std;

int main()
{
    int jurusan;
    cout<< "==jurusan==\n1. Teknik Infomatika \n2. Sistem Informasi \n3. DKV"<< endl;
    cout<< "masukan jurusan anda : ";
    cin >> jurusan;
        if (jurusan ==1){
            cout << "jurusan anda adalah teknik informatika" << endl;
        }
    else if (jurusan == 2 ){
            cout << "itu bukan jurusan anda"<<endl;
    }
    else if (jurusan == 3 ){
        cout << "itu bukan jurusan anda" << endl;
    }
    return 0;
}
