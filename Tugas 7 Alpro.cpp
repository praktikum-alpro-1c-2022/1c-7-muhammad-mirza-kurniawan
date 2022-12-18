#include <iostream>
using namespace std;

void garis();            //prototipe fungsi garis()
void identitas();       //prototipe fungsi identitas()
void Matriks1();        //prototipe fungsi matriks1()
void Matriks2();        //prototipe fungsi matriks2()
void OutMatriks1();     //prototipe fungsi Outmatriks1()
void OutMatriks2();     //prototipe fungsi Outmatriks2()
void milih();           //prototipe fungsi milih()
void milih1();          //prototipe fungsi milih1()
void penjumlahan();      //prototipe fungsi penambahan()
void perkalian();       //prototipe fungsi perkalian()
void pemilihan_transpose(); //prototipe fungsi pemilihan_transpose()
void transpose1();          //prototipe fungsi transpose()


float a[10][10],b[10][10];
int hasiltambah[10][10];
int hasilkali[10][10];
int transpose[10][10];
float temp;
int baris, kolom;
int baris1, kolom1;
int baris2, kolom2;
int i, j, k;
int pilihan;
int pilihantranspose;
int jumlah;


int main(){
    garis();               //fungsi garis ()
    identitas();           //fungsi identitas ()
    garis();               //fungsi garis ()
    Matriks1();           //fungsi matriks1()
    Matriks2();           //fungsi matriks1()
    OutMatriks1();       //fungsi matriks1()
    OutMatriks2();       //fungsi matriks2()
    milih();             //fungsi milih()
    milih1();            //fungsi milih1()
    penjumlahan();       //fungsi penambahan()
    perkalian();         //fungsi perkalian()
    pemilihan_transpose();  //fungsi pemilihan_transpose()
    transpose1();        //fungsi transpose()

}

//fungsi garis ()
void garis(){
    for(int i=0;i<60;i++)
    cout<<'=';
    cout<<endl;
}

//fungsi identitas()
void identitas(){
cout<<"              Program C++ Kalkulator Matriks"<<endl;
}

//menyimpan elemen matriks
void Matriks1(){
    cout<<"Masukan Jumlah Baris Dari Matriks A : ";cin>>baris1;
    cout<<"Masukan Jumlah Kolom Dari Matriks A : ";cin>>kolom1;
    cout<<"Masukan Elemen Matriks : "<<endl;
    for(int i=0; i<baris1; ++i){
    for(int j=0; j<kolom1; ++j){
    cout<<"Masukan Elemen A "<<"["<<i + 1<<","<<j + 1<<"] : ";cin>>a[i][j];
    }
    }
}

void Matriks2(){
    cout<<endl;
    cout<<"Masukan Jumlah Baris Dari Matriks B : ";cin>>baris2;
    cout<<"Masukan Jumlah Kolom Dari Matriks B : ";cin>>kolom2;
    cout<<"Masukan Elemen Matriks : "<<endl;
    for(int i=0; i<baris2; ++i){
    for(int j=0; j<kolom2; ++j){
    cout<<"Masukan Elemen B"<<"["<<i + 1<<","<<j + 1<<"] : ";cin>>b[i][j];
    }
    }
}

//mengeluarkan isi matriks
void OutMatriks1(){
    cout<<endl;
    cout<<"Matriks A = "<<endl;
    for(int i=0; i<baris1; ++i){
    for(int j=0; j<kolom1; ++j){
    cout<<" "<< a[i][j];
    if (j == kolom1 - 1)
    cout << endl;
    }
    }
}

void OutMatriks2(){
    cout<<endl;
    cout<<"Matriks B = "<<endl;
    for(int i=0; i<baris2; ++i){
    for(int j=0; j<kolom2; ++j){
    cout<<" "<< b[i][j];
    if (j == kolom2 - 1)
    cout << endl;
    }
    }
}

//pemilihan
void milih(){
if(baris1 != kolom2 && baris1 != kolom1 && baris2 != kolom1 && baris2 != kolom2){
    cout<<"Ordo Tidak Sesuai, Ulangi!"<<endl;
}
else{
    cout<<endl;
    cout<<"PILIH OPERASI MATRIKS"<<endl;
    cout<<"1. PENJUMLAHAN"<<endl;
    cout<<"2. PERKALIAN"<<endl;
    cout<<"3. TRANSPOSE"<<endl;
    cout<<"Pilih : ";cin>>pilihan;
}
}
//pemilihan Melebihi
void milih1(){
    if(pilihan > 3){
    cout<<"Input salah, silahkan ulangi!";
    }
}
//penjumlahan
void penjumlahan(){
    if(pilihan == 1){
    cout<<""<<endl;
    cout<<"Hasil Penambahan :"<<endl;
    baris = baris1; baris2;
    kolom = kolom1; kolom2;
    for (int i=0; i<baris; i++){
    for(int j=0; j<kolom; j++){
    hasiltambah[i][j] = a[i][j] + b[i][j];
    cout<<hasiltambah[i][j]<<" ";
    }
    cout<<endl;
    }
    }

    cout<<endl;
}

//perkalian
void perkalian(){
if(pilihan == 2 && baris1 == kolom2){
    for(i = 0; i < baris1; i++){
    for(j = 0; j < kolom2; j++){
    for(k = 0; k < baris2; k++){
    jumlah = jumlah + a[i][k] * b[k][j];
    }
    hasilkali[i][j] = jumlah;
    jumlah = 0;
    }
    }
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < baris1; i++){
    for(j = 0; j < kolom1; j++){
    cout << hasilkali[i][j] << " ";
    }
    cout << endl;
    }
  }
}

//milih transpose
void pemilihan_transpose(){
    if(pilihan == 3){
    cout<<"Pilih Matriks Yang Ingin di Transposekan!"<<endl;
    cout<<"1. MATRIKS A"<<endl;
    cout<<"2. MATRIKS B"<<endl;
    cout<<"Pilih : ";cin>>pilihantranspose;
    cout<<"Pilihan : ";
    }
}

//transpose
void transpose1(){
    if(pilihantranspose == 1){

    //proses transpose matriks
    for(int i=0; i<baris1; ++i)
    for(int j=0; j<kolom1; ++j){
    transpose[j][i] = a[i][j];
    }

    //mengeluarkan transpose matriks
    cout<<"Hasil Transpose Matriks A Adalah : "<<endl;
    for(int i=0; i<baris1; ++i){
    for(int j=0; j<kolom1; ++j){
    cout<<" "<< transpose[i][j];
    if (j == baris1 - 1)
    cout << endl;
    }
    }

}
    else if(pilihantranspose == 2){

    //proses transpose matriks
    for(int i=0; i<baris2; ++i)
    for(int j=0; j<kolom2; ++j){
    transpose[j][i] = b[i][j];
    }

    //mengeluarkan transpose matriks
    cout<<"Hasil Transpose Matriks B Adalah : "<<endl;
    for(int i=0; i<baris2; ++i){
    for(int j=0; j<kolom2; ++j){
    cout<<" "<< transpose[i][j];
    if (j == baris2 - 1)
    cout << endl;
    }
    }

}
    else if(pilihantranspose > 2 ){
    cout<<"Input Salah, Silahkan Ulangi!"<<endl;
    }

}
