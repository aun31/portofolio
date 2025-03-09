#include <iostream>

using namespace std;

int main()
{
    int no_kat1, no_kat2;
    char no_kat;
    string nama_bar, harga_bar;

    cout<<"selamat datang ke toko kami"<<endl;
    cout<<"1. elektronik\t\t2. fashion"<<endl;
    cout<<"pilih nomer :";
    cin>>no_kat;

    switch (no_kat){
    case '1':
        cout<<"1.handphone\t3.komputer"<<endl;
        cout<<"2.kamera"<<endl;
        cout<<"pilih nomer :";
        cin>> no_kat1;

        if (no_kat1==1){
            cout<<"nama barang : ";
            cin.get();
            getline(cin,nama_bar);
            cout<<"harga : ";
            getline(cin,harga_bar);
            cout<<"anda akan menjual "<<nama_bar<<" dengan harga Rp "<<harga_bar<<" masuk di kategori elektronik di bagian handphone"<<endl;
        }else if (no_kat1==2){
            cout<<"nama barang : ";
            cin.get();
            getline(cin,nama_bar);
            cout<<"harga : ";
            getline(cin,harga_bar);
            cout<<"anda akan menjual "<<nama_bar<<" dengan harga Rp "<<harga_bar<<" masuk di kategori elektronik di bagian kamera"<<endl;
        }else if (no_kat1==3){
            cout<<"nama barang : ";
            cin.get();
            getline(cin,nama_bar);
            cout<<"harga : ";
            cin>>harga_bar;
            cout<<"anda akan menjual "<<nama_bar<<" dengan harga Rp "<<harga_bar<<" masuk dikategori elektronik di bagian komputer"<<endl;
        }else {
            cout<<"anda salah memasukkan nomor"<<endl;
        }

        break;
    case '2':
        cout<<"1.pria       3.anak"<<endl;
        cout<<"2.wanita     4.aksesoris"<<endl;
        cout<<"pilih nomer :";
        cin>>no_kat2;

        if (no_kat2==1){
            cout<<"nama barang : ";
            cin.get();
            getline(cin,nama_bar);
            cout<<"harga : ";
            getline(cin,harga_bar);
            cout<<"anda akan menjual "<<nama_bar<<" dengan harga Rp "<<harga_bar<<" masuk di kategori fashion di bagian fashion pria"<<endl;
        }else if (no_kat2==2){
            cout<<"nama barang : ";
            cin.get();
            getline(cin,nama_bar);
            cout<<"harga : ";
            getline(cin,harga_bar);
            cout<<"anda akan menjual "<<nama_bar<<" dengan harga Rp "<<harga_bar<<" masuk di kategori fashion di bagian fashion wanita"<<endl;
        }else if (no_kat2==3){
            cout<<"nama barang : ";
            cin.get();
            getline(cin,nama_bar);
            cout<<"harga : ";
            cin>>harga_bar;
            cout<<"anda akan menjual "<<nama_bar<<" dengan harga Rp "<<harga_bar<<" masuk dikategori fashion di bagian fashion anak anak"<<endl;
        }else if (no_kat2==4){
            cout<<"nama barang : ";
            cin.get();
            getline(cin,nama_bar);
            cout<<"harga : ";
            cin>>harga_bar;
            cout<<"anda akan menjual "<<nama_bar<<" dengan harga Rp "<<harga_bar<<" masuk dikategori fashion di bagian aksesoris"<<endl;
        }else {
            cout<<"anda salah memasukkan nomor"<<endl;
        }

        break;
    default:
        cout<<"maaf, tidak ada yang cocok"<<endl;
    }
    return 0;
}
