#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PI 3.141592653
#define GEZEGEN_SAYISI 8


const char *gezegen_isimleri[] = {
    "Merkur", "Venus", "Dunya", "Mars","Jupiter", "Saturn", "Uranus", "Neptun"
};

void menuyu_goster();
void serbest_dusme(double *g_ptr);
void yukari_atis(double *g_ptr);
void agirlik_deneyi(double *g_ptr);
void potansiyel_enerji(double *g_ptr);
void hidrostatik_basinc(double *g_ptr);
void arsimet_kaldirma(double *g_ptr);
void sarka_periyodu(double *g_ptr);
void ip_gerilmesi(double *g_ptr);
void asansor_deneyi(double *g_ptr);
void sonuclari_yazdir(double sonuc, char *birim, int gezegen_no);

int main() {


    double g_ivmeleri[GEZEGEN_SAYISI] = {3.7, 8.87, 9.81, 3.71, 24.79, 10.44, 8.69, 11.15};//merkür,venüs,dünya,mars,jüpiter,satürn,uranüs,neptün

    char bilim_insani[50];
    int secim = 0;

   printf("=========================================\n");
    printf("GUNES SISTEMI GEZEGENLERI UZAY SIMULASYONU\n");
   printf("=========================================\n");
    printf("\nBilim Insani Adini Giriniz: ");
    fgets(bilim_insani, 50, stdin) != NULL;
    while (secim != -1) {
        printf("\nSaygideger Bilim Insani %s, lutfen yapmak istediginiz deneyi seciniz:\n", bilim_insani);
        menuyu_goster();

        printf("\nSeciminiz (-1 cikis): ");
        scanf("%d", &secim);

        if (secim == -1) {
            printf("Simulasyon sonlandiriliyor. Sonraki calismalarinda basarilar %s\n", bilim_insani);
            break;
        }

        switch (secim) {
            case 1: serbest_dusme(g_ivmeleri);
             break;
            case 2: yukari_atis(g_ivmeleri);
             break;
            case 3: agirlik_deneyi(g_ivmeleri);
             break;
            case 4: potansiyel_enerji(g_ivmeleri);
             break;
            case 5: hidrostatik_basinc(g_ivmeleri);
             break;
            case 6: arsimet_kaldirma(g_ivmeleri);
             break;
            case 7: sarka_periyodu(g_ivmeleri);
             break;
            case 8: ip_gerilmesi(g_ivmeleri);
             break;
            case 9: asansor_deneyi(g_ivmeleri);
             break;
            default:

                printf("Hatali secim! Deneyi sonlandirmak istiyorsaniz -1, devam etmek istiyorsaniz 1 ile 9 arasindan secim yapiniz.\n");
        }
    }

    return 0;
}


void menuyu_goster() {
    printf("\n--- DENEY LISTESI ---\n");
    printf("1) Serbest Dusme Deneyi\n");
    printf("2) Yukari Atis Deneyi\n");
    printf("3) Agirlik Deneyi\n");
    printf("4) Kutlecekimsel Potansiyel Enerji Deneyi\n");
    printf("5) Hidrostatik Basinc Deneyi\n");
    printf("6) Arsimet Kaldirma Kuvveti Deneyi\n");
    printf("7) Basit Sarkac Periyodu Deneyi\n");
    printf("8) Sabit Ip Gerilmesi Deneyi\n");
    printf("9) Asansor Deneyi\n");
}


void sonuclari_yazdir(double sonuc, char *birim, int gezegen_no) {
       printf("%-7s -> Sonuc: %.3f %s\n", *(gezegen_isimleri + gezegen_no), sonuc, birim);  //pointer kullanýmý zorunlu tüm gezegenleri yazdýr
}

void serbest_dusme(double *g_ptr) {
    double t, h;
    printf("\nSERBEST DUSME DENEYI \n");
    printf("Gecen sureyi giriniz (s): ");
    scanf("%lf", &t);

    t = (t < 0) ? -t : t;

    printf("\nTum Gezegenler Icin Sonuclar:\n");        // h = 1/2 * g * t^2
    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
            h = 0.5 * (*(g_ptr + i)) * pow(t, 2);
        sonuclari_yazdir(h, "m", i);
    }
}


void yukari_atis(double *g_ptr) {
    double v0, h_max;
    printf("\nYUKARI ATIS DENEYI \n");
    printf("Firlatilma hizini giriniz (m/s): ");
    scanf("%lf", &v0);
    v0 = (v0 < 0) ? -v0 : v0;

    printf("\nTum Gezegenler Icin Maksimum Yukseklikler:\n");        // h_max = v0^2 / (2g)
    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        h_max = pow(v0, 2) / (2 * (*(g_ptr + i)));
        sonuclari_yazdir(h_max, "m", i);
    }
}

void agirlik_deneyi(double *g_ptr) {
    double m, G;
    printf("\nAGIRLIK DENEYI\n");
    printf("Cismin kutlesini giriniz (kg): ");
    scanf("%lf", &m);

    m = (m < 0) ? -m : m;

    printf("\nTum Gezegenler Icin Agirliklar:\n");   // G = m * g
    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        G = m * (*(g_ptr + i));
        sonuclari_yazdir(G, "Newton", i);
    }
}

void potansiyel_enerji(double *g_ptr) {
    double m, h, Ep;
    printf("\nKUTLECEKÝMSEL POTANSIYEL ENERJI DENEYI\n");
    printf("Cismin kutlesini giriniz (kg): ");
    scanf("%lf", &m);
    printf("Yuksekligi giriniz (m): ");
    scanf("%lf", &h);

    m = (m < 0) ? -m : m;

    h = (h < 0) ? -h : h;

    printf("\nTum Gezegenler Icin Potansiyel Enerjiler:\n");   // Ep = m * g * h
    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
           Ep = m * (*(g_ptr + i)) * h;
        sonuclari_yazdir(Ep, "Joule", i);
    }
}

void hidrostatik_basinc(double *g_ptr) {
    double rho, h, P;
    printf("\nHIDROSTATIK BASINC DENEYI\n");
    printf("Sivinin birim hacmindeki kutlesini giriniz (kg/m3): ");
    scanf("%lf", &rho);
    printf("Derinligi giriniz (m): ");
    scanf("%lf", &h);

    rho = (rho < 0) ? -rho : rho;

    h = (h < 0) ? -h : h;

    printf("\nTum Gezegenler Icin Hidrostatik Basinc:\n");      // P = rho * g * h
    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        P = rho * (*(g_ptr + i)) * h;
        sonuclari_yazdir(P, "Pascal", i);
    }
}

void arsimet_kaldirma(double *g_ptr) {
    double rho, V, Fk;
    printf("\nARSIMET KALDIRMA KUVVETI DENEYI\n");
    printf("Sivinin birim hacmindeki kutlesini giriniz (kg/m3): ");
    scanf("%lf", &rho);
    printf("Batan hacmi giriniz (m3): ");
    scanf("%lf", &V);

    rho = (rho < 0) ? -rho : rho;

    V = (V < 0) ? -V : V;

    printf("\nTum Gezegenler Icin Kaldirma Kuvvetleri:\n");         //Fk = rho * g * V
    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        Fk = rho * (*(g_ptr + i)) * V;
        sonuclari_yazdir(Fk, "Newton", i);

    }
}

void sarka_periyodu(double *g_ptr) {
    double L, T;
    printf("\nBASIT SARKAC PERIYODU DENEYI\n");
    printf("Sarkacin uzunlugunu giriniz (m): ");
    scanf("%lf", &L);

    L = (L < 0) ? -L : L;

    printf("\nTum Gezegenler Icin Periyotlar:\n");         //T = 2 * PI * sqrt(L/g)
    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        T = 2 * PI * sqrt(L / (*(g_ptr + i)));
        sonuclari_yazdir(T, "s", i);
    }

}

void ip_gerilmesi(double *g_ptr) {
    double m, T;
    printf("\nSABIT IP GERILMESI DENEYI \n");
    printf("Cismin kutlesini giriniz (kg): ");
    scanf("%lf", &m);


    m = (m < 0) ? -m : m;

    printf("\nTum Gezegenler Icin Ip Gerilmeleri:\n");         // T = m * g
    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        T = m * (*(g_ptr + i));
        sonuclari_yazdir(T, "Newton", i);

    }

}


void asansor_deneyi(double *g_ptr) {
    double m, a, N;
    int durum;

    printf("\nASANSOR DENEYI ---\n");
    printf("Cismin kutlesini giriniz (kg): ");
    scanf("%lf", &m);
    printf("Asansorun ivmesini giriniz (m/s2): ");
    scanf("%lf", &a);


    m = (m < 0) ? -m : m;

    a = (a < 0) ? -a : a;

    printf("Durum Seciniz:\n1. Yukari ivmelenerek hizlaniyor veya asagi ivmelenerek yavasliyor (g + a)\n");

    printf("2. Asagi ivmelenerek hizlaniyor veya yukari ivmelenerek yavasliyor (g - a)\n");

    printf("Secim: ");
    scanf("%d", &durum);

    printf("\nTum Gezegenler Icin Etkin Agirliklar:\n");
    for (int i = 0; i < GEZEGEN_SAYISI; i++) {
        double g = *(g_ptr + i);

        if (durum == 1) {       //N = m(g + a)
            N = m * (g + a);
        } else {                // N = m(g - a)
            N = m * (g - a);
        }
        sonuclari_yazdir(N, "Newton", i);
    }
}
