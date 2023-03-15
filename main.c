#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//Aleyna Erarslan 1220505045
//soru: 5 adet ��rencinin ki�isel bilgilerini depolayan struct tan�mlama ve ekranda g�steren kod 
//struct(yap�),bir bellek blo�unda tek bir ad alr�nda fiziksel olarak grupland�r�lm�� de�i�kenler listesini tan�mlar.

struct ogrenci{  //ogrenci ad�nda alt�nda farkl� de�i�kenler bulunan struct tan�m� yap�lm��t�r.
	char ad[50];  //max ne kadar karakter kullan�laca�� belirtilmi�tir.
	char soyad[50];
	char bolum[50];
	int no;
	char adres[150];
} ;

int main(int argc, char *argv[]) {
	int i;  // d�ng�de ��renci say�s�n� tutmas� i�in i tan�mlanm��t�r.
	struct ogrenci ogr[5]; //struct yap�s�ndaki ogrenci ogr[5] 5 ��rencinin tutulaca�� diziye aktar�lm��t�r.
	
	printf("***Ogrenci bilgi girisi***\n");
	for(i=1;i<=5;i++){  //i de�eri 1. ��renciyle ba�layarak bir bir artacak ve toplam 5 ��renci de�eri al�nana kadar devam edecek.
		printf("%d.ogrencinin adi: ",i); 
		scanf("%s",&ogr[i].ad);   //istenilen ��renci ad� girilecektir.yukarda tan�mlanan struct yap�s�na uygun virg�lden sonras� yaz�l�r.
		printf("%s'in soyadi: ",ogr[i].ad);
		scanf("%s",&ogr[i].soyad);  // ad i�in yap�lan i�lem di�er de�i�kenlere de s�ras�yla uygulan�r.
		printf("%s %s'in bolumu: ",ogr[i].ad,ogr[i].soyad);
		scanf("%s",&ogr[i].bolum);
		printf("%s %s'in numara: ",ogr[i].ad,ogr[i].soyad);
		scanf("%d",&ogr[i].no);
		printf("%s %s'in adresi: ",ogr[i].ad,ogr[i].soyad);
		getchar();   // adres girilirken bo�luk b�rak�lmas� gerekir sadece scanf bo�luktan sonras�n� almaz.getchar ise �nceki al�nanlardan bo�lu�u okur.
	    scanf("%[^\n]s",&ogr[i].adres);  // normal scanf tan�mlamas�ndan farkl� olmas�n�n nedeni bo�uk b�rakacak olmam�z.
		printf("\n");
		
		}
		//al�nan ��renci bilgilerini ekrana yazd�rma i�lemi yap�lmaktad�r.
	printf("***Ogrenci bilgileri***\n");
	for(i=1;i<=5;i++){  // yukarda al�nan 5 ��rencinin verilerine g�re 1. den ba�layarak tek tek yazd�r�lmaktad�r.
		
		printf("%d Ogrenci\n",i);   
		printf("Ad:%s\n",ogr[i].ad);
		printf("soyad:%s\n",ogr[i].soyad);
		printf("bolum:%s\n",ogr[i].bolum);
		printf("numara:%d\n",ogr[i].no);
		printf("Adres:%s\n",ogr[i].adres);
		printf("\n");
	}
	return 0;
}

