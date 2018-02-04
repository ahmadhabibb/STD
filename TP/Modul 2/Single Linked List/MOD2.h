#ifndef MOD2_H_INCLUDED
#define MOD2_H_INCLUDED

#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);
address alokasi(infotype angka);
address delokasi(int a);
void printInfo(List &L);
void insertFirst(List &L, address &P);
void deleteFirst(List &L, address &P);

#endif // MOD2_H_INCLUDED
