#include <iostream>
#include "MOD2.h"

using namespace std;

void createList(List &L) {
    first(L) = NULL;
}
address alokasi(infotype angka) {
    address P = new elmlist;
    //next(P) = NULL;
    info(P) = angka;
    return P;
}
void printInfo(List &L) {
    address P = first(L);
    while(P){
        cout << info(P) << "( " << P <<" )," << endl;
        P = next(P);
    }
}
void insertFirst(List &L, address &P) {
    //next(P) = first(L);
    //first(L) = P;
    //P = next(P);
    if(first(L) != NULL) {
        next(P) = first(L);
    }
    else {
        first(L) = P;
    }
}
void deleteFirst(List &L, address &P) {
    if (first(L) != NULL) {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}
