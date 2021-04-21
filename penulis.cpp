#include"penulis.h"
//Inisialisasi
void createList_Penulis(listPenulis &L){
    first(L) = NULL;
    last(L) = NULL;
}
void createList_Novel(listNovel &L){
    first(L) = NULL;
    last(L) = NULL;
}
addressPenulis createPenulis(int id,string name,string tempat){
    addressPenulis P = new Penulis;
    info(P).name = name;
    info(P).id = id;
    info(P).tempat = tempat;
    info(P).sumNovel = 0;
    createList_Novel(info(P).nameNovel);
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}
addressNovel createNovel(int id,string name,string tahun,string terbit){
    addressNovel P = new Novel;
    info(P).name = name;
    info(P).id = id;
    info(P).tahun = tahun;
    info(P).terbit = terbit;
    info(P).sumPenulis = 0;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

//MAIN
void addPenulis(listPenulis &L,addressPenulis P){
    if(first(L) == NULL){
        first(L) = P;
        last(L) = P;

    }else{
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void addNovel(listNovel &L,addressNovel P){
    if(first(L) == NULL){
        first(L) = P;
        last(L) = P;
    }else{
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

addressPenulis searchPenulis(listPenulis L,string name){
    addressPenulis P = first(L);
    while(P != NULL && info(P).name != name)
        P = next(P);
    return P;
}
addressNovel searchNovel(listNovel L,string name){
    addressNovel P = first(L);
    while(P != NULL && info(P).name != name)
        P = next(P);
    return P;
}

void HubunganPenulisNovel(listPenulis &L1,listNovel &L2,string namePenulis,string nameNovel){
    addressPenulis P = searchPenulis(L1,namePenulis);
    addressNovel   Q = searchNovel(L2,nameNovel);
    if(P != NULL && Q != NULL){
        if(searchNovel(info(P).nameNovel,nameNovel) == NULL){
            addressNovel R = createNovel(info(Q).id,info(Q).name,info(Q).tahun,info(Q).terbit);
            addNovel(info(P).nameNovel,R);
            info(P).sumNovel++;
            info(Q).sumPenulis++;
        }else
            cout<<endl;
            cout<<endl;
            cout<<"|| RELASI BERHASIL ||"<<endl;
            cout<<endl;
            cout<<endl;
    }else{
        if(P == NULL)
            cout<<endl;
            cout<<endl;
            cout<<"|| PENULIS BELUM TERDAFTAR ||"<<endl;
            cout<<endl;
            cout<<endl;
        if(Q == NULL)
            cout<<endl;
            cout<<endl;
            cout<<"NOVEL BELUM TERDAFTAR"<<endl;
            cout<<endl;
            cout<<endl;
    }
}
/*
void deleteRelationship(listDokter &L1, listPasien &L2, string namePasien){
    addressPasien P = searchPasien(L2,namePasien);
    if(P != NULL){
        addressDokter D = first(L1);
        while(D != NULL){
            addressPasien tmp = searchPasien(info(D).namePasien,namePasien);
            if(tmp != NULL){
                info(D).sumPasien--;
                deleteAddressPasien(info(D).namePasien,tmp);
            }
            D = next(D);
        }
    }
    deleteAddressPasien(L2,P);
    delete P;
}
void deleteDokter(listDokter &L1,listPasien &L2,string nameDokter){
    addressDokter P = searchDokter(L1,nameDokter);
    if(P != NULL){
        while(info(P).sumPasien != 0){
            addressPasien Q = first(info(P).namePasien);
            Q = searchPasien(L2,info(Q).name);
            info(Q).sumDokter--;
            deletePasien(info(P).namePasien,info(Q).name);
            info(P).sumPasien--;
        }
        if(first(L1) == last(L1)){
            createListDokter(L1);
        }else if(P == first(L1)){
            first(L1) = next(P);
            prev(first(L1)) = NULL;
        }else if(P == last(L1)){
            last(L1) = prev(P);
            next(last(L1)) = NULL;
        }else{
            next(prev(P)) = next(P);
            prev(next(P)) = prev(P);
        }
        next(P) = NULL;
        prev(P) = NULL;
    }
    delete P;
}

//InADT
void deleteAddressPasien(listPasien &L,addressPasien &P){
    if(P != NULL){
        if(first(L) == last(L)){
            createListPasien(L);
        }else if(P == first(L)){
            first(L) = next(P);
            prev(first(L)) = NULL;
        }else if(P == last(L)){
            last(L) = prev(P);
            next(last(L)) = NULL;
        }else{
            next(prev(P)) = next(P);
            prev(next(P)) = prev(P);
        }
        next(P) = NULL;
        prev(P) = NULL;
    }
}
void deletePasien(listPasien &L,string namePasien){
    addressPasien P = searchPasien(L,namePasien);
    deleteAddressPasien(L,P);
    delete P;
}
*/
//Print
void printNovel(addressNovel P){
    cout<<"ID NOVEL       : "<<info(P).id<<endl;
    cout<<"JUDUL          : "<<info(P).name<<endl;
    cout<<"TAHUN          : "<<info(P).tahun<<endl;
    cout<<"PENERBIT       : "<<info(P).terbit<<endl;
    cout<<"Jumlah Penulis : "<<info(P).sumPenulis<<endl;
}
void printPenulis(addressPenulis P){
    cout<<"ID PENULIS    : "<<info(P).id<<endl;
    cout<<"NAMA PENULIS  : "<<info(P).name<<endl;
    cout<<"DOMISILI      : "<<info(P).tempat<<endl;
    cout<<"Jumlah Novel  : "<<info(P).sumNovel<<endl;
}

void printNovelALL(listNovel L){
    addressNovel P = first(L);

        while(P != NULL){
            printNovel(P);
            cout<<endl;
            P = next(P);
        }

}

void printPenulisALL(listPenulis L){
    addressPenulis P = first(L);

        while(P != NULL){
            printPenulis(P);
            cout<<endl;
            P = next(P);
        }
    }

/*
void printAllOnlyDokter(listDokter L){
    addressDokter P = first(L);
    while(P != NULL){
        printDokter(P);
        P = next(P);
    }
}
void printDokterAndPasien(addressDokter P){
    int i = 1;
    cout<<"Id Dokter    : "<<info(P).id<<endl;
    cout<<"Nama Dokter  : "<<info(P).name<<endl;
    cout<<"Specialized  : "<<info(P).special<<endl;
    addressPasien Q = first(info(P).namePasien);
    cout<<"Daftar Pasien : ";
    while(Q != NULL){
        cout<<i<<".  "<<info(Q).name;
        Q = next(Q);
        if(Q != NULL)
            cout<<endl<<"\t\t";
        i++;
    }
    cout<<endl<<endl;
}
void printPasienAndDokter(listDokter L,listPasien LP,string Pasien){
    if(searchPasien(LP,Pasien) != NULL){
        cout<<"Nama Pasien \t: "<<Pasien<<endl;
        cout<<"List Dokternya \t: ";
        addressDokter D = first(L);
        int i = 1;
        while(D != NULL){
            if(searchPasien(info(D).namePasien,Pasien) != NULL){
                cout<<i++<<".  "<<info(D).name;
            }
            D = next(D);
            if(D != NULL)
                cout<<endl<<"\t\t  ";
        }
        cout<<endl;
    }else
        cout<<"Pasien Tak ditemukan"<<endl;
}
void showGoodDokter(listDokter L){
    int maks = 0;
    addressDokter P = NULL;
    addressDokter Q = first(L);
    while(Q !=  NULL){
        if(info(Q).sumPasien > maks){
            maks = info(Q).sumPasien;
            P =Q;
        }
        Q = next(Q);
    }
    if(P != NULL)
        printDokter(P);
}
void showIllPasien(listPasien L){
    addressPasien P = first(L);
    while(P != NULL){
        if(info(P).sumDokter > 1)
            cout<<"Nama : "<<info(P).name<<"      Jumlah Dokter : "<<info(P).sumDokter<<endl;
        P = next(P);
    }
}
*/
