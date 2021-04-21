#ifndef PENULIS_H_INCLUDED
#define PENULIS_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
#define first(L) (L).first
#define last(L)  (L).last
#define next(P)  (P)->next
#define prev(P)  (P)->prev
#define info(P)  (P)->info

typedef struct Penulis *addressPenulis;
typedef struct Novel *addressNovel;

struct listPenulis{
    addressPenulis first,last;
};
struct listNovel{
    addressNovel first,last;
};

struct infotypePenulis{
    int id,sumNovel;
    listNovel nameNovel;
    string name,tempat;
};
struct infotypeNovel{
    int id,sumPenulis;
    string name,tahun,terbit;
};
struct Penulis{
    infotypePenulis info;
    addressPenulis next,prev;
};
struct Novel{
    infotypeNovel info;
    addressNovel next,prev;
};

//Inisialisasi
void createList_Penulis(listPenulis &L);
void createList_Novel(listNovel &L);
addressPenulis createPenulis(int id,string name,string Tempat);
addressNovel createNovel(int id,string name,string tahun,string terbit);

//Create
void addPenulis(listPenulis &L,addressPenulis P);
void addNovel(listNovel &L,addressNovel P);

// search
addressNovel searchNovel(listNovel L,string name);
addressPenulis searchPenulis(listPenulis L,string name);

//Main Project
void HubunganPenulisNovel(listPenulis &L1,listNovel &L2,string namePenulis,string nameNovel);
/*
void deleteHubungan(listPenulis &L1, listN &L2, string namePasien);
void deleteDokter(listDokter &L1,listPasien &L2,string nameDokter);
void deleteAddressPasien(listPasien &L,addressPasien &P);
void deletePasien(listPasien &L,string namePasien);
*/
//Print
void printNovel(addressNovel P);
void printPenulis(addressPenulis P);
void printNovelALL(listNovel L);
void printPenulisALL(listPenulis L);
/*
void printAllOnlyDokter(listDokter L);
void printDokterAndPasien(addressDokter P);
void printPasienAndDokter(listDokter L,listPasien LP,string Pasien);
void showGoodDokter(listDokter L);
void showIllPasien(listPasien L);
*/
#endif // PENULIS_H_INCLUDED
