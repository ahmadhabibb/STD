#include <iostream>
#include <string>
#include "MOD2.h"

using namespace std;

int main() {
    List L;
    address x;
    infotype bil;

    createList(L);
    int i =1;
    while (i <= 5) {
        cout << "Masukan Bilangan = ";
        cin >> bil;
        x = alokasi(bil);
        i++;
    }
    printInfo(L);


//    List L;
//    address P = NULL;
//    createList(L);
//
//    while (true) {
//        insertFirst(L, alokasi(5));
//        deleteFirst(L, P);
//    }
//    cout << "Hello world!" << endl;
//    int b;
//    b = 5;
//    alokasi(b);
//
//    //printInfo(b);
//
//    insertFirst(30);
//    insertFirst(1);
//    printInfo();
//    int i;
//    i = 0;
//    List a;
//    while (i <= 10) {
//        cout << "Masukan Angka = " << endl;
//        cin >> createList(a);
//        i++;
//    }

    return 0;
}
