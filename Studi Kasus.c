#include <stdio.h>
#include <stdlib.h>

int saldo1 = 100000;
void saldoawal(){
 printf("Saldo Anda Saat Ini Adalah Rp. %d\n",saldo1);
 printf("\n");
}

void nama(){
	printf (" \n NAMA : Insan Adhibuana Priyatna\n NIM : F1B019073\n KELOMPOK : 15\n\n");
}

int awal(){
	printf ("  ***		ISEKAI STORE	***\n");
	printf ("***  Alamat : JL. GAJAH MADA  No.4 Mataram NTB ***\n");
	printf ("     *** No Telepon : (0370) 6378888 ***\n");
	printf ("................................................\n\n");
}

int a(){
	printf("__________________________________________________\n");
}

int pesan(){
	printf("		 *** JADILAH WIBU BERIMAN <3 ***\n			");
}

int ulasan(){
	int ulasan;
	printf(" Tolong berikan ulasan untuk toko kami (dari 1-5) :");
	scanf("%d",&ulasan);
	printf("__________________________________________________\n");
	printf("*** TERIMA KASIH SUDAH BERBELANJA DI TOKO KAMI ***\n");}

main(){
	int x[16]={8,5,7,4,9,6,8,5,4,1,3,5,4,7,2,1};
	int kode , harga , i=1 , total_pembelian=0, diskon, total, saldo, kembalian;
	char mau = 'y' ;
	nama ();
	saldoawal ();
	printf("/n");
	awal ();
	printf ("*===================================================*\n");
	printf ("*====================ISEKAI STORE===================*\n");
	printf ("*===================================================*\n");
	printf ("|kode|     komik          |     harga     |  stok   |\n");
	printf ("|====|====================|===============|=========|\n");
	printf ("|  1 |  One piece         | Rp. 15.000    |    %i    |\n",x[0]);
	printf ("|  2 |  Boruto            | Rp. 28.000    |    %i    |\n",x[1]);
	printf ("|  3 |  Dragon ball       | Rp. 28.000    |    %i    |\n",x[2]);
	printf ("|  4 |  Bleach            | Rp. 25.000    |    %i    |\n",x[3]);
	printf ("|  5 |  Solo leveling     | Rp. 15.000    |    %i    |\n",x[4]);
	printf ("|  6 |  SnK               | Rp. 45.000    |    %i    |\n",x[5]);
	printf ("|  7 |  Konosuba          | Rp. 10.000    |    %i    |\n",x[6]);
	printf ("|  8 |  Naruto            | Rp. 12.000    |    %i    |\n",x[7]);
	printf ("|  9 |  SAO               | Rp. 18.000    |    %i    |\n",x[8]);
	printf ("| 10 |  OPM               | Rp. 22.000    |    %i    |\n",x[9]);
	printf ("| 11 |  Boku no Hero      | Rp. 20.000    |    %i    |\n",x[10]);
	printf ("| 12 |  Fairy tail        | Rp. 25.000    |    %i    |\n",x[11]);
	printf ("| 13 |  Dr.Stone          | Rp. 19.000    |    %i    |\n",x[12]);
	printf ("| 14 |  Tsubasa           | Rp. 15.000    |    %i    |\n",x[13]);
	printf ("| 15 |  Magi              | Rp. 17.000    |    %i    |\n",x[14]);
  printf ("| 16 |  SnS               | Rp. 17.000    |    %i    |\n",x[15]);
  printf ("*===================================================*\n");
  pesan ();
	printf("Input kode komik :");
	
while (mau=='y'){

	scanf ("%d", &kode);
	fflush (stdin);
	if (kode==1)	{
		printf("komik yang anda pilih adalah : One piece\n");
	harga= 15000;
	printf("1 = %d\n ", harga);
	a();
}else if (kode==2){
	printf("komik yang anda pilih adalah : Boruto\n");
		harga= 28000;
	printf("2 = %d\n ", harga);
	a();
}else if ( kode == 3){
	printf("komik yang anda pilih adalah : Dragon ball\n");
		harga= 28000;
	printf("3 = %d\n", harga);
	a();
}else if ( kode == 4){
	printf("komik yang anda pilih adalah : bleach\n");
	harga= 25000;
	printf("4 = %d\n", harga);
	a();
}else if ( kode == 5){
	printf("komik yang anda pilih adalah : solo leveling\n");
	harga= 15000;
	printf("5 = %d\n", harga);
	a();
}else if ( kode == 6){
	printf("komik yang anda pilih adalah : SnK\n");
	harga= 45000;
	printf("6 = %d\n", harga);
	a();
}else if ( kode == 7){
	printf("komik yang anda pilih adalah : konosuba\n");
	harga= 10000;
	printf("7 = %d\n", harga);
	a();
}else if ( kode == 8){
	printf("komik yang anda pilih adalah : Naruto\n");
	harga= 12000;
	printf("8 = %d\n", harga);
	a();
}else if ( kode == 9){
	printf("komik yang anda pilih adalah : SAO\n");
	harga= 18000;
	printf("9 = %d\n", harga);
	a();
}else if ( kode == 10){
	printf("komik yang anda pilih adalah : OPM\n");
	harga= 22000;
	printf("10 = %d\n", harga);
	a();
}else if ( kode == 11){
	printf("komik yang anda pilih adalah : boku no hero\n");
	harga= 20000;
	printf("11 = %d\n", harga);
	a();
}else if ( kode == 12){
	printf("komik yang anda pilih adalah : fairy tail\n");
	harga= 25000;
	printf("12 = %d\n", harga);
	a();
}else if ( kode == 13){
	printf("komik yang anda pilih adalah : Dr.stone\n");
	harga= 19000;
	printf("13 = %d\n", harga);
	a();
}else if ( kode == 14){
	printf("komik yang anda pilih adalah : Tsubasa\n");
	harga= 15000;
	printf("14 = %d\n", harga);
	a();
}else if ( kode == 15){
	printf("komik yang anda pilih adalah : Magi\n");
	harga= 17000;
	printf("15 = %d\n", harga);
	a();
}else if ( kode == 16){
	printf("komik yang anda pilih adalah : SnS\n");
	harga= 17000;
	printf("16 = %d\n", harga);
	a();
}else{
	printf("*------------------------------*\n");
	printf("|kagak ada di menu bakayarou!!!|\n");
	printf("*------------------------------*\n");
}

total_pembelian=total_pembelian+harga;
printf("MAU BELI KOMIK lagi?? [y/t]:");
scanf("%c", &mau);
printf("Input kode komik :");
i++;
}

printf("\n\n============================================\n");
printf("total pembelian = %d\n", total_pembelian);
if (total_pembelian > 50000){
	diskon=0.05*total_pembelian;
	printf ("diskon : %d\n", diskon);
	total=total_pembelian-diskon;
	printf ("harga total : %d\n", total);
}else{
	total=total_pembelian;
	printf ("harga total : %d\n", total);
}
printf("============================================\n");
	kembalian=saldo1-total;
	printf ("sisa saldo kamu : %d\n\n", kembalian);
		ulasan();
}
