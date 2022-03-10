#include <stdio.h>
#include<windows.h>
#include <locale.h>
struct giris{ //Kuay�t olacak kullan�c�ya ait bilgilerin d�zenli bir yap� i�erisinde toplanmas�
	char k_adi[20],sifre[20],ad[20],soyad[20],d_yeri[20];
	int d_gunu,d_yili,d_ayi;
};
	struct giris uye1; 
	struct giris uye2;

void cikis();
void laptopmenu();
void oneriler();
void onerilerebak();
int yorumyap(char[]);
void sehir(char[]);//*fonksiyon prototipi*//
int bolge(int);//*fonksiyon prototipi*//
int main()
{	int a=1,b=1;
	
	system("color 2");
	setlocale(LC_ALL,"Turkish");
    int secim,x;
    int sec1,i,sec2;
	char ch;	
	
	
	
	
		 //Kullan�c� ad� ve �ifre ile uygulamaya giri�
			printf("\t\t\t\t\t====> Kullan�c� ad�:"); scanf("%s",uye1.k_adi);
			printf("\t\t\t\t\t====> �ifre:");
			  for (i = 0; 1; i++)
    {
        ch = getch();//�ifrenin y�ld�z �eklinde ekranda g�z�kmesi
        if (ch != 13)
        {
            uye1.sifre[i] = ch;
            printf("*");
        }
        if (ch == 13)
        {
            break;
        }
    
    }			//Girilen kullan�c� ad� ve �ifre verileririnin admin hesab� ya da yeni kay�t olunan hesap ile uyumunun sorgusu, tespiti
			if(((strcmp(uye2.sifre,uye1.sifre)==0)||(strcmp("admin",uye1.sifre)==0))&&((strcmp(uye2.k_adi,uye1.k_adi)==0)||(strcmp("admin",uye1.k_adi)==0)))
			{ 
    while (a==1) { system("CLS"); //*uygulama ana men�s�*//
    printf("\n\t\t\t*************************************o****************************************\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t*Merhaba! Uygulamam�za ho�geldiniz. L�tfen yapmak istedi�iniz i�lemi se�iniz.*\n");
    printf("\t\t\t*B�lge �zerinden �ehir se�(1)                                                *\n");
    printf("\t\t\t*B�t�n �ehirleri listele(2)                                                  *\n");
    printf("\t\t\t*Bir �ehire yorum eklemek i�in:(3)                                           *\n");
    printf("\t\t\t*Geli�memize yard�m edin! G�r�� ve �neri yazmak i�in:(4)                     *\n");
    printf("\t\t\t*Sizden gelenler:(5)                                                         *\n");
    printf("\t\t\t*Bilgilerim:(6)                                                              *\n");
    printf("\t\t\t*��k��:(7)                                                                   *\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t"); laptopmenu();
    scanf("%d", &secim);

        switch (secim){//b�lgeye g�re se�im yapma*//
            case 1:
            system("CLS");
            printf("\n\t\t\t\t\t***************************************\n");
            printf("\n\t\t\t\t\tListelemek istedi�iniz b�lgeyi se�iniz:\n");
            printf("\n\t\t\t\t\t========>Akdeniz B�lgesi (1)\n");
            printf("\t\t\t\t\t========>Ege B�lgesi (2)\n");
            printf("\t\t\t\t\t========>�� Anadolu B�lgesi (3)\n");
            printf("\t\t\t\t\t========>Karadeniz B�lgesi (4)\n");
            printf("\t\t\t\t\t========>G�neydo�u Anadolu B�lgesi (5)\n");
            printf("\t\t\t\t\t========>Marmara B�lgesi (6)\n");
            printf("\t\t\t\t\t========>Do�u Anadolu B�lgesi (7)\n");
            printf("\n\t\t\t\t\t***************************************\n");
            scanf("%d",&x);
            system("CLS");
            bolge(x);
            
            break;
            case 2: //*b�t�n �ehirleri listele
            sehir("b�t�nsehirler.txt");//*b�t�n �ehirleri listeleyip kullan�c�dan se�imini al*//
            scanf("%d",&secim);
            system("CLS");//*�nceki k�s�mlar cmdden silinir*//
            sehirler(secim);//*sehirlerin listelendigi fonksiyon �al��t�r�l�r ve bilgiler ekrana yazd�r�l�r*//
            break;
            case 3://* bir �ehire yorum ekle
			sehir("b�t�nsehirler.txt"); scanf("%d",&x); system("CLS"); yorumlar(x); //* se�ilen �ehire g�re yorumlar fonksiyonu �al��t�r�l�r ve istenen �ehire yorum eklenir.
            break;
            case 4://* g�r�� ve �neri ekle
			 oneriler(); system("CLS"); printf("g�r�� ve �nerilerinizi yaz�n�z:\n");  break; //* g�r�� ve �neri yazmak i�in yaz�lan fonksiyon, b�t�n g�r�� ve �neriler ayn� dosyaya yaz�l�r ve istendi�inde a��l�r*//
            case 5: //* �nerileri g�r�nt�le
			onerilerebak(); break;//* yaz�lan g�r�� ve �nerilerin oldu�u dosyay� ekrana yazan fonksiyon �al��t�r�l�r*//
            case 6://*bilgilerimi g�r�nt�le
            printf("\t\t\t\t\t*******************************************");
            printf("\n\t\t\t\t\tAd�m:%s",uye1.ad);
            printf("\n\t\t\t\t\tSoyad�m:%s",uye1.soyad);
            printf("\n\t\t\t\t\tDo�um tarihim:%d.%d.%d",uye1.d_gunu,uye1.d_ayi,uye1.d_yili);
            printf("\n\t\t\t\t\tDogdugum sehir:%s",uye1.d_yeri);
            printf("\n\t\t\t\t\tBilgilerinizi g�ncellemek i�in 1'e  basiniz.\n");
            printf("\t\t\t\t\t*******************************************");
			scanf("%d",&sec2);
            
            if (sec2==1){ //Girilmi� olan ki�isel bilgilerin g�ncellenme s�reci
            printf("\t\t\t\t\tBilgi g�ncelleme b�l�m�ne ho� geldiniz.\n");
			printf("\t\t\t\t\tYeni Ad�n�z:"); scanf("%s",uye1.ad);
			printf("\t\t\t\t\tYeni Soyad�n�z:"); scanf("%s",uye1.soyad);
			printf("\t\t\t\t\tAy�n ka��nda do�dunuz:"); scanf("%d",&uye1.d_gunu);
			while (uye1.d_gunu>31)
				{printf("\t\t\t\t\tl�tfen ge�erli bir tarih giriniz!:\n");
				scanf("%d",&uye1.d_gunu);
				}
			printf("\t\t\t\t\tKa��nc� ayda do�dunuz:"); scanf("%d",&uye1.d_ayi);
			while (uye1.d_ayi>12)
				{printf("\t\t\t\t\tl�tfen ge�erli bir tarih giriniz!:\n");
				scanf("%d",&uye1.d_ayi);
				}
			printf("\t\t\t\t\tHangi y�lda do�dunuz:"); scanf("%d",&uye1.d_yili);
				while (uye1.d_yili>2020||uye1.d_yili<1900)
				{printf("\t\t\t\t\tl�tfen ge�erli bir tarih giriniz!:\n");
				scanf("%d",&uye1.d_yili);
				}
			printf("\t\t\t\t\tDo�du�unuz �ehir:"); scanf("%s",uye1.d_yeri);
			printf("\n\n"); system("CLS");
			printf("Hesab�n�z g�ncelle�tirildi.");
			}
            break;
            case 7:
            cikis();
            return 0;
            break;
        }
        printf("\nAna men�ye d�nmek i�in 1 e bas�n�z.\n");
        printf("Uygulamadan ��kmak i�in 2 ye bas�n�z.\n");
        scanf("%d" ,&a);
        if (a!=1&&a!=2){
		printf("l�tfen ge�erli bir se�im yap�n�z!\n"); scanf("%d",&a);
		}
    }
}
    	else{ 	
			printf("\nGirdiginiz bilgiler yanlis.");
	}
			
	
	
	printf("\n��k�� yapmak i�in 1'e bas�n�z.");  scanf("%d",&b); 

cikis();


    return 0;
}
int bolge(int b){ //*se�ilen b�lgeye g�re istenilen dosyay� a�an fonksiyon*//
	setlocale(LC_ALL,"Turkish");
	int sec;
	switch(b){case 1:
		sehir("bolgeler\\akdeniz.txt");
	    scanf("%d",&sec);
            system("CLS");//*�nceki k�s�mlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		case 2:
		sehir("bolgeler\\ege.txt");
		scanf("%d",&sec);
            system("CLS");//*�nceki k�s�mlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		case 3:
		sehir("bolgeler\\icanadolu.txt");
		scanf("%d",&sec);
            system("CLS");//*�nceki k�s�mlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		case 4:
		sehir("bolgeler\\karadeniz.txt");
		scanf("%d",&sec);
            system("CLS");//*�nceki k�s�mlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		case 5:
		sehir("bolgeler\\guneydogu.txt");
		scanf("%d",&sec);
            system("CLS");//*�nceki k�s�mlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		case 6:
		sehir("bolgeler\\marmara.txt");
		scanf("%d",&sec);
            system("CLS");//*�nceki k�s�mlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		case 7:
		sehir("bolgeler\\doguanadolu.txt");
		scanf("%d",&sec);
            system("CLS");//*�nceki k�s�mlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		default: printf("B�yle bir b�lge bulunmamaktad�r!\n");
}
	}
void sehir(char m[25]) //*i�ine girilen dosya dizinini a�an fonksiyon*//
	{
	
    FILE *dosya = fopen(m, "r, ccs=UTF-8");
 
    wint_t c;
    while ((c = fgetwc(dosya)) != WEOF)
        putwchar(c);
    
		fclose(dosya);
	}
int sehirler(int b){
		switch(b)
		{ 
		 
		  case 1: sehir("sehirler\\adana.txt"); break; case 2: sehir("sehirler\\adiyaman.txt"); break; case 3: sehir("sehirler\\afyon.txt"); break;
		  case 4: sehir("sehirler\\agri.txt"); break; case 5: sehir("sehirler\\amasya.txt"); break; case 6: sehir("sehirler\\ankara.txt"); break;
		  case 7: sehir("sehirler\\antalya.txt"); break; case 8: sehir("sehirler\\artvin.txt"); break; case 9: sehir("sehirler\\aydin.txt"); break;
		  case 10: sehir("sehirler\\balikesir.txt"); break; case 11: sehir("sehirler\\bilecik.txt"); break; case 12: sehir("sehirler\\bingol.txt"); break;
		  case 13: sehir("sehirler\\bitlis.txt"); break; case 14: sehir("sehirler\\bolu.txt"); break; case 15: sehir("sehirler\\burdur.txt"); break;
		  case 16: sehir("sehirler\\bursa.txt"); break; case 17: sehir("sehirler\\canakkale.txt"); break; case 18: sehir("sehirler\\cankiri.txt"); break;
		  case 19: sehir("sehirler\\corum.txt"); break; case 20: sehir("sehirler\\denizli.txt"); break; case 21: sehir("sehirler\\diyarbakir.txt"); break;
		  case 22: sehir("sehirler\\edirne.txt"); break; case 23: sehir("sehirler\\elazig.txt"); break; case 24: sehir("sehirler\\erzincan.txt"); break; 
		  case 25: sehir("sehirler\\erzurum.txt"); break; case 26: sehir("sehirler\\eskisehir.txt"); break; case 27: sehir("sehirler\\gaziantep.txt"); break; 
		  case 28: sehir("sehirler\\giresun.txt"); break; case 29: sehir("sehirler\\gumushane.txt"); break; case 30: sehir("sehirler\\hakkari.txt"); break; 
		  case 31: sehir("sehirler\\hatay.txt"); break; case 32: sehir("sehirler\\isparta.txt"); break; case 33: sehir("sehirler\\mersin.txt"); break; 
		  case 34: sehir("sehirler\\istanbul.txt"); break; case 35: sehir("sehirler\\izmir.txt"); break; case 36: sehir("sehirler\\kars.txt"); break; 
		  case 37: sehir("sehirler\\kastamonu.txt"); break; case 38: sehir("sehirler\\kayseri.txt"); break; case 39: sehir("sehirler\\kirklareli.txt"); break; 
		  case 40: sehir("sehirler\\kirsehir.txt"); break; case 41: sehir("sehirler\\kocaeli.txt"); break; case 42: sehir("sehirler\\konya.txt"); break; 
		  case 43: sehir("sehirler\\kutahya.txt"); break; case 44: sehir("sehirler\\malatya.txt"); break; case 45: sehir("sehirler\\manisa.txt"); break; 
		  case 46: sehir("sehirler\\kahramanmaras.txt"); break; case 47: sehir("sehirler\\mardin.txt"); break; case 48: sehir("sehirler\\mugla.txt"); break;
		  case 49: sehir("sehirler\\mus.txt"); break; case 50: sehir("sehirler\\nevsehir.txt"); break; case 51: sehir("sehirler\\nigde.txt"); break;
		  case 52: sehir("sehirler\\ordu.txt"); break; case 53: sehir("sehirler\\rize.txt"); break; case 54: sehir("sehirler\\sakarya.txt"); break;
		  case 55: sehir("sehirler\\samsun.txt"); break; case 56: sehir("sehirler\\siirt.txt"); break; case 57: sehir("sehirler\\sinop.txt"); break;
		  case 58: sehir("sehirler\\sivas.txt"); break; case 59: sehir("sehirler\\tekirdag.txt"); break; case 60: sehir("sehirler\\tokat.txt"); break;
		  case 61: sehir("sehirler\\trabzon.txt"); break; case 62: sehir("sehirler\\tunceli.txt"); break; case 63: sehir("sehirler\\sanliurfa.txt"); break;
		  case 64: sehir("sehirler\\usak.txt"); break; case 65: sehir("sehirler\\van.txt"); break; case 66: sehir("sehirler\\yozgat.txt"); break;
		  case 67: sehir("sehirler\\zonguldak.txt"); break; case 68: sehir("sehirler\\aksaray.txt"); break; case 69: sehir("sehirler\\bayburt.txt"); break;
		  case 70: sehir("sehirler\\karaman.txt"); break; case 71: sehir("sehirler\\kirikkale.txt"); break; case 72: sehir("sehirler\\batman.txt"); break;
		  case 73: sehir("sehirler\\sirnak.txt"); break; case 74: sehir("sehirler\\bartin.txt"); break; case 75: sehir("sehirler\\ardahan.txt"); break;
		  case 76: sehir("sehirler\\igdir.txt"); break; case 77: sehir("sehirler\\yalova.txt"); break; case 78: sehir("sehirler\\karabuk.txt"); break;
		  case 79: sehir("sehirler\\kilis.txt"); break; case 80: sehir("sehirler\\osmaniye.txt"); break; case 81: sehir("sehirler\\duzce.txt"); break;  
	
		}
	}
	int yorumlar(int b){
		switch(b)
		{
		  case 1: yorumyap("sehirler\\adana.txt"); break; case 2: yorumyap("sehirler\\adiyaman.txt"); break; case 3: yorumyap("sehirler\\afyon.txt"); break;
		  case 4: yorumyap("sehirler\\agri.txt"); break; case 5: yorumyap("sehirler\\amasya.txt"); break; case 6: yorumyap("sehirler\\ankara.txt"); break;
		  case 7: yorumyap("sehirler\\antalya.txt"); break; case 8: yorumyap("sehirler\\artvin.txt"); break; case 9: yorumyap("sehirler\\aydin.txt"); break;
		  case 10: yorumyap("sehirler\\balikesir.txt"); break; case 11: yorumyap("sehirler\\bilecik.txt"); break; case 12: yorumyap("sehirler\\bingol.txt"); break;
		  case 13: yorumyap("sehirler\\bitlis.txt"); break; case 14: yorumyap("sehirler\\bolu.txt"); break; case 15: yorumyap("sehirler\\burdur.txt"); break;
		  case 16: yorumyap("sehirler\\bursa.txt"); break; case 17: yorumyap("sehirler\\canakkale.txt"); break; case 18: yorumyap("sehirler\\cankiri.txt"); break;
		  case 19: yorumyap("sehirler\\corum.txt"); break; case 20: yorumyap("sehirler\\denizli.txt"); break; case 21: yorumyap("sehirler\\diyarbakir.txt"); break;
		  case 22: yorumyap("sehirler\\edirne.txt"); break; case 23: yorumyap("sehirler\\elazig.txt"); break; case 24: yorumyap("sehirler\\erzincan.txt"); break; 
		  case 25: yorumyap("sehirler\\erzurum.txt"); break; case 26: yorumyap("sehirler\\eskisehir.txt"); break; case 27: yorumyap("sehirler\\gaziantep.txt"); break; 
		  case 28: yorumyap("sehirler\\giresun.txt"); break; case 29: yorumyap("sehirler\\gumushane.txt"); break; case 30: yorumyap("sehirler\\hakkari.txt"); break; 
		  case 31: yorumyap("sehirler\\hatay.txt"); break; case 32: yorumyap("sehirler\\isparta.txt"); break; case 33: yorumyap("sehirler\\mersin.txt"); break; 
		  case 34: yorumyap("sehirler\\istanbul.txt"); break; case 35: yorumyap("sehirler\\izmir.txt"); break; case 36: yorumyap("sehirler\\kars.txt"); break; 
		  case 37: yorumyap("sehirler\\kastamonu.txt"); break; case 38: yorumyap("sehirler\\kayseri.txt"); break; case 39: yorumyap("sehirler\\kirklareli.txt"); break; 
		  case 40: yorumyap("sehirler\\kirsehir.txt"); break; case 41: yorumyap("sehirler\\kocaeli.txt"); break; case 42: yorumyap("sehirler\\konya.txt"); break; 
		  case 43: yorumyap("sehirler\\kutahya.txt"); break; case 44: yorumyap("sehirler\\malatya.txt"); break; case 45: yorumyap("sehirler\\manisa.txt"); break; 
		  case 46: yorumyap("sehirler\\kahramanmaras.txt"); break; case 47: yorumyap("sehirler\\mardin.txt"); break; case 48: yorumyap("sehirler\\mugla.txt"); break;
		  case 49: yorumyap("sehirler\\mus.txt"); break; case 50: yorumyap("sehirler\\nevsehir.txt"); break; case 51: yorumyap("sehirler\\nigde.txt"); break;
		  case 52: yorumyap("sehirler\\ordu.txt"); break; case 53: yorumyap("sehirler\\rize.txt"); break; case 54: yorumyap("sehirler\\sakarya.txt"); break;
		  case 55: yorumyap("sehirler\\samsun.txt"); break; case 56: yorumyap("sehirler\\siirt.txt"); break; case 57: yorumyap("sehirler\\sinop.txt"); break;
		  case 58: yorumyap("sehirler\\sivas.txt"); break; case 59: yorumyap("sehirler\\tekirdag.txt"); break; case 60: yorumyap("sehirler\\tokat.txt"); break;
		  case 61: yorumyap("sehirler\\trabzon.txt"); break; case 62: yorumyap("sehirler\\tunceli.txt"); break; case 63: yorumyap("sehirler\\sanliurfa.txt"); break;
		  case 64: yorumyap("sehirler\\usak.txt"); break; case 65: yorumyap("sehirler\\van.txt"); break; case 66: yorumyap("sehirler\\yozgat.txt"); break;
		  case 67: yorumyap("sehirler\\zonguldak.txt"); break; case 68: yorumyap("sehirler\\aksaray.txt"); break; case 69: yorumyap("sehirler\\bayburt.txt"); break;
		  case 70: yorumyap("sehirler\\karaman.txt"); break; case 71: yorumyap("sehirler\\kirikkale.txt"); break; case 72: yorumyap("sehirler\\batman.txt"); break;
		  case 73: yorumyap("sehirler\\sirnak.txt"); break; case 74: yorumyap("sehirler\\bartin.txt"); break; case 75: yorumyap("sehirler\\ardahan.txt"); break;
		  case 76: yorumyap("sehirler\\igdir.txt"); break; case 77: yorumyap("sehirler\\yalova.txt"); break; case 78: yorumyap("sehirler\\karabuk.txt"); break;
		  case 79: yorumyap("sehirler\\kilis.txt"); break; case 80: yorumyap("sehirler\\osmaniye.txt"); break; case 81: yorumyap("sehirler\\duzce.txt"); break;  
	
		}
	}
int yorumyap(char a[25])
	{
	
    FILE *yorum = fopen(a, "a");//*dosyay� metin eklenebilecek �ekilde a�t�k*//
    char isim[20];
	char yorumlar[500];
	printf("\tyorumlar�n�z:");
	
	fgets(yorumlar,500,stdin);
	fputs(yorumlar,yorum);
	fclose(yorum);
	return 0;
	}
void oneriler()//* kullan�c�dan g�r�� ve �nerilerini okuyan fonksiyon*//
	{
	FILE *oneri;
	char yorumlar[500];
	oneri=fopen("oneriler.txt","a");
	fgets(yorumlar,500,stdin);
	fputs(yorumlar,oneri);
	printf("\n");
	fclose(oneri);
	}
void onerilerebak()//* yaz�lan g�r�� ve �nerilerin oldu�u dosyay� ekrana yazan fonksiyon*//
	{
	char ch;
	FILE *oneri;
	char yorumlar[500];
	oneri=fopen("oneriler.txt","r");
	system("CLS");
	printf("daha �nce yap�lan �neri ve g�r��ler:\n ");
	
	ch=fgetc(oneri);
		while(ch!=EOF)
			{
			printf("%c",ch);
			ch=fgetc(oneri);
			}	
		fclose(oneri);

	}
void laptopmenu()
	{ int en=80,boy=11,i,k,j;
		/* Girilen boy oran� kadar d�necek */
    for (i = 0; i < boy; i++)
    {
        /* Her bir d�ng�de bir daha artarak sa�a kaymas�n� sa�layacak */
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        /* Kod derinli�ine g�re o sat�rdaki y�ld�zlar� yani endeki y�ld�lar� basacak */
        for (k = 1; k < en/2; ++k)
        {
            printf("\\*");
        }

        printf("*\n\t\t\t");
    }

}
void cikis(){

    MessageBox(0,"ba�ar�yla ��k�� yap�ld�","Dikkat!",0); //*��k�� yap�ld���nda ekrana uyar�*//
    

}
	
