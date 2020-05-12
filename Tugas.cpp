#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int saldo1 = 100000;
void saldoawal()
{
 cout<<"Saldo Anda Saat Ini Adalah Rp. "<<saldo1<<endl;
 cout<<"\n";
}

void nama(){
	cout<<" \n NAMA : Insan Adhibuana Priyatna\n NIM : F1B019073\n KELOMPOK : 15\n\n";
}
int awal(){
	cout<<"  ***		ISEKAI STORE	***\n";
	cout<<"***  Alamat : JL. GAJAH MADA  No.4 Mataram NTB ***\n";
	cout<<"     *** No Telepon : (0370) 6378888 ***\n";
	cout<<"................................................\n\n";
	
}
int c(){
	cout <<"Dengan menggunakan C++";
}
int a(){
	cout<<"\n__________________________________________________\n";
}
int pesan(){
	cout<<"		 *** JADILAH WIBU BERIMAN <3 ***\n			";
}
int ulasan(){
	int ulasan;
	cout<<" Tolong berikan ulasan untuk toko kami (dari 1-5) :";
	cin>>ulasan;
	cout<<"__________________________________________________\n";
	cout<<"*** TERIMA KASIH SUDAH BERBELANJA DI TOKO KAMI ***\n";}

main(){
	int x[16]={8,5,7,4,9,6,8,5,4,1,3,5,4,7,2,1};
	int kode , harga , i=1 , total_pembelian=0, diskon, total, saldo, kembalian;
	char mau = 'y' ;
	c ();
	cout <<"\n";
	nama ();
	saldoawal ();
	cout<<"/n";
	awal ();
	cout<<"*===================================================*\n";
	cout<<"*====================ISEKAI STORE===================*\n";
	cout<<"*===================================================*\n";
	cout<<"|kode|     komik          |     harga     |  stok   |\n";
	cout<<"|=========================================|=========|\n";
	cout<<"|  1 |  One piece         | Rp. 15.000    |    "<<x[1]<<"    |\n";
	cout<<"|  2 |  Boruto            | Rp. 28.000    |    "<<x[2]<<"    |\n";
	cout<<"|  3 |  Dragon ball       | Rp. 28.000    |    "<<x[3]<<"    |\n";
	cout<<"|  4 |  Bleach            | Rp. 25.000    |    "<<x[4]<<"    |\n";
	cout<<"|  5 |  Solo leveling     | Rp. 15.000    |    "<<x[5]<<"    |\n";
	cout<<"|  6 |  SnK               | Rp. 45.000    |    "<<x[6]<<"    |\n";
	cout<<"|  7 |  Konosuba          | Rp. 10.000    |    "<<x[7]<<"    |\n";
	cout<<"|  8 |  Naruto            | Rp. 12.000    |    "<<x[8]<<"    |\n";
	cout<<"|  9 |  SAO               | Rp. 18.000    |    "<<x[9]<<"    |\n";
	cout<<"| 10 |  OPM               | Rp. 22.000    |    "<<x[10]<<"    |\n";
	cout<<"| 11 |  Boku no Hero      | Rp. 20.000    |    "<<x[11]<<"    |\n";
	cout<<"| 12 |  Fairy tail        | Rp. 25.000    |    "<<x[12]<<"    |\n";
	cout<<"| 13 |  Dr.Stone          | Rp. 19.000    |    "<<x[13]<<"    |\n";
	cout<<"| 14 |  Tsubasa           | Rp. 15.000    |    "<<x[14]<<"    |\n";
	cout<<"| 15 |  Magi              | Rp. 17.000    |    "<<x[15]<<"    |\n";
    cout<<"| 16 |  SnS               | Rp. 17.000    |    "<<x[0]<<"    |\n";
    cout<<"*===================================================*\n";
    pesan ();
	cout<<"Input kode komik :";
	
while (mau=='y'){

	cin>>kode;
	fflush (stdin);
	if (kode==1)	{
	cout<<"komik yang anda pilih adalah : One piece\n";
	harga= 15000;
	cout<<"1 = "<<harga;
	a();
}else if (kode==2){
	cout<<"komik yang anda pilih adalah : Boruto\n";
	harga= 28000;
	cout<<"2 = "<<harga;
	a();
}else if ( kode == 3){
	cout<<"komik yang anda pilih adalah : Dragon ball\n";
	harga= 28000;
	cout<<"3 = "<<harga;
	a();
}else if ( kode == 4){
	cout<<"komik yang anda pilih adalah : bleach\n";
	harga= 25000;
	cout<<"4 = "<<harga;
	a();
}else if ( kode == 5){
	cout<<"komik yang anda pilih adalah : solo leveling\n";
	harga= 15000;
	cout<<"5 = "<<harga;
	a();
}else if ( kode == 6){
	cout<<"komik yang anda pilih adalah : SnK\n";
	harga= 45000;
	cout<<"6 = "<<harga;
	a();
}else if ( kode == 7){
	cout<<"komik yang anda pilih adalah : konosuba\n";
	harga= 10000;
	cout<<"7 = "<<harga;
	a();
}else if ( kode == 8){
	cout<<"komik yang anda pilih adalah : Naruto\n";
	harga= 12000;
	cout<<"8 = "<<harga;
	a();
}else if ( kode == 9){
	cout<<"komik yang anda pilih adalah : SAO\n";
	harga= 18000;
	cout<<"9 = "<<harga;
	a();
}else if ( kode == 10){
	cout<<"komik yang anda pilih adalah : OPM\n";
	harga= 22000;
	cout<<"10 = "<<harga;
	a();
}else if ( kode == 11){
	cout<<"komik yang anda pilih adalah : boku no hero\n";
	harga= 20000;
	cout<<"11 = "<<harga;
	a();
}else if ( kode == 12){
	cout<<"komik yang anda pilih adalah : fairy tail\n";
	harga= 25000;
	cout<<"12 = "<<harga;
	a();
}else if ( kode == 13){
	cout<<"komik yang anda pilih adalah : Dr.stone\n";
	harga= 19000;
	cout<<"13 = "<<harga;
	a();
}else if ( kode == 14){
	cout<<"komik yang anda pilih adalah : Tsubasa\n";
	harga= 15000;
	cout<<"14 = "<<harga;
	a();
}else if ( kode == 15){
	cout<<"komik yang anda pilih adalah : Magi\n";
	harga= 17000;
	cout<<"15 = "<<harga;
	a();
}else if ( kode == 16){
	cout<<"komik yang anda pilih adalah : SnS\n";
	harga= 17000;
	cout<<"16 = \n"<<harga;
	a();
}else{
	cout<<"*------------------------------*\n";
	cout<<"|kagak ada di menu bakayarou!!!|\n";
	cout<<"*------------------------------*\n";
}
total_pembelian=total_pembelian+harga;
cout<<"MAU BELI KOMIK lagi?? [y/t]:";
cin>>mau;
cout<<"Input kode komik :";
i++;
}
cout<<"\n\n============================================\n";
cout<<"\ntotal pembelian = "<<total_pembelian;
if (total_pembelian > 50000){
	diskon=0.05*total_pembelian;
	cout<<"\ndiskon : "<<diskon;
	total=total_pembelian-diskon;
	cout<<"\nharga total : "<<total;
}else{
	total=total_pembelian;
	cout<<"\nharga total : "<<total;
}
cout<<"\n============================================\n";
	kembalian=saldo1-total;
    cout<<"\nsisa saldo kamu : "<<kembalian;
		ulasan();
}
