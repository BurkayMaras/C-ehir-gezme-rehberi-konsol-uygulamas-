#include <stdio.h>
#include<windows.h>
#include <locale.h>
struct giris{ //Kuayýt olacak kullanýcýya ait bilgilerin düzenli bir yapý içerisinde toplanmasý
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
	
	
	
	
		 //Kullanýcý adý ve þifre ile uygulamaya giriþ
			printf("\t\t\t\t\t====> Kullanýcý adý:"); scanf("%s",uye1.k_adi);
			printf("\t\t\t\t\t====> Þifre:");
			  for (i = 0; 1; i++)
    {
        ch = getch();//þifrenin yýldýz þeklinde ekranda gözükmesi
        if (ch != 13)
        {
            uye1.sifre[i] = ch;
            printf("*");
        }
        if (ch == 13)
        {
            break;
        }
    
    }			//Girilen kullanýcý adý ve þifre verileririnin admin hesabý ya da yeni kayýt olunan hesap ile uyumunun sorgusu, tespiti
			if(((strcmp(uye2.sifre,uye1.sifre)==0)||(strcmp("admin",uye1.sifre)==0))&&((strcmp(uye2.k_adi,uye1.k_adi)==0)||(strcmp("admin",uye1.k_adi)==0)))
			{ 
    while (a==1) { system("CLS"); //*uygulama ana menüsü*//
    printf("\n\t\t\t*************************************o****************************************\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t*Merhaba! Uygulamamýza hoþgeldiniz. Lütfen yapmak istediðiniz iþlemi seçiniz.*\n");
    printf("\t\t\t*Bölge üzerinden þehir seç(1)                                                *\n");
    printf("\t\t\t*Bütün þehirleri listele(2)                                                  *\n");
    printf("\t\t\t*Bir þehire yorum eklemek için:(3)                                           *\n");
    printf("\t\t\t*Geliþmemize yardým edin! Görüþ ve öneri yazmak için:(4)                     *\n");
    printf("\t\t\t*Sizden gelenler:(5)                                                         *\n");
    printf("\t\t\t*Bilgilerim:(6)                                                              *\n");
    printf("\t\t\t*Çýkýþ:(7)                                                                   *\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t*                                                                            *\n");
    printf("\t\t\t"); laptopmenu();
    scanf("%d", &secim);

        switch (secim){//bölgeye göre seçim yapma*//
            case 1:
            system("CLS");
            printf("\n\t\t\t\t\t***************************************\n");
            printf("\n\t\t\t\t\tListelemek istediðiniz bölgeyi seçiniz:\n");
            printf("\n\t\t\t\t\t========>Akdeniz Bölgesi (1)\n");
            printf("\t\t\t\t\t========>Ege Bölgesi (2)\n");
            printf("\t\t\t\t\t========>Ýç Anadolu Bölgesi (3)\n");
            printf("\t\t\t\t\t========>Karadeniz Bölgesi (4)\n");
            printf("\t\t\t\t\t========>Güneydoðu Anadolu Bölgesi (5)\n");
            printf("\t\t\t\t\t========>Marmara Bölgesi (6)\n");
            printf("\t\t\t\t\t========>Doðu Anadolu Bölgesi (7)\n");
            printf("\n\t\t\t\t\t***************************************\n");
            scanf("%d",&x);
            system("CLS");
            bolge(x);
            
            break;
            case 2: //*bütün þehirleri listele
            sehir("bütünsehirler.txt");//*bütün þehirleri listeleyip kullanýcýdan seçimini al*//
            scanf("%d",&secim);
            system("CLS");//*önceki kýsýmlar cmdden silinir*//
            sehirler(secim);//*sehirlerin listelendigi fonksiyon çalýþtýrýlýr ve bilgiler ekrana yazdýrýlýr*//
            break;
            case 3://* bir þehire yorum ekle
			sehir("bütünsehirler.txt"); scanf("%d",&x); system("CLS"); yorumlar(x); //* seçilen þehire göre yorumlar fonksiyonu çalýþtýrýlýr ve istenen þehire yorum eklenir.
            break;
            case 4://* görüþ ve öneri ekle
			 oneriler(); system("CLS"); printf("görüþ ve önerilerinizi yazýnýz:\n");  break; //* görüþ ve öneri yazmak için yazýlan fonksiyon, bütün görüþ ve öneriler ayný dosyaya yazýlýr ve istendiðinde açýlýr*//
            case 5: //* önerileri görüntüle
			onerilerebak(); break;//* yazýlan görüþ ve önerilerin olduðu dosyayý ekrana yazan fonksiyon çalýþtýrýlýr*//
            case 6://*bilgilerimi görüntüle
            printf("\t\t\t\t\t*******************************************");
            printf("\n\t\t\t\t\tAdým:%s",uye1.ad);
            printf("\n\t\t\t\t\tSoyadým:%s",uye1.soyad);
            printf("\n\t\t\t\t\tDoðum tarihim:%d.%d.%d",uye1.d_gunu,uye1.d_ayi,uye1.d_yili);
            printf("\n\t\t\t\t\tDogdugum sehir:%s",uye1.d_yeri);
            printf("\n\t\t\t\t\tBilgilerinizi güncellemek için 1'e  basiniz.\n");
            printf("\t\t\t\t\t*******************************************");
			scanf("%d",&sec2);
            
            if (sec2==1){ //Girilmiþ olan kiþisel bilgilerin güncellenme süreci
            printf("\t\t\t\t\tBilgi güncelleme bölümüne hoþ geldiniz.\n");
			printf("\t\t\t\t\tYeni Adýnýz:"); scanf("%s",uye1.ad);
			printf("\t\t\t\t\tYeni Soyadýnýz:"); scanf("%s",uye1.soyad);
			printf("\t\t\t\t\tAyýn kaçýnda doðdunuz:"); scanf("%d",&uye1.d_gunu);
			while (uye1.d_gunu>31)
				{printf("\t\t\t\t\tlütfen geçerli bir tarih giriniz!:\n");
				scanf("%d",&uye1.d_gunu);
				}
			printf("\t\t\t\t\tKaçýncý ayda doðdunuz:"); scanf("%d",&uye1.d_ayi);
			while (uye1.d_ayi>12)
				{printf("\t\t\t\t\tlütfen geçerli bir tarih giriniz!:\n");
				scanf("%d",&uye1.d_ayi);
				}
			printf("\t\t\t\t\tHangi yýlda doðdunuz:"); scanf("%d",&uye1.d_yili);
				while (uye1.d_yili>2020||uye1.d_yili<1900)
				{printf("\t\t\t\t\tlütfen geçerli bir tarih giriniz!:\n");
				scanf("%d",&uye1.d_yili);
				}
			printf("\t\t\t\t\tDoðduðunuz þehir:"); scanf("%s",uye1.d_yeri);
			printf("\n\n"); system("CLS");
			printf("Hesabýnýz güncelleþtirildi.");
			}
            break;
            case 7:
            cikis();
            return 0;
            break;
        }
        printf("\nAna menüye dönmek için 1 e basýnýz.\n");
        printf("Uygulamadan çýkmak için 2 ye basýnýz.\n");
        scanf("%d" ,&a);
        if (a!=1&&a!=2){
		printf("lütfen geçerli bir seçim yapýnýz!\n"); scanf("%d",&a);
		}
    }
}
    	else{ 	
			printf("\nGirdiginiz bilgiler yanlis.");
	}
			
	
	
	printf("\nÇýkýþ yapmak için 1'e basýnýz.");  scanf("%d",&b); 

cikis();


    return 0;
}
int bolge(int b){ //*seçilen bölgeye göre istenilen dosyayý açan fonksiyon*//
	setlocale(LC_ALL,"Turkish");
	int sec;
	switch(b){case 1:
		sehir("bolgeler\\akdeniz.txt");
	    scanf("%d",&sec);
            system("CLS");//*önceki kýsýmlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		case 2:
		sehir("bolgeler\\ege.txt");
		scanf("%d",&sec);
            system("CLS");//*önceki kýsýmlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		case 3:
		sehir("bolgeler\\icanadolu.txt");
		scanf("%d",&sec);
            system("CLS");//*önceki kýsýmlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		case 4:
		sehir("bolgeler\\karadeniz.txt");
		scanf("%d",&sec);
            system("CLS");//*önceki kýsýmlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		case 5:
		sehir("bolgeler\\guneydogu.txt");
		scanf("%d",&sec);
            system("CLS");//*önceki kýsýmlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		case 6:
		sehir("bolgeler\\marmara.txt");
		scanf("%d",&sec);
            system("CLS");//*önceki kýsýmlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		case 7:
		sehir("bolgeler\\doguanadolu.txt");
		scanf("%d",&sec);
            system("CLS");//*önceki kýsýmlar cmdden silinir*//
            sehirler(sec);//*sehirlerin listelendigi fonksiyon
		break;
		default: printf("Böyle bir bölge bulunmamaktadýr!\n");
}
	}
void sehir(char m[25]) //*içine girilen dosya dizinini açan fonksiyon*//
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
	
    FILE *yorum = fopen(a, "a");//*dosyayý metin eklenebilecek þekilde açtýk*//
    char isim[20];
	char yorumlar[500];
	printf("\tyorumlarýnýz:");
	
	fgets(yorumlar,500,stdin);
	fputs(yorumlar,yorum);
	fclose(yorum);
	return 0;
	}
void oneriler()//* kullanýcýdan görüþ ve önerilerini okuyan fonksiyon*//
	{
	FILE *oneri;
	char yorumlar[500];
	oneri=fopen("oneriler.txt","a");
	fgets(yorumlar,500,stdin);
	fputs(yorumlar,oneri);
	printf("\n");
	fclose(oneri);
	}
void onerilerebak()//* yazýlan görüþ ve önerilerin olduðu dosyayý ekrana yazan fonksiyon*//
	{
	char ch;
	FILE *oneri;
	char yorumlar[500];
	oneri=fopen("oneriler.txt","r");
	system("CLS");
	printf("daha önce yapýlan öneri ve görüþler:\n ");
	
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
		/* Girilen boy oraný kadar dönecek */
    for (i = 0; i < boy; i++)
    {
        /* Her bir döngüde bir daha artarak saða kaymasýný saðlayacak */
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        /* Kod derinliðine göre o satýrdaki yýldýzlarý yani endeki yýldýlarý basacak */
        for (k = 1; k < en/2; ++k)
        {
            printf("\\*");
        }

        printf("*\n\t\t\t");
    }

}
void cikis(){

    MessageBox(0,"baþarýyla çýkýþ yapýldý","Dikkat!",0); //*çýkýþ yapýldýðýnda ekrana uyarý*//
    

}
	
