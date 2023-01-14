#include <stdio.h>
#include <stdlib.h>

int onsekiz_alti_indirim(int toplam){
return((toplam)-(toplam*25/100));
}
int main() {

int cay;
    int kahve;
int meyve_suyu;
int kola;
int soguk_cay;
int gazoz;
int kek;
int simit;
int pasta;
int pogaca;
int kurabiye;
int omlet;
int menemen;
int sosisli;
int kahvalti_tabagi;
int patso;
int sandvic;
int hamburger;
int tost;
int i;
int j;
int x[2][5]={1,3,5,7,9, 2,4,6,8,10 };
    float toplam;
char tekrar;
int yas;
int masa;
float onsekizalti_indirim;


do {

printf("Cay adedini giriniz:");
scanf("%d", &cay);

printf("Kahve adedini giriniz:");
scanf("%d", &kahve);

printf("Meyve suyu adedini giriniz:");
scanf("%d", &meyve_suyu);

printf("Kola adedini giriniz:");
scanf("%d", &kola);

printf("Soguk cay adedini giriniz:");
scanf("%d", &soguk_cay);

printf("Gazoz adedini giriniz:");
scanf("%d", &gazoz);

printf("Kek adedini giriniz:");
scanf("%d", &kek);

printf("Simit adedini giriniz:");
scanf("%d", &simit);

printf("Pasta adedini giriniz:");
scanf("%d", &pasta);

printf("Pogaca adedini giriniz:");
scanf("%d", &pogaca);

printf("Kurabiye adedini giriniz:");
scanf("%d", &kurabiye);

printf("Omlet adedini giriniz:");
scanf("%d", &omlet);

printf("Menemen adedini giriniz:");
scanf("%d", &menemen);

printf("Sosisli adedini giriniz:");
scanf("%d", &sosisli);

printf("Kahvalti tabagi adedini giriniz:");
scanf("%d", &kahvalti_tabagi);

printf("Patso adedini giriniz:");
scanf("%d", &patso);

printf("Sandvic adedini giriniz:");
scanf("%d", &sandvic);

printf("Hamburger adedini giriniz:");
scanf("%d", &hamburger);

printf("Tost adedini giriniz:");
scanf("%d", &tost);

toplam=(cay*2.5)+(kahve*4)+(meyve_suyu*3)+(kola*4.5)+(soguk_cay*4)+(gazoz*3.5)+(kek*5)+(simit*3)+(pasta*15)+(pogaca*4)+(kurabiye*4.5)+(omlet*12.5)+(menemen*13)+(sosisli*7)+(kahvalti_tabagi*25)+(patso*6.5)+(sandvic*6)+(hamburger*10)+(tost*5.5);
onsekizalti_indirim=onsekiz_alti_indirim(toplam);
printf("18 yas altina yuzde 25 indirimimiz vardir. Lutfen yasinizi giriniz:\n");
scanf("%d", &yas);
if (yas<18){
    printf("Toplam ucret:%.2f\n",onsekizalti_indirim);
}
else{

printf("Toplam ucret: %.2f\n",toplam);
}

     
      printf("Masada yemek istiyorsaniz 1'e, paket yaptiracaksaniz herhangi bir numaraya basiniz:");
scanf("%d", &masa);

    switch(masa)
    {
   
   
    case 1:

printf("Siparisiniz alinmistir. Uygun masalarimiz asagida gozukmektedir:\n");
 
for(i=0; i<2; i++)
{
for(j=0; j<5; j++)

printf("%4d", x[i][j]);

  printf("\n");

}

    break;
   
   
default:

    printf("Siparisiniz alinmistir\n");
    break;
   

   
   
   }
     
     
     
     

printf("Tekrar siparis etmek icin t, cikmak icin t harici herhangi bir deger giriniz:\n");
do

{
scanf("%c",&tekrar);

}

while(tekrar=='\n');

}

while(tekrar=='t');

return 0;
}


