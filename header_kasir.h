#include<stdio.h>
#define hrg 20
#define jml 4

char dataText[20][20];
int data[20][4],banyak,beli;

void readText(){
   int count = 0;
   FILE *fp;
   fp = fopen("Stok.txt","r");
   if(fp == NULL){
   		printf("No such File");
   }
   char temp[20][20];
   while(fscanf(fp,"%d %s %d %d",&data[count][0],&dataText[count],&data[count][1],&data[count][2]) != -1){
   		count++;
   }
   fclose(fp);
}

void saveText(){
   int i;
   FILE *fp = fopen("Stok.txt","w");
   if(fp == NULL){
		printf("No such File(Save)");
   }
   for(i=0;i<20;i++){
		fprintf(fp,"%d %s %d %d \n",data[i][0],dataText[i],data[i][1],data[i][2]);	
   }
   fclose(fp);
}

void daftar_beli(){
	int i;
	printf("Berikut adalah daftar barang yang dapat anda beli:\n");
	for(i=0;i<20;i++){
		printf(" %d. %s	: Rp.%d Stok Tersedia:%d\n",data[i][0],dataText[i],data[i][1],data[i][2]);	
	}
	printf("Anda bisa memasukan kode barang 'spasi' jumlah pembelian untuk memproses pembelian\n");
	printf("Contoh, membeli 2 buah pensil ---> 1 2\n");
	scanf("%d %d",&beli,&banyak);
	if(data[beli-1][2]>0){
		if(banyak<=data[beli-1][2]){
			data[beli-1][3] = data[beli-1][3] + banyak;
			data[beli-1][2] = data[beli-1][2] - banyak;
		}
		if(banyak>data[beli-1][2]){
			data[beli-1][3] = data[beli-1][3] + data[beli-1][2];
			data[beli-1][2] = 0;
		}
	}
	else printf("Barang/Jasa yang anda beli sedang tidak tersedia\n");
}

int print_struk(){
	int jumlah=0;
	printf("Berikut adalah daftar barang/jasa yang anda beli\n");
	if(data[0][3]>0){
		printf("Pensil                       x%d     Rp.%d\n",data[0][3],data[0][3]*data[0][1]);
		jumlah=jumlah+data[0][3]*data[0][1];
	}
	if(data[1][3]>0){
		printf("Buku Tulis                   x%d     Rp.%d\n",data[1][3],data[1][3]*data[1][1]);
		jumlah=jumlah+data[1][3]*data[1][1];
	}
	if(data[2][3]>0){
		printf("Pen                          x%d     Rp.%d\n",data[2][3],data[2][3]*data[2][1]);
		jumlah=jumlah+data[2][3]*data[2][1];
	}
	if(data[3][3]>0){
		printf("Penghapus                    x%d     Rp.%d\n",data[3][3],data[3][3]*data[3][1]);
		jumlah=jumlah+data[3][3]*data[3][1];
	}
	if(data[4][3]>0){
		printf("Jangka                       x%d     Rp.%d\n",data[4][3],data[4][3]*data[4][1]);
		jumlah=jumlah+data[4][3]*data[4][1];
	}
	if(data[5][3]>0){
		printf("Milimeter Block              x%d     Rp.%d\n",data[5][3],data[5][3]*data[5][1]);
		jumlah=jumlah+data[5][3]*data[5][1];
	}
	if(data[6][3]>0){
		printf("Penggaris Segitiga           x%d     Rp.%d\n",data[6][3],data[6][3]*data[6][1]);
		jumlah=jumlah+data[6][3]*data[6][1];
	}
	if(data[7][3]>0){
		printf("Penggaris 30cm               x%d     Rp.%d\n",data[7][3],data[7][3]*data[7][1]);
		jumlah=jumlah+data[7][3]*data[7][1];
	}
	if(data[8][3]>0){
		printf("Kertas HVS/A4 @lembar        x%d     Rp.%d\n",data[8][3],data[8][3]*data[8][1]);
		jumlah=jumlah+data[8][3]*data[8][1];
	}
	if(data[9][3]>0){
		printf("Busur                        x%d     Rp.%d\n",data[9][3],data[9][3]*data[9][1]);
		jumlah=jumlah+data[9][3]*data[9][1];
	}
	if(data[10][3]>0){
		printf("Buku Gambar A3               x%d     Rp.%d\n",data[10][3],data[10][3]*data[10][1]);
		jumlah=jumlah+data[10][3]*data[10][1];
	}
	if(data[11][3]>0){
		printf("Buku Gambar A4               x%d     Rp.%d\n",data[11][3],data[11][3]*data[11][1]);
		jumlah=jumlah+data[11][3]*data[11][1];
	}
	if(data[13][3]>0){
		printf("Kertas Bode @lembar          x%d     Rp.%d\n",data[13][3],data[13][3]*data[13][1]);
		jumlah=jumlah+data[13][3]*data[13][1];
	}
	if(data[13][3]>0){
		printf("tip ex                       x%d     Rp.%d\n",data[13][3],data[13][3]*data[13][1]);
		jumlah=jumlah+data[13][3]*data[13][1];
	}
	if(data[14][3]>0){
		printf("Prangko                      x%d     Rp.%d\n",data[14][3],data[14][3]*data[14][1]);
		jumlah=jumlah+data[14][3]*data[14][1];
	}
	if(data[15][3]>0){
		printf("Kalkulator                   x%d     Rp.%d\n",data[15][3],data[15][3]*data[15][1]);
		jumlah=jumlah+data[15][3]*data[15][1];
	}
	if(data[16][3]>0){
		printf("Folio Bergaris @lembar       x%d     Rp.%d\n",data[16][3],data[16][3]*data[16][1]);
		jumlah=jumlah+data[16][3]*data[16][1];
	}
	if(data[17][3]>0){
		printf("Jasa Print @lembar           x%d     Rp.%d\n",data[17][3],data[17][3]*data[17][1]);
		jumlah=jumlah+data[17][3]*data[17][1];
	}
	if(data[18][3]>0){
		printf("Jasa Jilid @buku             x%d     Rp.%d\n",data[18][3],data[18][3]*data[18][1]);
		jumlah=jumlah+data[18][3]*data[18][1];
	}
	if(data[19][3]>0){
		printf("Jasa Laminating @lembar      x%d     Rp.%d\n",data[19][3],data[19][3]*data[19][1]);
		jumlah=jumlah+data[19][3]*data[19][1];
	}
		printf("Jumlah Harga                        Rp.%d\n",jumlah);
}
