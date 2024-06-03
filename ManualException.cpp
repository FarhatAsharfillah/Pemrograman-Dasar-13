#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "selamat belajar di prodi ti UMY" << endl;
        //throw 0.5; //melemparkan sebuah interger maka
        cout << "pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        /*jika selain interger maka block ini akan dieksekusi*/
        cout << "default pengecualian dieksekusi" << endl;
    }

    return 0;
}