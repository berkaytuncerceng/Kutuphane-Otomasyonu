#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct yazar_bilgi{
    int yazarKodu;
    char yazarSoyadi[20];
    char yazarAdi[20];
    int dogumYili;
    char ozgecmis[500];
};

typedef struct kitap_bilgi
{
    char tur[20];
    int kitapKodu;
    char kitapAd[20];
    int sayfa;
    int basimYili;
    struct yazar_bilgi yazar;
    int stokSayisi;

}kitap;
typedef struct Uye {
	char tc[20];
	char cinsiyet;
	char dogumTarihi[30];
	char telefon [30];
	char eposta[30];
	char uyelikTarihi[30];
	char adres [30];
	int durum;
} uye ;




void kitap_Ekle()
{
    system("cls");
	printf("....Kitap ekleme ekrani.... \n\n") ;

	kitap k1;

	FILE *dosya;
	dosya=fopen("kitaplar.txt","a");
	printf("Kitap turu:");
    scanf(" %s", &k1.tur);
	printf("Kitap Kodu: ");
    scanf(" %d", &k1.kitapKodu);
	printf("Kitap adi: ");
    scanf(" %s", &k1.kitapAd );
	printf("Sayfa Sayisi:");
	scanf("%d",&k1.sayfa);
	printf("Basim Yili:");
	scanf("%d",&k1.basimYili);
	printf("stok sayisi: ");
    scanf(" %d", &k1.stokSayisi );
    printf("Yazar kodu: ");
	scanf(" %d", &k1.yazar.yazarKodu );
    printf("Yazar Adi: ");
	scanf(" %s", &k1.yazar.yazarAdi );
    printf("Yazar Soyadi: ");
	scanf(" %s",& k1.yazar.yazarSoyadi );
    printf("Yazar Dogum Yili: ");
	scanf(" %d", &k1.yazar.dogumYili );
    printf("Yazar Ozgecmisi: ");
	scanf(" %s", &k1.yazar.ozgecmis );

	fprintf(dosya,"Kitap Turu:%s\nKitap Kodu:%d\nKitap Adi:%s\nSayfa:%d\nBasim Yili:%d\nStok Sayisi:%d\nYazar Kodu:%d\nYazar Adi:%s\nYazar Soyadi:%s\nYazarin Dogum Yili:%d\nYazarin Ozgecmisi:%s\n",k1.tur,k1.kitapKodu,k1.kitapAd,k1.sayfa,k1.basimYili,k1.stokSayisi,k1.yazar.yazarKodu,k1.yazar.yazarAdi,k1.yazar.yazarSoyadi,k1.yazar.dogumYili,k1.yazar.ozgecmis);

	fclose(dosya);


	printf("Kitap Kaydi Yapilmistir! \n");

}
/*void kitap_Listele(){

    printf("....Kitap listeleme ekrani.... \n\n") ;
kitap k1;

FILE *dosya;
dosya=fopen("kitaplar.txt","r");
    fscanf(dosya,"%s %d %s %d %d %d %d %s %s %d %s",&k1.tur,&k1.kitapKodu,&k1.kitapAd,&k1.sayfa,&k1.basimYili,&k1.stokSayisi,&k1.yazar.yazarKodu,&k1.yazar.yazarAdi,&k1.yazar.yazarSoyadi,&k1.yazar.dogumYili,&k1.yazar.ozgecmis);
    printf("%s\n%d\n%s\n%d\n%d\n%d\n%d\n%s\n%s\n%d\n%s\n",k1.tur,k1.kitapKodu,k1.kitapAd,k1.sayfa,k1.basimYili,k1.stokSayisi,k1.yazar.yazarKodu,k1.yazar.yazarAdi,k1.yazar.yazarSoyadi,k1.yazar.dogumYili,k1.yazar.ozgecmis);

fclose(dosya);
} */ 





int main () {
    int secim;
    printf("~~MENU~~\n");
    printf("1-Kitap Ekle\n2-Kitap Listele\n3-Kitap Sil\n4-Kitap Guncelle\n");
    printf("Yapmak istediginiz islemi girin:");
    scanf("%d",&secim);

switch(secim){

case 1:kitap_Ekle();
break;
/*case 2:kitap_Listele();
break;


case 3: kitap_Sil();
break;
case 4: kitap_Güncelle();
break;*/

}

return 0;
}
