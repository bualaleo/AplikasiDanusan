#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void panggilMenu(void);
void Penghitungan();
void struk(void);
void setkamar();

    struct macammenu
    {
        int menuDanusan;
    };

    struct subtotal
    {
        int jmlbeli1, jmlbeli2, jmlbeli3, jmlbeli4, jmlbeli5, jmlbeli6, jmlbeli7,
        jmlbeli8, totalharga, bayar, kembalian;
    };

    struct danusan
    {
        int Bala_Bala, Risol, Mie_Telur, Smoke_Beef, Gado_Gado,
        Kue_Sus, Cheese_stick, Tahu ;

    };
    struct danusan menu_dan;
    struct subtotal sub;

    typedef struct kamar
    {
    int no_gedung;
    int no_lantai;
    int no_kamar;
    }kamar;
    kamar kamars [12][5][25];
    kamar kmr;

    char yakin;
    time_t ambil_waktu;

int main(){
    char a[]={"\n\n\n\n\n\n\t\t\t\t\tKelas CS-40-01\n\n\t\t\t Buala Leonardo Hulu\t\t 1302160009\n\t\t\t Reno Butar Butar\t\t 1302164025_"};
    int i;
    double j;
    for(i=0;a[i]!='_';i++){
        printf("%c",a[i]);
        for(j=0;j<=9990000;j++){
        }
    }
    printf("\n\n\t\t\t---------------------------------------------\n\n\n");
    printf("\t\t\t\t ");
    system("pause");
    system("cls");
    panggilMenu();
    return 0;
}

void panggilMenu(void) {
    int vendor;
    int menuDanusan;
    printf("\n\n\n\t\t\t==================================================================\n");
    printf("\t\t\t=========   Selamat datang di Program Vendor Danusan    ========== \n");
    printf("\t\t\t==================================================================\n\n");
    printf("\n\t\t\t\t\t1. Vendor Danusan di Lodaya \n");
    printf("\n\t\t\t\t\t2. Vendor Danusan di Soekarno-Hatta \n");
    printf("\n\t\t\t\t\t3. Vendor Danusan di Cimahi \n");
    printf("\t\t\t__________________________________________________________________\n");
    printf("\n\t\t\t\tSilahkan pilih Vendor Danusan yang ingin anda pesan : ");
    scanf("%d",&vendor);
    printf("\n\t\t\t\t");
    system("pause");
    system("cls");

    switch (vendor) {
        case 1 :
        printf ("\n\t\t\t\t\tVendor Danusan di Lodaya \n");
        printf ("\t\t\t\tSilakan pilih danusan yang anda sukai \n\n");
        printf("\t\t\t\t=====================================\n\n");
        printf("\t\t\t\t|No.| Danusan       |       Harga   |\t\t\n");
        printf("\t\t\t\t-------------------------------------\n");
        printf("\t\t\t\t| 1 | Bala-Bala     |       Rp.1500 |\t\t\n");
        printf("\t\t\t\t| 2 | Risol         |       Rp.2000 |\t\t\n");
        printf("\t\t\t\t| 3 | Mie Telur     |       Rp.2000 |\t\t\n");
        printf("\t\t\t\t| 4 | SmokeBeef     |       Rp.3000 |\t\t\n");
        printf("\t\t\t\t| 5 | Gado-Gado     |       Rp.3000 |\t\t\n");
        printf("\t\t\t\t| 6 | Kue Sus       |       Rp.2000 |\t\t\n");
        printf("\t\t\t\t| 7 | Cheese-stick  |       Rp.2000 |\t\t\n");
        printf("\t\t\t\t| 8 | Tahu          |       Rp.2500 |\t\t\n");
        printf("\n\t\t\t\t=====================================");
        printf("\n");
        printf("\n\t\t\t\t99. Struk Pembayaran\n\t\t\t\t55. Reset pilihan\n\t\t\t\t00.  Keluar\n");
        printf("\t\t\t\t=====================================\n");

    for (menuDanusan!=0;menuDanusan!=99;){
        printf("\n\t\t\t\tPilih yang anda inginkan: ");
        scanf("%d",&menuDanusan);

    switch  (menuDanusan) {
        case 1:
            printf("\n\t\t\t\t[1] Bala-Bala\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Bala_Bala);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli1=menu_dan.Bala_Bala*1500;
            break;
        case 2:
            printf("\n\t\t\t\t[2] Risol\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Risol);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli2=menu_dan.Risol*2000;
            break;
        case 3:
            printf("\n\t\t\t\t[3] Mie Telur\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Mie_Telur);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli3=menu_dan.Mie_Telur*2000;
            break;
        case 4:
            printf("\n\t\t\t\t[4] Smoke Beef\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Smoke_Beef);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli4=menu_dan.Smoke_Beef*3000;
            break;
        case 5:
            printf("\n\t\t\t\t[5] Gado-Gado\n ");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Gado_Gado);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli5=menu_dan.Gado_Gado*3000;
            break;
        case 6:
            printf("\n\t\t\t\t[6] Kue Sus\n ");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Kue_Sus);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli6=menu_dan.Kue_Sus*2000;
            break;
        case 7:
            printf("\n\t\t\t\t[7] Chesee-Stick\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Cheese_stick);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli7=menu_dan.Cheese_stick*2000;
            break;
        case 8:
            printf("\n\t\t\t\t[8] Tahu\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Tahu);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli8=menu_dan.Tahu*2500;
            break;
        case 99:
            printf("\n\t\t\t\tPenghitungan Struk Pembayaran");
            printf("\n\t\t\t\t");
            system("pause");
            system("cls");
            Penghitungan();
            break;
        case 55:
            system("cls");
            panggilMenu();
            break;
        case 00:
            peyakinan:
            printf("\n\t\t\t\tApakah anda yakin ingin keluar?\n\n\t\t\t\t[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
            printf("\t\t\t\tInput Pilihan \t\t\t\t");
            scanf("%s",&yakin);

            if (yakin=='Y'||yakin=='y')
            {
            system("cls");
            printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
            system("pause");
            exit(panggilMenu);
            }
            else if (yakin=='T'||yakin=='t')
            {
            system("cls");
            panggilMenu();
            }
            else
            {
            printf("\nKesalahan pilihan\n\n");
            system("pause");
            goto peyakinan;
            }
            break;
        default:
            printf("\t\t\t\tKesalahan pilihan, Pilihan no.%d tidak ada dalam daftar\n",menuDanusan);
            printf("\t\t\t\t- Silahkan pilih kembali\n");
            break;
            }
} break;
        case 2 :
        printf ("\n\t\t\t\t\tVendor Danusan di Soekarno-Hatta \n");
        printf ("\t\t\t\tSilakan pilih danusan yang anda sukai \n\n");
        printf("\t\t\t\t=====================================\n\n");
        printf("\t\t\t\t|No.| Danusan       |       Harga   |\t\t\n");
        printf("\t\t\t\t-------------------------------------\n");
        printf("\t\t\t\t| 1 | Bala-Bala     |       Rp.2000 |\t\t\n");
        printf("\t\t\t\t| 2 | Risol         |       Rp.2000 |\t\t\n");
        printf("\t\t\t\t| 3 | Mie Telur     |       Rp.2500 |\t\t\n");
        printf("\t\t\t\t| 4 | SmokeBeef     |       Rp.2500 |\t\t\n");
        printf("\t\t\t\t| 5 | Gado-Gado     |       Rp.2000 |\t\t\n");
        printf("\t\t\t\t| 6 | Kue Sus       |       Rp.1500 |\t\t\n");
        printf("\t\t\t\t| 7 | Cheese-stick  |       Rp.2000 |\t\t\n");
        printf("\t\t\t\t| 8 | Tahu          |       Rp.3000 |\t\t\n");
        printf("\n\t\t\t\t====================================");
        printf("\n");
        printf("\n\t\t\t\t99. Struk Pembayaran\n\t\t\t\t55. Reset pilihan\n\t\t\t\t00.  Keluar\n");
        printf("\t\t\t\t======================================\n");

    for (menuDanusan!=0;menuDanusan!=99;){
        printf("\n\t\t\t\tPilih yang anda inginkan: ");
        scanf("%d",&menuDanusan);

    switch  (menuDanusan) {
        case 1:
            printf("\n\t\t\t\t[1] Bala-Bala\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Bala_Bala);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli1=menu_dan.Bala_Bala*2000;
            break;
        case 2:
            printf("\n\t\t\t\t[2] Risol\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Risol);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli2=menu_dan.Risol*2000;
            break;
        case 3:
            printf("\n\t\t\t\t[3] Mie Telur\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Mie_Telur);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli3=menu_dan.Mie_Telur*2500;
            break;
        case 4:
            printf("\n\t\t\t\t[4] Smoke Beef\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Smoke_Beef);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli4=menu_dan.Smoke_Beef*2500;
            break;
        case 5:
            printf("\n\t\t\t\t[5] Gado-Gado\n ");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Gado_Gado);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli5=menu_dan.Gado_Gado*2000;
            break;
        case 6:
            printf("\n\t\t\t\t[6] Kue Sus\n ");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Kue_Sus);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli6=menu_dan.Kue_Sus*1500;
            break;
        case 7:
            printf("\n\t\t\t\t[7] Chesee-Stick\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Cheese_stick);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli7=menu_dan.Cheese_stick*2000;
            break;
        case 8:
            printf("\n\t\t\t\t[8] Tahu\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Tahu);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli8=menu_dan.Tahu*3000;
            break;
        case 99:
            printf("\t\t\t\tPenghitungan Struk Pembayaran");
            printf("\n\t\t\t\t");
            system("pause");
            system("cls");
            Penghitungan();
            break;
        case 55:
            system("cls");
            panggilMenu();
            break;
        case 00:
            pembenaran:
            printf("\t\t\t\tApakah anda yakin ingin keluar?\n\n\t\t\t\t[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
            printf("\t\t\t\tInput Pilihan \t\t\t\t");
            scanf("%s",&yakin);

            if (yakin=='Y'||yakin=='y')
            {
            system("cls");
            printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
            system("pause");
            exit(panggilMenu);
            }
            else if (yakin=='T'||yakin=='t')
            {
            system("cls");
            panggilMenu();
            }
            else
            {
            printf("\nKesalahan pilihan\n\n");
            system("pause");
            goto pembenaran;
            }
            break;
        default:
            printf("\t\t\t\tKesalahan pilihan, menu no.%d tidak ada dalam daftar\n",menuDanusan);
            printf("\t\t\t\t- Silahkan pilih kembali\n");
            break;
            }
} break;
        case 3 :
        printf("\n\t\t\t\t\tVendor Danusan di Cimahi \n");
        printf("\t\t\t\tSilakan pilih danusan yang anda sukai \n\n");
        printf("\t\t\t\t=====================================\n\n");
        printf("\t\t\t\t|No.| Danusan       |       Harga   |\t\t\n");
        printf("\t\t\t\t-------------------------------------\n");
        printf("\t\t\t\t| 1 | Bala-Bala     |       Rp.2000 |\t\t\n");
        printf("\t\t\t\t| 2 | Risol         |       Rp.2500 |\t\t\n");
        printf("\t\t\t\t| 3 | Mie Telur     |       Rp.2500 |\t\t\n");
        printf("\t\t\t\t| 4 | SmokeBeef     |       Rp.3500 |\t\t\n");
        printf("\t\t\t\t| 5 | Gado-Gado     |       Rp.2500 |\t\t\n");
        printf("\t\t\t\t| 6 | Kue Sus       |       Rp.2000 |\t\t\n");
        printf("\t\t\t\t| 7 | Cheese-stick  |       Rp.2000 |\t\t\n");
        printf("\t\t\t\t| 8 | Tahu          |       Rp.2000 |\t\t\n");
        printf("\n\t\t\t\t=====================================");
        printf("\n");
        printf("\n\t\t\t\t99. Struk Pembayaran\n\t\t\t\t55. Reset pilihan\n\t\t\t\t00.  Keluar\n");
        printf("\t\t\t\t=====================================\n");

    for (menuDanusan!=0;menuDanusan!=99;){
        printf("\n\t\t\t\tPilih yang anda inginkan: ");
        scanf("%d",&menuDanusan);

    switch  (menuDanusan) {
        case 1:
            printf("\n\t\t\t\t[1] Bala-Bala\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Bala_Bala);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli1=menu_dan.Bala_Bala*2000;
            break;
        case 2:
            printf("\n\t\t\t\t[2] Risol\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Risol);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli2=menu_dan.Risol*2500;
            break;
        case 3:
            printf("\n\t\t\t\t[3] Mie Telur\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Mie_Telur);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli3=menu_dan.Mie_Telur*2500;
            break;
        case 4:
            printf("\n\t\t\t\t[4] Smoke Beef\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Smoke_Beef);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli4=menu_dan.Smoke_Beef*3500;
            break;
        case 5:
            printf("\n\t\t\t\t[5] Gado-Gado\n ");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Gado_Gado);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli5=menu_dan.Gado_Gado*2500;
            break;
        case 6:
            printf("\n\t\t\t\t[6] Kue Sus\n ");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Kue_Sus);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli6=menu_dan.Kue_Sus*2000;
            break;
        case 7:
            printf("\n\t\t\t\t[7] Chesee-Stick\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Cheese_stick);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli7=menu_dan.Cheese_stick*2000;
            break;
        case 8:
            printf("\n\t\t\t\t[8] Tahu\n");
            printf("\t\t\t\tjumlah pesan =\t  ");
            scanf("%d",&menu_dan.Tahu);
            printf("\n\t\t\t\t=====================================\n");
            sub.jmlbeli8=menu_dan.Tahu*2000;
            break;
        case 99:
            printf("\t\t\t\tPenghitungan Struk Pembayaran");
            printf("\n\t\t\t\t");
            system("pause");
            system("cls");
            Penghitungan();
            break;
        case 55:
            system("cls");
            panggilMenu();
            break;
        case 00:
            keyakinan:
            printf("\t\t\t\tApakah anda yakin ingin keluar?\n\n\t\t\t\t[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
            printf("\t\t\t\tInput Pilihan \t\t\t\t");
            scanf("%s",&yakin);

            if (yakin=='Y'||yakin=='y')
            {
            system("cls");
            printf("\n\n\n\n\t\t\t\t- Terima Kasih atas kunjungan Anda -\n\n");
            system("pause");
            exit(panggilMenu);
            }
            else if (yakin=='T'||yakin=='t')
            {
            system("cls");
            panggilMenu();
            }
            else
            {
            printf("\nKesalahan pilihan\n\n");
            system("pause");
            goto keyakinan;
            }
            break;
        default:
            printf("\t\t\t\tKesalahan pilihan, menu no.%d tidak ada dalam daftar\n",menuDanusan);
            printf("\t\t\t\t- Silahkan pilih kembali\n");
            break;
            }
} break;
    }
    }


void Penghitungan(void)
{
    int x, y;
    for (x=1;x<=500;x++){
        y=x/5;
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t      Penghitungan Pesanan Danusan ");
        printf("%i %%",y);
        system("cls");
    }
            printf("\n\t\t\tPesanan Danusan Anda\n");
            printf("\t\t\t\tJumlah | Nama Danusan    | Total Harga\n\t\t\t\t====================================\n");
            printf("\t\t\t\t   %d\t : Bala-Bala       : Rp. %d \n",menu_dan.Bala_Bala, sub.jmlbeli1);
            printf("\t\t\t\t   %d\t : Risol           : Rp. %d \n",menu_dan.Risol, sub.jmlbeli2);
            printf("\t\t\t\t   %d\t : Mie Telur       : Rp. %d \n",menu_dan.Mie_Telur, sub.jmlbeli3);
            printf("\t\t\t\t   %d\t : Smoke Beef      : Rp. %d \n",menu_dan.Smoke_Beef, sub.jmlbeli4);
            printf("\t\t\t\t   %d\t : Gado-Gado       : Rp. %d \n",menu_dan.Gado_Gado, sub.jmlbeli5);
            printf("\t\t\t\t   %d\t : Kue Sus         : Rp. %d \n",menu_dan.Kue_Sus, sub.jmlbeli6);
            printf("\t\t\t\t   %d\t : Cheese Stick    : Rp. %d \n",menu_dan.Cheese_stick, sub.jmlbeli7);
            printf("\t\t\t\t   %d\t : Tahu            : Rp. %d \n",menu_dan.Tahu, sub.jmlbeli8);
            printf("\t\t\t\t------------------------------------\n\n");

    sub.totalharga=sub.jmlbeli1+sub.jmlbeli2+sub.jmlbeli3+sub.jmlbeli4+sub.jmlbeli5+sub.jmlbeli6+sub.jmlbeli7+sub.jmlbeli8;
            printf("\n\t\t\t\t===============================\n\t\t\t\tTotal Harga adalah\t\t= Rp.%d,-\n\t\t\t\t===============================\n",sub.totalharga);
            bayar:
            printf("\n\t\t\t\tMasukkan uang bayar\t\t= Rp.");
            scanf("%d",&sub.bayar);
            if (sub.bayar>=sub.totalharga)
            {
            sub.kembalian=sub.bayar-sub.totalharga;
            printf("\n\t\t\t\tUang Kembalian\t\t\t= Rp.%d", sub.kembalian);
            }
            else
            {
                printf("\n\t\t\t\tUang Anda tidak cukup! Silahkan masukkan lagi\n");

                goto bayar;
            }
            printf("\n\n\t\t\t\t");
            system("Pause");
            system("cls");
            setkamar();
}

void setkamar() {
    int no_gedung;
    int no_lantai;
    int no_kamar;
    int gedung = 12;
    int lantai = 5;
    int kamar = 25;
    int i = 1;
    int j = 1;
    int k = 1;
    for (i=1; i<= gedung; i++){
        for ( j=1; j<=lantai;j++){
            for ( k=1;k<=kamar;k++){
                kamars[i][j][k].no_gedung = i ;
                kamars[i][j][k].no_lantai = j ;
                kamars[i][j][k].no_kamar = k ;
            }
        }
    }
    printf("\n\n\n\n\t\t\t\tPesanan Danusan diantar ke Asrama Telkom\n\n");
    printf("\t\t\t\tMasukkan No. Gedung : ");
    scanf("%d",&no_gedung);
    printf("\t\t\t\tMasukkan No. Lantai : ");
    scanf("%d",&no_lantai);
    printf("\t\t\t\tMasukkan No. Kamar  : ");
    scanf("%d",&no_kamar);
  	kmr = kamars[no_gedung][no_lantai][no_kamar] ;
    printf("\n\n\t\t\t\t");
    system("pause");
    system("cls");
    struk();
}

void struk(void) {
    time(&ambil_waktu);
        printf("\t\t\t\t|===============================================|\n");
        printf("\t\t\t\t                Struk Pembayaran                 \n");
        printf("\t\t\t\t|_______________________________________________|\n");
        printf("\t\t\t\t| Nama Danusan  | Jumlah  | \t    Total  \t|\n");
        printf("\t\t\t\t|===============|=========|=====================|\n");
        if (sub.jmlbeli1>0)
        {
        printf("\t\t\t\t|    Bala-Bala\t|    %d\t  |  Rp.%d\t\t|",menu_dan.Bala_Bala,sub.jmlbeli1);
        }
                if (sub.jmlbeli2>0)
        {
        printf("\n\t\t\t\t|    Risol\t|    %d\t  |  Rp.%d\t\t|",menu_dan.Risol,sub.jmlbeli2);
        }
                if (sub.jmlbeli3>0)
        {
        printf("\n\t\t\t\t|    Mie Telur\t|    %d\t  |  Rp.%d\t\t|",menu_dan.Mie_Telur,sub.jmlbeli3);
        }
                if (sub.jmlbeli4>0)
        {
        printf("\n\t\t\t\t|    Smoke Beef\t|    %d\t  |  Rp.%d\t\t|",menu_dan.Smoke_Beef,sub.jmlbeli4);
        }
                if (sub.jmlbeli5>0)
        {
        printf("\n\t\t\t\t|    Gado Gado\t|    %d\t  |  Rp.%d\t\t|",menu_dan.Gado_Gado,sub.jmlbeli5);
        }
                if (sub.jmlbeli6>0)
        {
        printf("\n\t\t\t\t|    Kue Sus\t|    %d\t  |  Rp.%d\t\t|",menu_dan.Kue_Sus,sub.jmlbeli6);
        }
                if (sub.jmlbeli7>0)
        {
        printf("\n\t\t\t\t|    Cheese Stick\t|    %d\t  |  Rp.%d\t\t|",menu_dan.Cheese_stick,sub.jmlbeli7);
        }
                if (sub.jmlbeli8>0)
        {
        printf("\n\t\t\t\t|    Tahu\t|    %d\t  |  Rp.%d\t\t|",menu_dan.Tahu,sub.jmlbeli8);
        }
        printf("\n\t\t\t\t|_______________________________________________|");
        printf("\n\t\t\t\t| Total Keseluruhan\t =   Rp.%d\t\t|", sub.totalharga);
        printf("\n\t\t\t\t| Uang bayar\t         =   Rp.%d\t\t|", sub.bayar);
        printf("\n\t\t\t\t| Kembalian\t         =   Rp.%d\t\t|", sub.kembalian);
        printf("\n\t\t\t\t|                                               |");
        printf("\n\t\t\t\t| Pesanan Danusan diantar ke Asrama Telkom      |");
        printf("\n\t\t\t\t| Gedung\t\t =  %d\t\t\t|",kmr.no_gedung);
        printf("\n\t\t\t\t| Lantai\t\t =  %d\t\t\t|",kmr.no_lantai);
        printf("\n\t\t\t\t| Kamar\t\t\t =  %d\t\t\t|",kmr.no_kamar+kmr.no_lantai*100);
        printf("\n\n\t\t\t\t  Waktu/Hari : %s", ctime (&ambil_waktu));
        printf("\n\t\t\t\t| Perhatian  : Danusan yang dibeli tidak bisa   |");
        printf("\n\t\t\t\t|              dikembalikan!                    |");
        printf("\n\t\t\t\t|                                               |\n");
        printf("\t\t\t\t-------------------------------------------------\n\t\t\t\t");
        system("pause");
        system("cls");
        printf("\n\n\n\n\t\t\t\t   Pesanan Danusan anda siap diantar  \n\n");
        printf("\n\n\n\n\t\t\t\t - Terimakasih atas Kunjungan anda - \n\n");
}
