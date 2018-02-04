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

    return 0;
}
