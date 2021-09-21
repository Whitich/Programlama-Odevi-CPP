#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
#include<time.h>
	
	
	int main()
{
    float r , cevre, alan, kenar, kenar2, kenar3, hacim, uzunkenar, kisakenar ,daire ,paralel1 ,paralel2 ,yukseklik ,kosegen1 ,kosegen2;
    int secim ;
    
    printf("Programa hosgeldiniz.\nBu program ilk asamada sizin icin rastgele sifre uretir.\nIkinci asamada geometrik cisimlerin cevre, alan, hacim hesabini yapar.Ve bellek adreslerini gosterir.\n\n");
    

    printf("#############################################################\n");
    printf("#                    _____________________                  #\n");
    printf("#                   |                     |                 #\n");
    printf("#                   |                     |                 #\n");
    printf("#                   |               |     |                 #\n");
    printf("#                   |        _______|     |                 #\n");
    printf("#                   |                     |                 #\n");
    printf("#                   |                     |                 #\n");
    printf("#                   |_______              |                 #\n");
    printf("#                           |             |                 #\n");
    printf("#                           |             |                 #\n");
    printf("#                           |             |                 #\n");
    printf("#                           |             |                 #\n");
    printf("#                           |             |                 #\n");
    printf("#                           |_____________|                 #\n");
    printf("#                                                           #\n");
    printf("#############################################################\n\n");
    
    
    
    //Rastgele kucuk harf, buyuk harf ve sayi ile rastgele sifre uretici algoritmasi.
    
    srand((unsigned int)(time(NULL)));
    int i;
    char sifre[12];
    
    	printf("Rastgele uretilen sifreniz: ");
    
    for(i=0; i<4; i++)
    {
    sifre[i] = (rand() %10);
    	
	char buyukharf = 'A'+(rand()%26);
    sifre[i+2] = buyukharf;
    	
    char kucukharf = 'a' +(rand()%26);
   	sifre[i+3] = kucukharf;
    	
    	printf("%d%c%c",sifre[i], sifre[i + 2], sifre[i + 3]);
	}
    	printf("\n\n");
    

    printf("#############################################################\n");
    printf("#                    ____________                           #\n");
    printf("#                    | ________ |                           #\n");
    printf("#                    ||        ||                           #\n");
    printf("#                    ||        ||                           #\n");
    printf("#                    ||        ||                           #\n");
    printf("#                    ||        ||                           #\n");
    printf("#                 ** ||        || **                        #\n");
    printf("#                  **||        ||**                         #\n");
    printf("#                   **|        |**                          #\n");
    printf("#                    **        **                           #\n");
    printf("#                     **      **                            #\n");
    printf("#                      **    **                             #\n");
    printf("#                       **  **                              #\n");
    printf("#                        ****                               #\n");
    printf("#                         **                                #\n");
    printf("#                                                           #\n");
    printf("#############################################################\n\n");
    
    //Asagida secilebilecek secenekleri sundum rakamlardan birini yazip enter yapinca ilgili sorulari soruyor.
    
   		printf("Asagidakilerden birinini secip numarasini giriniz.\n\n");
    	printf("Daire icin 1 e basiniz.\n");
    	printf("Kare icin 2 ye basiniz.\n");
    	printf("Dikdortgen icin 3 e basiniz.\n");
    	printf("Yamuk icin 4 e basiniz.\n");
    	printf("Paralelkenar icin 5 e basiniz.\n");
    	printf("Eskenar dortgen icin 6 ya basiniz.\n");
    	printf("Kure icin 7 ye basiniz.\n");
    	printf("Kup icin 8 e basiniz.\n");
    	printf("Dikdortgenler prizmasi icin 9 a basiniz.\n");
    	printf("Bellek adreslerini gormek icin 1 den 9 a kadar olan sayiler disinda bir sey giriniz.\n\n");
    	printf("#############################################################\n\n");
	
	
	
	// kullanicidan sececegi sayi, secenek aliniyor. Switch case calisiyor.
		scanf("%d",&secim);
    
    switch(secim)
    
    //Kullanici 1 e bastiginda daire seciliyor ve gerekli olcular aliniyor.
	{
    case 1:
		printf("Daire secili\n");
    	printf("Yaricapi girin :");
        scanf("%f", &r);
    
    //Kullanicinin girdigi olcunun 0 dan buyuk olup olmadýgýna bakýlýyor. Eger 0 dan buyukse sonuc hesaplanip ekrana veriliyor. Eger 0 dan kucukse yanlis olcu girildi uyarýsý cikiyor.
    if(r>0)
	{
    cevre=2*pi*r;
    alan=pi*r*r;
    
    	printf ("Cevre olcusu : %.3f Alan olcusu : %.3f \n"  , cevre, alan );
	}
    else
	{
    	printf("Gecerli bir yaricap giriniz\n");	
	}
    break;
    	
    //Kullanici 2 ye bastiginda kare seciliyor ve gerekli olcular aliniyor.
    case 2:
    	printf("Kare secili\n");
    	printf("Kenar giriniz\n");
    		
    	scanf("%f",&kenar);
    		
    //Kullanicinin girdigi olcunun 0 dan buyuk olup olmadýgýna bakýlýyor. Eger 0 dan buyukse sonuc hesaplanip ekrana veriliyor. Eger 0 dan kucukse yanlis olcu girildi uyarýsý cikiyor.
    if(kenar>0)
	{
    alan=kenar*kenar;
    cevre=kenar*4;
    		
		printf ("Cevre olcusu : %.2f Alan olcusu : %.2f \n"  , cevre, alan );		
	}
	else
	{
		printf("Gecerli kenar olcusu giriniz.\n");
	}
    break;
    		
    //Kullanici 3 e bastiginda didorgen seciliyor ve gerekli olcular aliniyor.	
    case 3:
    	printf("Dikdortgen secili.\n");
    		
   		printf("Kisa kenari giriniz.\n");
   		scanf("%f",&kisakenar);
    		
   		printf("Uzun kenari giriniz.\n");
   		scanf("%f",&uzunkenar);
		
	//Kullanicinin girdigi olculerin 0 dan buyuk olup olmadýgýna bakýlýyor. Eger 0 dan buyukse sonuc hesaplanip ekrana veriliyor. Eger 0 dan kucukse yanlis olcu girildi uyarýsý cikiyor.
	if(kisakenar>0 & uzunkenar>0)
	{
	alan=kisakenar*uzunkenar;
	cevre=(kisakenar*2) + (uzunkenar*2);
		
		printf ("Cevre olcusu : %.2f Alan olcusu : %.2f \n"  , cevre, alan );	
	}
	else
	{
		printf("Gecerli kenar degerleri giriniz.\n");
	}
	break;	
		
	//Kullanici 4 e bastiginda yamuk seciliyor ve gerekli olcular aliniyor.
	case 4:
		printf("Yamuk sectiniz.");
			
		printf("Birbirine paralel kenarlardan 1. sini giriniz.\n");
		scanf("%f",&paralel1);
			
		printf("Birbirine paralel kenarlardan 2. sini giriniz.\n");
		scanf("%f",&paralel2);
			
		printf("Paralel kenarlar arasindaki dikmeyi (yuksekligi)giriniz.\n");
		scanf("%f",&yukseklik);
			
			
	//Kullanicinin girdigi olculerin 0 dan buyuk olup olmadýgýna bakýlýyor. Eger 0 dan buyukse sonuc hesaplanip ekrana veriliyor. Eger 0 dan kucukse yanlis olcu girildi uyarýsý cikiyor.	
	if(paralel1>0 & paralel2>0 & yukseklik>0)
	{
	alan=(paralel1+paralel2)/2 * yukseklik;
	printf("Alan olcusu: %.2f\n",alan);		
	}	
	else
	{
		printf("Gecerli uzunluk giriniz.\n");
	}
	break;
		
	//Kullanici 5 e bastiginda paralelkenar seciliyor ve gerekli olcular aliniyor.
	case 5:
		printf("Paralelkenari sectiniz.\n");
			
		printf("Herhangi bir kenari yaziniz.\n");
		scanf("%f",&kenar);
			
		printf("Sectiginiz kenara ait yuksekligi yaziniz.\n");
		scanf("%f",&yukseklik);
			
	//Kullanicinin girdigi olculerin 0 dan buyuk olup olmadýgýna bakýlýyor. Eger 0 dan buyukse sonuc hesaplanip ekrana veriliyor. Eger 0 dan kucukse yanlis olcu girildi uyarýsý cikiyor.
	if(kenar>0 & yukseklik>0)
	{
	alan=kenar*yukseklik;
		printf("Alan olcusu: %.2f",alan);
	}
	else
	{
		printf("Gecerli olculer giriniz.\n");
	}
	break;
		
	//Kullanici 6 ya bastiginda eskenar dortgen seciliyor ve gerekli olcular aliniyor.	
	case 6:
		printf("Eskenar dortgen sectiniz.\n");
			
		printf("1. kosegeni giriniz.\n");
		scanf("%f",&kosegen1);
			
		printf("2. kosegen giriniz.\n");
		scanf("%f",&kosegen2);
		
	//Kullanicinin girdigi olculerin 0 dan buyuk olup olmadýgýna bakýlýyor. Eger 0 dan buyukse sonuc hesaplanip ekrana veriliyor. Eger 0 dan kucukse yanlis olcu girildi uyarýsý cikiyor.	
	if(kosegen1>0 & kosegen2>0)
	{
	alan=(kosegen1*kosegen2)/2;
		printf("Alan olcusu: %.2f\n",alan);
	}	
	else
	{
		printf("Gecerli olcu giriniz.\n");
	}

   	break;
    	
    //Kullanici 7 ye bastiginda kure seciliyor ve gerekli olcular aliniyor.
    case 7:
    	printf("Kure sectiniz.\n");
    		
    	printf("yaricapi giriniz.\n");
   		scanf("%f",&r);
    		
    //Kullanicinin girdigi olcunun 0 dan buyuk olup olmadýgýna bakýlýyor. Eger 0 dan buyukse sonuc hesaplanip ekrana veriliyor. Eger 0 dan kucukse yanlis olcu girildi uyarýsý cikiyor.
    if (r>0)
	{
	alan=(4*r*r*r*pi)/3;
		printf("Alan olcusu: %.2f\n",alan);
	}
	else
	{
		printf("Gecerli olcu giriniz.\n");
	}
	break;
    	
	//Kullanici 8 e bastiginda kup seciliyor ve gerekli olcular aliniyor.
	case 8:
		printf("kup sectiniz\n");
			
		printf("kenar uzunlugunu giriniz.\n");
		scanf("%f",&kenar);
		
	//Kullanicinin girdigi olcunun 0 dan buyuk olup olmadýgýna bakýlýyor. Eger 0 dan buyukse sonuc hesaplanip ekrana veriliyor. Eger 0 dan kucukse yanlis olcu girildi uyarýsý cikiyor.	
	if(kenar>0)
	{
	alan=6*kenar*kenar;
	hacim=kenar*kenar*kenar;
			
		printf("Alan olcusu: %.2f Hacim olcusu: %.2f",alan , hacim);
	}	
	else
	{
		printf("Gecerli olcu giriniz.");
	}
	break;
				
	//Kullanici 9 a bastiginda dikdortgenler prizmasi seciliyor ve gerekli olcular aliniyor.
	case 9:
		printf("Dikdortgenler prizmasi sectiniz.\n");
		 
		printf("1. kenari giriniz.\n");
		scanf("%f",&kenar);
		 
		printf("2. kenari giriniz.\n");
		scanf("%f",&kenar2);
		 
		printf("3. kenari giriniz.\n");
		scanf("%f",&kenar3);
		 
	//Kullanicinin girdigi olculerin 0 dan buyuk olup olmadýgýna bakýlýyor. Eger 0 dan buyukse sonuc hesaplanip ekrana veriliyor. Eger 0 dan kucukse yanlis olcu girildi uyarýsý cikiyor.
	if(kenar>0 & kenar2>0 & kenar3>0)
	{
 	alan=2*(kenar*kenar2)+(kenar*kenar3)+(kenar2*kenar3);
	hacim=kenar*kenar2*kenar3;
		 	
		printf("Alan olcusu: %.2f Hacim olcusu: %.2f",alan ,hacim);
    }
	else
	{
		printf("Gecerli olcu giriniz.\n");
	}
	break;
	
	//Burada da bulunmayan bir secenek girildiginde Bellek adreslerini gösteriyor.
	default: 
		printf("Bellek adresleri:\n");
		printf("r icin: %x\n",&r);
		printf("cevre icin: %x\n",&cevre);
		printf("alan icin: %x\n",&alan);
		printf("kenar icin: %x\n",&kenar);
		printf("kenar2 icin: %x\n",&kenar2);
		printf("kenar3 icin: %x\n",&kenar3);
		printf("hacim icin: %x\n",&hacim);
		printf("uzunkenar: %x\n",&uzunkenar);
		printf("kisakenar: %x\n",&kisakenar);
		printf("daire icin: %x\n",&daire);
		printf("paralel1 icin: %x\n",&paralel1);
		printf("paralel2 icin: %x\n",&paralel2);
		printf("yukseklik icin: %x\n",&yukseklik);
		printf("kosegen1 icin: %x\n",&kosegen1);
		printf("kosgen2 icin: %x\n",&kosegen2);
		printf("secim icin: %x\n\n\n",&secim);
		
	break;
	
	}
	getch();
}
	
//b191200047 Mert Harmankaþý


