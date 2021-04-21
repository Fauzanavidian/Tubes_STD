#include "penulis.h"
using namespace std;

int idP,idN;

void inisialisi(listPenulis &LP,listNovel &LN){
    int idP = 0;
    int idN = 0;
    createList_Penulis(LP);
    createList_Novel(LN);

}

int masukanPilihan(){
    cout<<"Masukkan Pilihan Anda : ";
    int pil;
    cin>>pil;
    cin.ignore();
    cout<<endl;
    return pil;
}

/*
int Tambahmenu(listPenulis &LP, listNovel &LN){
    cout<<"=========== Menu Input Data ==========="<<endl;
    cout<<" 1. Tambahkan Penulis"<<endl;
    cout<<" 2. Tambahkan Novel"<<endl;
    cout<<" 3. Tambahkan Hubungan Penulis dan Novel"<<endl;
    cout<<" 4. Menu Utama"<<endl;
    int pil = masukanPilihan();
    string name,tempat;
    switch (pil){
    case 1:
        cout<<"Nama Penulis : ";
        getline(cin,name);
        cout<<"Tempat  : ";
        getline(cin,tempat);
        /*
        if(searchDokter(LD,name) == NULL)
            addDokter(LD,createDokter(++idD,name,stat));
        else
            cout<<"Penulis Berhasil Terdaftar"<<endl;
        break;

    case 2:
        cout<<"Nama Pasien : ";
        getline(cin,name);
        cout<<"Status : ";
        getline(cin,stat);
        if(searchPasien(LP,name) == NULL)
            addPasien(LP,createPasien(++idP,name,stat));
        else
            cout<<"Pasien Telah terdaftar"<<endl;
        break;
    case 3:
        cout<<"Nama Dokter : ";
        getline(cin,name);
        cout<<"Nama Pasien : ";
        getline(cin,stat);
        relationshipDokterPasien(LD,LP,name,stat);
        break;
    }
    return pil;
}
int cariData(listDokter LD,listPasien LP){
    cout<<"=========== Menu Cari Data ==========="<<endl;
    cout<<" 1. Cari Dokter"<<endl;
    cout<<" 2. Cari Pasien"<<endl;
    cout<<" 3. Menu Utama"<<endl;
    int pil = masukanPilihan();
    string name;
    addressDokter D;
    switch (pil){
    case 1:
        cout<<"Nama Dokter : ";
        getline(cin,name);
        D = searchDokter(LD,name);
        if(D != NULL)
            printDokter(D);
        else
            cout<<"Tidak Ada"<<endl;
        break;
    case 2:
        cout<<"Nama Pasien : ";
        getline(cin,name);
        addressPasien P = searchPasien(LP,name);
        if(P != NULL)
            printPasien(P);
        else
            cout<<"Tidak Ada"<<endl;
        break;
    }
    return pil;
}

int Hapusdata(listDokter &LD, listPasien &LP){
    cout<<"=========== Menu Hapus Data ==========="<<endl;
    cout<<" 1. Hapus Pasien"<<endl;
    cout<<" 2. Hapus Dokter"<<endl;
    cout<<" 3. Hapus Hubungan Pasien dan Dokter"<<endl;
    cout<<" 4. Menu Utama"<<endl;
    int pil = masukanPilihan();
    string name;
    switch (pil){
    case 1:
        cout<<"Nama Pasien : ";
        getline(cin,name);
        deleteRelationship(LD,LP,name);
        deletePasien(LP,name);
        break;
    case 2:
        cout<<"Nama Dokter : ";
        getline(cin,name);
        deleteDokter(LD,LP,name);
        break;
    case 3:
        cout<<"Nama Pasien : ";
        getline(cin,name);
        deleteRelationship(LD,LP,name);
        break;
    }
    return pil;
}

int Tampilandata(listPenulis LP, listNovel LN){
    cout<<"=========== Menu Tampilkan Data ==========="<<endl;
    cout<<" 1. Tampilan Dokter Terbaik"<<endl;
    cout<<" 2. Tampilan Pasien Terbanyak dokternya"<<endl;
    cout<<" 3. Tampilkan Semua Pasien"<<endl;
    cout<<" 4. Tampilkan Semua Dokter"<<endl;
    cout<<" 5. Tampilkan Semua Dokter dan Pasien"<<endl;
    cout<<" 6. Tampilkan Pasien dan Dokternya"<<endl;
    cout<<" 7. Menu Utama"<<endl;
    int pil = masukanPilihan();
    switch (pil){
    case 1:
        showGoodDokter(LD);
        break;
    case 2:
        showIllPasien(LP);
        break;
    case 3:
        printAllPasien(LP);
        break;
    case 4:
        printAllOnlyDokter(LD);
        break;
    case 5:
        printAllDokterPasien(LD);
        break;
    case 6:
        string name;
        cout<<"Masukan Nama Pasien : ";
        getline(cin,name);
        printPasienAndDokter(LD,LP,name);
        break;
    }
    return pil;
}
*/


int main(){
    listPenulis LP;
    listNovel LN;
    int pil;
    inisialisi(LP,LN);
    do{
        cout<<"**************************************************"<<endl;
        cout<<"||   SELAMAT DATANG DI APLIKASI PENULIS NOVEL   ||"<<endl;
        cout<<"**************************************************"<<endl;
        cout<<""<<endl;
        cout<<"===================== MENU ======================="<<endl;
        cout<<" || 1. Tambah Data Penulis                      ||"<<endl;
        cout<<" || 2. Tambah Data Novel                        ||"<<endl;
        cout<<" || 3. Relasi Antar Penulis dan Novel           ||"<<endl;
        cout<<" || 4. Hapus Data Penulis Tertentu              ||"<<endl;
        cout<<" || 5. Hapus Data Novel Tertentu                ||"<<endl;
        cout<<" || 6. View Data Penulis beserta Novel          ||"<<endl;
        cout<<" || 7. View Data Novel dengan Dua Penulis       ||"<<endl;
        cout<<" || 8. View Data Penulis Dengan Novel Terbanyak ||"<<endl;
        cout<<" || 9. View Data Penulis Non-Kolaborasi         ||"<<endl;
        cout<<" || 0. Exit                                     ||"<<endl;
        cout<<"=================================================="<<endl;
        cout<< endl;
        cout<<"(Silahkan Pilih Menu Antara 1-9)"<<endl;
        cout<<endl;
        cout<<" Input Pilihan : ";
        string name1,name,tempat,tahun,terbit;
        int id;
        pil = masukanPilihan();
        switch (pil){
        case 1:
            cout<<"=============== Tambah Data Penulis ================ "<<endl;
            cout<<"Nama Penulis : ";
            getline(cin,name);
            cout<<"Tempat  : ";
            getline(cin,tempat);
            if(searchPenulis(LP,name) == NULL)
                addPenulis(LP,createPenulis(++idP,name,tempat));
            else
                cout<<endl;
                cout<<endl;
                cout<<"|| PENULIS BERHASIL TERDAFTAR ||"<<endl;
                cout<<endl;
                cout<<endl;
                break;
        case 2:
            cout<<"=============== Tambah Data Novel ================ "<<endl;
            cout<<"Judul Novel : ";
            getline(cin,name);
            cout<<"Tahun Terbit : ";
            getline(cin,tahun);
            cout<<"Penerbit : ";
            getline(cin,terbit);
            if(searchNovel(LN,name) == NULL)
                addNovel(LN,createNovel(++idP,name,tahun,terbit));
            else
               cout<<endl;
               cout<<endl;
               cout<<"|| NOVEL BERHASIL TERDAFTAR ||"<<endl;
               cout<<endl;
               cout<<endl;
            break;
        case 3:
            cout<<"=============== Tambah Relasi Penulis Novel ================ "<<endl;
            cout<<"Nama Penulis : ";
            getline(cin,name);
            cout<<"Judul Novel : ";
            getline(cin,name1);
            HubunganPenulisNovel(LP,LN,name,name1);
            break;

        case 4:
           cout<<endl;
           cout<<"|| TAMPILAN DATA PENULIS ||"<<endl;
           cout<<endl;
           printPenulisALL(LP);
           cout<<endl;
           break;

        case 5:
            cout<<endl;
            cout<<"|| TAMPILAN DATA NOVEL ||"<<endl;
            cout<<endl;
            printNovelALL(LN);
            cout<<endl;
            break;


        case 0:
             cout<<endl;
             cout<<endl;
             cout<<"=============================="<<endl;
             cout<<"||       TERIMA KASIH       ||"<<endl;
             cout<<"=============================="<<endl;
             cout<<endl;
             cout<<endl;
             break;
        /*
        case 3:
            while(Hapusdata(LD,LP) != 4);
            break;
        case 4:
            while(Tampilandata(LD,LP) != 7);
            break;
        */

        }
    }while(pil != 0);

    return 0;
}
