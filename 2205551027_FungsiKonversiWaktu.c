#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define phi 3.14

void header(){
	printf("\n\n");
	printf("\t\t\t\t===================================================\n");
	printf("\t\t\t\t|           Nama: Athaya Juliant Purnama          |\n");
	printf("\t\t\t\t|                 NIM: 2205551027                 |\n");
	printf("\t\t\t\t===================================================\n");
}

//FUNGSI KONVERSI WAKTU
float detik_ke_menit (float detik){
	float menit;
	menit=detik/60;
	return menit;
}
float detik_ke_jam (float detik){
	float jam;
	jam=detik/3600;
	return jam;
}
float menit_ke_detik (float menit){
	float detik;
	detik=menit*60;
	return detik;
}
float menit_ke_jam (float menit){
	float jam;
	jam=menit/60;
	return jam;
}
float jam_ke_detik (float jam){
	float detik;
	detik=jam*3600;
	return detik;
}
float jam_ke_menit (float jam){
	float menit;
	menit=jam*60;
	return menit;
}

int main(){
	header();
	system("pause");
	system("cls");
	//DEKLARASI VARIABEL YANG DIPERLUKAN PROGRAM
    char input;
    int pilih;
	float detik, menit, jam;
    
    //PERULANGAN
	do{	
	//MENU PROGRAM KONVERSI WAKTU
    printf("\n\n");
    printf("\t\t\t\t===========================================\n");
    printf("\t\t\t\t|          PROGRAM KONVERSI WAKTU         |\n");
    printf("\t\t\t\t===========================================\n");
    printf("\nSelamat datang di program konversi waktu, Ingin menghitung apa?\n\n");
    printf ("Menu Pilihan\n");
    printf("1. Konversi Detik ke Menit\n");
    printf("2. Konversi Detik ke Jam\n");
    printf("3. Konversi Menit ke Detik\n");
    printf("4. Konversi Menit ke Jam\n");
    printf("5. Konversi Jam ke Detik\n");
    printf("6. Konversi Jam ke Menit\n");
    printf("7. Keluar\n");
    printf("\nAnda memilih nomor: ");
    scanf("%d", &pilih);
	

    system ("cls");
    
    switch(pilih){
    	case 1:
    		
    		//KONVERSI DETIK KE MENIT
    		printf("\n\n");
    		printf("PROGRAM KONVERSI DETIK KE MENIT\n\n");
			printf("Masukkan detik yang akan dikonversi ke dalam menit: ");
			scanf("%f", &detik);
			printf("Maka didapat menit = %.2f\n", detik_ke_menit(detik));
			
			break;
			
		case 2:
			
    		//KONVERSI DETIK KE JAM
    		printf("\n\n");
    		printf("PROGRAM KONVERSI DETIK KE JAM\n\n");
			printf("Masukkan detik yang akan dikonversi ke dalam jam: ");
			scanf("%f", &detik);
			printf("Maka didapat jam = %.2f\n", detik_ke_jam(detik));
			
			break;
			
		case 3:
			
			//KONVERSI MENIT KE DETIK
			printf("\n\n");
    		printf("PROGRAM KONVERSI MENIT KE DETIK\n\n");
			printf("Masukkan menit yang akan dikonversi ke dalam detik: ");
			scanf("%f", &menit);
			printf("Maka didapat detik = %.2f\n", menit_ke_detik(menit));
			
			break;
			
		case 4:
			
			//KONVERSI MENIT KE JAM
			printf("\n\n");
    		printf("PROGRAM KONVERSI MENIT KE JAM\n\n");
			printf("Masukkan menit yang akan dikonversi ke dalam jam: ");
			scanf("%f", &menit);
			printf("Maka didapat jam = %.2f\n", menit_ke_jam(menit));
			
			break;
			
		case 5:
			
			//KONVERSI JAM KE DETIK
			printf("\n\n");
    		printf("PROGRAM KONVERSI JAM KE DETIK\n\n");
			printf("Masukkan jam yang akan dikonversi ke dalam detik: ");
			scanf("%f", &jam);
			printf("Maka didapat detik = %.2f\n", jam_ke_detik(jam));
			
			break;
			
		case 6:
			
			//KONVERSI JAM KE MENIT
			printf("\n\n");
    		printf("PROGRAM KONVERSI JAM KE MENIT\n\n");
			printf("Masukkan jam yang akan dikonversi ke dalam menit: ");
			scanf("%f", &jam);
			printf("Maka didapat menit = %.2f\n", jam_ke_menit(jam));
			
			break;
			
		case 7:
			
			//KELUAR DARI PROGRAM
			exit(0);
			
			break;
			
		default:
			
			printf("\n\n");
			printf("Input yang Anda masukkan tidak valid\n"); fflush (stdin);
	}
	printf ("\nApakah Anda masih ingin menggunakan program ini (y/n)? "); fflush (stdin);
	scanf ("%s", &input);
	
	system ("cls");
	}
	while(input != 'n');
	
	system("cls");
	
	printf("\n\n");
    printf("\t\t\t\t======================================================\n");
    printf("\t\t\t\t|     TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI     |\n");
    printf("\t\t\t\t======================================================\n");
    
    return 0;
}
