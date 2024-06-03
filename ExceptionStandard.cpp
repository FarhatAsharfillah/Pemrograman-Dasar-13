#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main()
    {
        cout << "awal program" << endl; //penanda 1:...
        try{
            array<int, 3> data = {8, 4, 2};
            //pesan array interger 3 elemen
            cout << data.at(5)<<endl;
        }
        catch(exception& e) {
            //penangkap menggunakan obyek exception
            cout << e.what() << endl;
            /*akan dieksekusi karena array data hanya memiliki 3 elemen*/
        }
        cout << "Baris program yang terakhir" << endl;
        /*penanda 2: bahwa program berjalan tanpa berhenti*/
    }