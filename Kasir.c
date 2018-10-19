#include<stdio.h>
#include"header_kasir.h"
#define hrg 20
#define jml 4

int main(){
	int beli,banyak,lanjut;
	
	int data[hrg][jml] = { {1,3000,0},{2,5000,0},{3,4000,0},{4,2500,0},{5,6000,0},{6,4000,0},{7,2000,0},{8,2500,0},{9,500,0},{10,2000,0},
	{11,25000,0},{12,15000,0},{13,1000,0},{14,2000,0},{15,2000,0},{16,50000,0},{17,500,0},{18,100,0},{19,3500,0},{20,5000,0} };
	printf("Selamat datang di program kasir!\n");
	readText();
	daftar_beli();
	printf("Apakah masih ada barang yang ingin anda beli?\n 1=Ya \n Lainnya=Tidak\n");
	scanf("%d",&lanjut);
	while(lanjut==1){
		system("cls");
		daftar_beli(data);
		printf("Apakah masih ada barang yang ingin anda beli?\n 1=Ya \n Lainnya=Tidak\n");
		scanf("%d",&lanjut);
	}
	system("cls");
	print_struk();
	saveText();
}

