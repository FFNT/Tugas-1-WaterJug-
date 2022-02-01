#include <stdio.h>
#include <stdlib.h>

int main()
{   /*kamus*/
    int Jug1; /*Jug 3 ml*/
    int Jug2; /*Jug 5 ml*/
    int Perintah; /*Pilihan Perintah*/
    /*List Perintah*/


    /*Algoritma*/
    /*Inisialisasi*/
    Jug1 = 0;
    Jug2 = 0;

    /*User Interface*/

    printf("Objektif: Dapatkan Jug2 Berisi 4 ml air\n");
    while(Jug2 != 4)
    {

        printf("\nList Perintah: (Isi dengan angka)\n");
        printf("1. Isi Jug1 penuh (hingga 3 ml)\n");
        printf("2. Isi Jug2 penuh (hingga 5 ml)\n");
        printf("3. Isi Jug2 ke Jug1 (tidak dapat tumpah)\n");
        printf("4. Isi Jug1 ke Jug2 (tidak dapat tumpah)\n");
        printf("5. Kosongkan Jug1\n");
        printf("6. Kosongkan Jug2\n");
        printf("\nJug1 = %d", Jug1, "\n");
        printf("\nJug2 = %d", Jug2,"\n");

        printf("\nMasukkan Perintah: ");
        scanf("%d", &Perintah);

        switch(Perintah)
    {
    case 1: /*Isi Jug1*/
        {
            Jug1 = 3;
            break;
        }
    case 2: /*Isi Jug2*/
        {
            Jug2 = 5;
            break;
        }
    case 3: /*Isi Jug1 dengan Jug2*/
        {
            Jug1 = Jug1 + Jug2;
            if(Jug1 > 3)
            {
                Jug2 = Jug1 - 3;
                Jug1 = 3;
            }
            else
            {
                Jug2 = 0;
            }
            break;
        }
    case 4: /*Isi Jug2 dengan Jug1*/
        {
            Jug2 = Jug2 + Jug1;
            if(Jug2 > 5)
            {
                Jug1= Jug2 - 5;
                Jug2 = 5;
            }
            else
            {
                Jug1 = 0;
            }
            break;
        }
    case 5: /*Kosongkan Jug1*/
        {
            Jug1 = 0;
            break;
        }
    case 6: /*Kosongkan Jug2*/
        {
            Jug2 = 0;
            break;
        }
    default:
        printf("input Perintah tidak valid\n");
        break;
    }
    }
    printf("\nJug1 = %d", Jug1, "\n");
    printf("\nJug2 = %d", Jug2,"\n");
    printf("\nSelamat Anda Telah Menyelesaikan Puzzle!!!");







    return 0;
}
