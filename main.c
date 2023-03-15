#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//Aleyna Erarslan 1220505045
//soru: 5 adet öðrencinin kiþisel bilgilerini depolayan struct tanýmlama ve ekranda gösteren kod 
//struct(yapý),bir bellek bloðunda tek bir ad alrýnda fiziksel olarak gruplandýrýlmýþ deðiþkenler listesini tanýmlar.

struct ogrenci{  //ogrenci adýnda altýnda farklý deðiþkenler bulunan struct tanýmý yapýlmýþtýr.
	char ad[50];  //max ne kadar karakter kullanýlacaðý belirtilmiþtir.
	char soyad[50];
	char bolum[50];
	int no;
	char adres[150];
} ;

int main(int argc, char *argv[]) {
	int i;  // döngüde öðrenci sayýsýný tutmasý için i tanýmlanmýþtýr.
	struct ogrenci ogr[5]; //struct yapýsýndaki ogrenci ogr[5] 5 öðrencinin tutulacaðý diziye aktarýlmýþtýr.
	
	printf("***Ogrenci bilgi girisi***\n");
	for(i=1;i<=5;i++){  //i deðeri 1. öðrenciyle baþlayarak bir bir artacak ve toplam 5 öðrenci deðeri alýnana kadar devam edecek.
		printf("%d.ogrencinin adi: ",i); 
		scanf("%s",&ogr[i].ad);   //istenilen öðrenci adý girilecektir.yukarda tanýmlanan struct yapýsýna uygun virgülden sonrasý yazýlýr.
		printf("%s'in soyadi: ",ogr[i].ad);
		scanf("%s",&ogr[i].soyad);  // ad için yapýlan iþlem diðer deðiþkenlere de sýrasýyla uygulanýr.
		printf("%s %s'in bolumu: ",ogr[i].ad,ogr[i].soyad);
		scanf("%s",&ogr[i].bolum);
		printf("%s %s'in numara: ",ogr[i].ad,ogr[i].soyad);
		scanf("%d",&ogr[i].no);
		printf("%s %s'in adresi: ",ogr[i].ad,ogr[i].soyad);
		getchar();   // adres girilirken boþluk býrakýlmasý gerekir sadece scanf boþluktan sonrasýný almaz.getchar ise önceki alýnanlardan boþluðu okur.
	    scanf("%[^\n]s",&ogr[i].adres);  // normal scanf tanýmlamasýndan farklý olmasýnýn nedeni boþuk býrakacak olmamýz.
		printf("\n");
		
		}
		//alýnan öðrenci bilgilerini ekrana yazdýrma iþlemi yapýlmaktadýr.
	printf("***Ogrenci bilgileri***\n");
	for(i=1;i<=5;i++){  // yukarda alýnan 5 öðrencinin verilerine göre 1. den baþlayarak tek tek yazdýrýlmaktadýr.
		
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

