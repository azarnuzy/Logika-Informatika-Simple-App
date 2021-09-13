#include "library.h"
//Nama : Muhammad Azar Nuzy
//NIM : 2004191
//Program Studi : Ilmu Komputer
//Program ini dibuat untuk memenuhi penialian mata kuliah logika informatika dengan dosen pengampu Drs. H. Eka Fitrajaya Rahman, M.T.

void header(){
	printf("\n");
	printf("	======================== <ALGORITMA DAN BILANGAN BULAT > ========================\n");
	printf("	============================ <MUHAMMAD AZAR NUZY> ===============================\n");
	printf("	================================== <2004191> ====================================\n");

}

void menu1(){
	header();
	printf("\n");
	printf("	Pilihan Menu :\n");
	printf("	1. ALGORITMA EUCLIDEAN\n");
	printf("	   - Menentukan PBB\n");
	printf("	   - Menentukan Relatif Prima\n");
	printf("	   - Menentukan Kombinasi Lanjar\n");
	printf("	2. ARITMATIKA MODULO \n");
	printf("	   - Menentukan Modulus\n");
	printf("	   - Menentukan Kongruen \n");
	printf("	   - Menentukan Invers Modulo\n");
	printf("	3. KRIPTOGRAFI CAESAR CIPHER\n");
	printf("	   - Melakukan Enkripsi Pada Teks\n");
	printf("	   - Melakukan Deskripsi Pada Teks \n");
	printf("	4. KRIPTOGRAFI SUBTITUTION CIPHER\n");
	printf("	   - Random Alphabet\n");
	printf("	   - ROT13\n");
	printf("	   - ROT18\n");
	printf("	Masukan nomor menu yang akan dipilih : ");
}

void euclid(int n){
	int i=0, j=0;
	header();

	int no1,no2;
	printf("	--------------------------------------------------------------------------------\n");
	printf("	<MENENTUKAN PBB, KONBINASI LANJAR, & RELATIF PRIMA MENGGUNAKAN ALGORITMA EUCLID>\n");
	printf("	--------------------------------------------------------------------------------\n");
	printf("	Masukan angka pertama : ");
	scanf("%d", &no1);
	printf(	"	Masukan angka kedua : ");
	scanf("%d", &no2);
	printf("	--------------------------------------------------------------------------------\n");

	int num1,num2;

	if(no1 > no2){
		num1 = no1;
		num2 = no2;
	}else{
		num1 = no2;
		num2 = no1;
	}

	int hasilBagi;
	int sisa;
	int hasil[100];

	int hasilBagi1[100];//array untuk menentukan kombinasi lanjar

	while(sisa != 0){

		hasilBagi = num1/num2;
		sisa = num1%num2;
		hasilBagi1[i] = hasilBagi;
		printf("	%d = %d x %d + %d\n",num1,hasilBagi,num2,sisa);
		num1 = num2;
		num2 = sisa;
		hasil[i] = sisa;
		i++;
		j++;
	}
	int k=i;
	printf("	--------------------------------------------------------------------------------\n");
	if(j != 1){
		j=0;
		if(sisa != 1){
			printf("	Maka, PBB(%d, %d) = %d\n", no1, no2, hasil[i-2]);
	
			int m=1, n=1, o=0;//sebagai salah satu koefisien dari kombinasi lanjar

			if(no1 > no2){
				num1 = no1;
				num2 = no2;
			}else{
				num1 = no2;
				num2 = no1;
			}

			if(k < 5){
				while(i > 2){
					m = hasilBagi1[i - 2] * m;
					j++;
					i--;
				}
	
				if(j > 1){
					m = m+1;
				}
	
				if(k > 3){
					n = hasilBagi1[0] * m + hasilBagi1[k-2];
				}else if(k == 3){
					n = hasilBagi1[0] * m + 1;
				}else{
					n = hasilBagi1[0];
				}
			}else{
			
				if(k == 5){
					i = i-1;
					while(i > 2){
						m = hasilBagi1[i-2] * m + 1;
						if(i == 4){
							o = m;
						}else if(i == 3){
							n = m * hasilBagi1[i -3];
						}
						j++;
						i--;
					}
					n = n+o;
				}else{
					i = i-1;
					while(i > 3){
						m = hasilBagi1[i-2] * m + 1;
						if(i == 5){
							o = m;
						}else if(i == 4){
							n = m;
						}
						i--;
						j++;
					}
					m = m + o;
					n = n+m;
				}

			}

			if(m * num1 > n * num2){
				n = -n;
			}else{
				m= -m;
			}
			printf("	Koefisien kombinasi lanjar dari (%d, %d) adalah %d dan %d\n", num1, num2, m, n);			
			printf("	PBB(%d, %d) = %d = %d x %d + %d x %d\n", no1, no2, hasil[k-2], m, num1, n, num2);
			if(hasil[k-2] == 1){
				printf("	Bilangan (%d, %d) merupakan bilangan relatif prima\n", no1,no2);
			}
		}
	}else{
		if(no1 > no2){
			num1 = no1;
			num2 = no2;
		}else{
			num1 = no2;
			num2 = no1;
		}
			printf("	Maka, PBB(%d, %d) = %d\n", no1, no2, num2);
	}
}

void modulo(){

	header();
	printf("	--------------------------------------------------------------------------------\n");
	printf("	                             <ARITMATIKA MODULO>\n");
	printf("	--------------------------------------------------------------------------------\n");

	int no1, no2;
	printf("	Masukan angka pertama : ");
	scanf("%d", &no1);
	printf(	"	Masukan angka kedua : ");
	scanf("%d", &no2);
	printf("	--------------------------------------------------------------------------------\n");
	printf("	%d mod %d = %d 	\n",no1, no2, no1 % no2);
	if((no1 - (no1%no2)) % no2 == 0){
		printf("	%d kongruen dengan %d dalam modulus %d\n", no1,no1%no2,no2);
	}else{
		printf("	%d tidak kongruen dengan %d dalam modulus %d\n", no1,no1%no2,no2);
	}
	int i=0, j=0;
	int num1,num2;

	int hasilBagi;
	int sisa;
	int hasil[100];

	int hasilBagi1[100];//array untuk menentukan kombinasi lanjar


	if(no1 > no2){
		num1 = no1;
		num2 = no2;
	}else{
		num1 = no2;
		num2 = no1;
	}

	while(sisa != 0){

		hasilBagi = num1/num2;
		sisa = num1%num2;
		hasilBagi1[i] = hasilBagi;
		num1 = num2;
		num2 = sisa;
		hasil[i] = sisa;
		i++;
		j++;
	}
	int k=i;

	if(j != 1){
		j=0;
		if(sisa != 1){
			int m=1, n=1,o=0;//sebagai salah satu koefisien dari kombinasi lanjar
			
			if(no1 > no2){
				num1 = no1;
				num2 = no2;
			}else{
				num1 = no2;
				num2 = no1;
			}

			if(k < 5){
				while(i > 2){
					m = hasilBagi1[i - 2] * m;
					j++;
					i--;
				}
	
				if(j > 1){
					m = m+1;
				}
	
				if(k > 3){
					n = hasilBagi1[0] * m + hasilBagi1[k-2];
				}else if(k == 3){
					n = hasilBagi1[0] * m + 1;
				}else{
					n = hasilBagi1[0];
				}
			}else{
			
				if(k == 5){
					i = i-1;
					while(i > 2){
						m = hasilBagi1[i-2] * m + 1;
						if(i == 4){
							o = m;
						}else if(i == 3){
							n = m * hasilBagi1[i -3];
						}
						j++;
						i--;
					}	
					n = n+o;
				}else{
				
					i = i-1;
					while(i > 3){
						m = hasilBagi1[i-2] * m + 1;
						if(i == 5){
							o = m;
						}else if(i == 4){
							n = m;
						}
						j++;
						i--;
					}

					m = o+m;
					n = n+m;
				}

				if(m * num1 > n * num2){
					n = -n;
				}else{
					m= -m;
				}
			}
			if(hasil[k-2] == 1){
				printf("	Invers dari %d mod %d adalah %d\n",no1, no2, m );
			}else{
				printf("	Invers dari %d mod %d tidak ada\n", no1, no2);
			}
		}
	}
}

void caesarCipher(){

	header();
	printf("	--------------------------------------------------------------------------------\n");
	printf("	                           <KRIPTOGRAFI (CAESAR CIPHER)>\n");
	printf("	--------------------------------------------------------------------------------\n");

	printf("	Apa yang ingin dilakukan ? \n");
	printf("	1. Enkripsi Text \n");
	printf("	2. Deskripi Text\n");
	printf("	Masukan pilihan : ");
	int n;
	scanf("%d", &n);

	int banyakKalimat;
	int i,j;
	char teks1[1000][1000];
	int kunci;

	if(n == 1){
		system("cls");
		header();
		printf("	--------------------------------------------------------------------------------\n");
		printf("	                           <KRIPTOGRAFI (CAESAR CIPHER)>\n");
		printf("	--------------------------------------------------------------------------------\n");
		printf("	                             Plainteks => Cipherteks \n");
		printf("	DATA ENKRIPSI TEKS\n");
		printf("	masukan banyak kalimat yang akan di enkripsi : ");
		scanf("%d", &banyakKalimat);
		printf("	Masukan teks yang ingin di enkripsi (teks hanya berisi huruf): ");
		printf("	");

		for(i=0; i<banyakKalimat; i++){
			scanf("%s", &teks1[i]);
		}
		printf("	Masukan kunci (kunci berisi angka): ");
		scanf("%d", &kunci);

		kunci = kunci % 26;
		char cipher1[n][1000];

		for(i=0; i<banyakKalimat; i++){
			for(j=0; j<strlen(teks1[i]);j++){
				cipher1[i][j] = 0;
			}
		}

		for(i=0; i<banyakKalimat; i++){

			for(j=0; j<strlen(teks1[i]); j++){

				if(teks1[i][j] > 96 && teks1[i][j] < 123){

					if(kunci + teks1[i][j] > 122){
						cipher1[i][j] = kunci + teks1[i][j] - 26;
					}else{
						cipher1[i][j] = kunci + teks1[i][j];
					}

				}else if(teks1[i][j] > 64 && teks1[i][j] < 91){

					cipher1[i][j] = teks1[i][j] + kunci;

					if(cipher1[i][j] > 90){
						cipher1[i][j] = cipher1[i][j] - 26;
					}

				}else{

					cipher1[i][j] = teks1[i][j] + kunci;
				}
			}
		}
		printf("\n");
		printf("	DATA HASIL ENKRIPSI\n");

		printf("	");

		for(i=0; i<banyakKalimat; i++){

			for(j=0; j<strlen(teks1[i]); j++){
				printf("%c",teks1[i][j]);
			}

			printf(" ");
		}

		printf("\n");

		printf("	");
		for(i=0; i<banyakKalimat; i++){

			for(j=0; j<strlen(teks1[i]); j++){
				printf("|");
			}

			printf(" ");
		}

		printf("\n");

		printf("	");
		for(i=0; i<banyakKalimat; i++){

			for(j=0; j<strlen(teks1[i]); j++){
				printf("%c",cipher1[i][j]);
			}

			printf(" ");
		}
		printf("\n");
	}else if(n == 2){
		system("cls");
		header();
		printf("	--------------------------------------------------------------------------------\n");
		printf("	                           <KRIPTOGRAFI (CAESAR CIPHER)>\n");
		printf("	--------------------------------------------------------------------------------\n");
		printf("	                             Cipherteks => Plainteks \n");
		printf("	DATA DESKRIPSI TEKS\n");
		printf("	masukan banyak kalimat yang akan di deskripsi : ");
		scanf("%d", &banyakKalimat);
		printf("	Masukan teks yang ingin di deskripsi : \n");
		printf("	");

		for(i=0; i<banyakKalimat; i++){
			scanf("%s", &teks1[i]);
		}
		printf("	Masukan kunci (kunci berisi angka): ");
		scanf("%d", &kunci);

		kunci = kunci % 26;
		char cipher1[n][1000];

		for(i=0; i<banyakKalimat; i++){
			for(j=0; j<strlen(teks1[i]);j++){
				cipher1[i][j] = 0;
			}
		}

		for(i=0; i<banyakKalimat; i++){

			for(j=0; j<strlen(teks1[i]); j++){

				if(teks1[i][j] > 96 && teks1[i][j] < 123){

					if(teks1[i][j] - kunci < 97){
						cipher1[i][j] = teks1[i][j] - kunci + 26;
					}else{
						cipher1[i][j] = teks1[i][j] - kunci;
					}

				}else if(teks1[i][j] > 64 && teks1[i][j] < 91){

					cipher1[i][j] = teks1[i][j] - kunci;

					if(cipher1[i][j] < 65){
						cipher1[i][j] = cipher1[i][j] + 26;
					}

				}else{

					cipher1[i][j] = teks1[i][j] - kunci;
				}
			}
		}
		printf("\n");
		printf("	DATA HASIL DESKRIPSI\n");

		printf("	");

		for(i=0; i<banyakKalimat; i++){

			for(j=0; j<strlen(teks1[i]); j++){
				printf("%c",teks1[i][j]);
			}

			printf(" ");
		}

		printf("\n");

		printf("	");
		for(i=0; i<banyakKalimat; i++){

			for(j=0; j<strlen(teks1[i]); j++){
				printf("|");
			}

			printf(" ");
		}

		printf("\n");

		printf("	");
		for(i=0; i<banyakKalimat; i++){

			for(j=0; j<strlen(teks1[i]); j++){
				printf("%c",cipher1[i][j]);
			}

			printf(" ");
		}
		printf("\n");
	}
}

void subtitutionCipher(){

	header();
	printf("	--------------------------------------------------------------------------------\n");
	printf("	                           <KRIPTOGRAFI SUBTITUTION CIPHER>\n");
	printf("	--------------------------------------------------------------------------------\n");
	printf("	Pilih teknik di bawah ini untuk dapat mengenkripsi teks : \n");
	printf("	1. Random Alphabet\n");
	printf("	2. ROT13\n");
	printf("	3. ROT18\n");
	printf("	Masukan pilihan : ");
	int n;
	int i,j=0;
	scanf("%d", &n);
	int banyakKata;
	
	if(n == 1){
		system("cls");
		header();
		printf("	--------------------------------------------------------------------------------\n");
		printf("	                           <KRIPTOGRAFI SUBTITUTION CIPHER>\n");
		printf("	--------------------------------------------------------------------------------\n");
		printf("	                                     Random Alphabet\n");	
		printf("	DATA FILE ENKRIPSI\n");
		printf("	Masukan banyak kata yang akan di enkripsi : ");

		scanf("%d", &banyakKata);
		char teks1[banyakKata][1000];
		int indexTeks[banyakKata][1000];

		printf("	Masukan kalimat yang ingin di enkripsi : ");

		for(i=0; i<banyakKata; i++){
			scanf("%s", &teks1[i]);
		}

		printf("	Masukan kunci yang akan digunakan (Kunci berupa kata yang hurufnya tidak berulang) :");
		char kunci[50];
		scanf("%s", &kunci);

		char kunciBaru[50];
		int k=0;

		char huruf1[50];
		char huruf2[50];

		if(kunci[0] > 64 && kunci[0] < 91){

			for(i=0; i<26; i++){
				huruf1[i] = 65 + i;
				huruf2[i] = 65 + i;
			}

		}else{

			for(i=0; i<26; i++){
				huruf1[i] = 97 + i;
				huruf2[i] = 97 + i;
			}

		}

		for(i=0; i<strlen(kunci); i++){

			for(j=0; j<26; j++){
				if(huruf1[j] == kunci[i]){
					huruf1[j] = 0;
				}
			}

		}

		for(i=0; i<strlen(kunci); i++){
			kunciBaru[k] = kunci[i];
			k++;
		}

		for(i=0; i<26; i++){
			if(huruf1[i] != 0){
				kunciBaru[k] = huruf1[i];
				k++;
			}
		}

		k=0;

		for(i=0; i<banyakKata; i++){

			for(j=0; j<strlen(teks1[i]); j++){
				if(teks1[0][0] > 64 && teks1[0][0] < 91){
					indexTeks[i][j] = teks1[i][j] - 65;
				}else if(teks1[0][0] > 96 && teks1[0][0] < 123){
					indexTeks[i][j] = teks1[i][j] - 97;
 				}
			}
		}

		char teksBaru[banyakKata][1000];

		for(i=0; i<banyakKata; i++){

			for(j=0; j<strlen(teks1[i]); j++){
				teksBaru[i][j] = kunciBaru[indexTeks[i][j]];
			}

		}
		printf("\n");
		printf("	BENTUK KUNCI\n");
		printf("	");

		for(i=0; i<26; i++){
			printf("%c",huruf2[i] );
		}

		printf("\n");

		printf("	");

		for(i=0; i<26; i++){
			printf("|");		
		}
		printf("\n");

		printf("	");

		for(i=0; i<26; i++){
			printf("%c", kunciBaru[i]);		
		}
		printf("\n");

		printf("\n");
		printf("	DATA HASIL ENKRIPSI\n");

		printf("	Kalimat Awal  : ");

		for(i=0; i<banyakKata; i++){

			for(j=0; j<strlen(teks1[i]); j++){
				printf("%c", teks1[i][j]);
			}

			printf(" ");
		}
		printf("\n");

		printf("	Kalimat Hasil : ");

		for(i=0; i<banyakKata; i++){

			for(j=0; j<strlen(teks1[i]); j++){
				printf("%c", teksBaru[i][j]);
			}

			printf(" ");
		}
		printf("\n");
	}

	else if(n == 2){
		system("cls");
		header();
		printf("	--------------------------------------------------------------------------------\n");
		printf("	                           <KRIPTOGRAFI SUBTITUTION CIPHER>\n");
		printf("	--------------------------------------------------------------------------------\n");
		printf("	                                      ROT 13\n");	
		printf("	DATA FILE ENKRIPSI\n");
		printf("	Masukan banyak kata yang akan di enkripsi : ");

		scanf("%d", &banyakKata);
		char teks1[banyakKata][1000];

		printf("	Masukan kalimat yang ingin di enkripsi : ");

		for(i=0; i<banyakKata; i++){
			scanf("%s", &teks1[i]);
		}

		char kunci1[50];
		char kunci2[50];

		j=0;

		if(teks1[0][0] > 64 && teks1[0][0] < 91){
			for(i=0; i<26; i++){

				if(i < 13){
					kunci1[i] = 65+i;
				}else{
					kunci2[j] = 65+i;
					j++;
				}
			}
		}else if( teks1[0][0] > 96 && teks1[0][0] < 123){
			for(i=0; i<26; i++){

				if(i < 13){
					kunci1[i] = 97+i;
				}else{
					kunci2[j] = 97+i;
					j++;
				}
			}
		}
		
		char hasil[banyakKata][1000];
		int index[banyakKata][1000];

		for(i=0; i<banyakKata; i++){
			for(j=0; j<strlen(teks1[i]); j++){
				if(teks1[0][0] > 64 && teks1[0][0] < 91){
					index[i][j] = teks1[i][j] - 65;
				}else{
					index[i][j] = teks1[i][j] - 97;
				}
			}
		}

		for(i=0; i<banyakKata; i++){
			for(j=0; j<strlen(teks1[i]); j++){

				if(index[i][j] >= 0 && index[i][j] < 13){
					hasil[i][j] = kunci2[index[i][j]];
				}else{
					hasil[i][j] = kunci1[index[i][j] -13];
				}

			}
		}

		printf("\n");
		printf("	BENTUK KUNCI\n");
		printf("	");

		for(i=0; i<13; i++){
			printf("%c",kunci1[i] );
		}
		printf("\n");

		printf("	");

		for(i=0; i<13; i++){
			printf("|");
		}

		printf("\n");

		printf("	");

		for(i=0; i<13; i++){
			printf("%c",kunci2[i] );
		}
		printf("\n");

		printf("\n");
		printf("	DATA HASIL ENKRIPSI\n");

		printf("	Kalimat Awal  : ");

		for(i=0; i<banyakKata; i++){
			for(j=0; j<strlen(teks1[i]); j++){
				printf("%c",teks1[i][j]);
			}
			printf(" ");
		}

		printf("\n");

		printf("	Kalimat Akhir : ");

		for(i=0; i<banyakKata; i++){
			for(j=0; j<strlen(teks1[i]); j++){
				printf("%c",hasil[i][j]);
			}
			printf(" ");
		}
		printf("\n");
	}

	else if(n == 3){
		system("cls");
		header();
		printf("	--------------------------------------------------------------------------------\n");
		printf("	                           <KRIPTOGRAFI SUBTITUTION CIPHER>\n");
		printf("	--------------------------------------------------------------------------------\n");
		printf("	                                      ROT 18\n");	
		printf("	DATA FILE ENKRIPSI\n");
		printf("	Masukan banyak kata yang akan di enkripsi : ");

		scanf("%d", &banyakKata);
		char teks1[banyakKata][1000];

		printf("	Masukan kalimat yang ingin di enkripsi : ");

		for(i=0; i<banyakKata; i++){
			scanf("%s", &teks1[i]);
		}

		char kunci1[50];
		char kunci2[50];

		j=0;
		int k=0;

		if(teks1[0][0] > 64 && teks1[0][0] < 91){
			for(i=0; i<36; i++){

				if(i < 18){
					kunci1[i] = 65+i;
				}else if( i < 26){
					kunci2[j] = 65+i;
					j++;
				}else{
					kunci2[j] = 48 + k;
					k++;
					j++;
				}
			}
		}else if( teks1[0][0] > 96 && teks1[0][0] < 123){
			for(i=0; i<36; i++){

				if(i < 18){
					kunci1[i] = 97+i;
				}else if(i < 26){
					kunci2[j] = 97+i;
					j++;
				}else{
					kunci2[j] = 48 + k;
					j++;
					k++;
				}
			}
		}
		
		char hasil[banyakKata][1000];
		int index[banyakKata][1000];

		for(i=0; i<banyakKata; i++){
			for(j=0; j<strlen(teks1[i]); j++){
				if(teks1[0][0] > 64 && teks1[0][0] < 91){
					index[i][j] = teks1[i][j] - 65;
				}else if(teks1[0][0] > 96 && teks1[0][0] < 123){
					index[i][j] = teks1[i][j] - 97;
				}

				if(teks1[i][j] > 47 && teks1[i][j] < 58){
					index[i][j] = teks1[i][j] - 22;
				}
			}
		}

		for(i=0; i<banyakKata; i++){
			for(j=0; j<strlen(teks1[i]); j++){

				if(index[i][j] >= 0 && index[i][j] < 18){
					hasil[i][j] = kunci2[index[i][j]];
				}else{
					hasil[i][j] = kunci1[index[i][j] -18];
				}

			}
		}

		printf("\n");
		printf("	BENTUK KUNCI\n");
		printf("	");

		for(i=0; i<18; i++){
			printf("%c",kunci1[i] );
		}
		printf("\n");

		printf("	");

		for(i=0; i<18; i++){
			printf("|");
		}

		printf("\n");

		printf("	");

		for(i=0; i<18; i++){
			printf("%c",kunci2[i] );
		}
		printf("\n");

		printf("\n");
		printf("	DATA HASIL ENKRIPSI\n");

		printf("	Kalimat Awal  : ");

		for(i=0; i<banyakKata; i++){
			for(j=0; j<strlen(teks1[i]); j++){
				printf("%c",teks1[i][j]);
			}
			printf(" ");
		}

		printf("\n");

		printf("	Kalimat Akhir : ");

		for(i=0; i<banyakKata; i++){
			for(j=0; j<strlen(teks1[i]); j++){
				printf("%c",hasil[i][j]);
			}
			printf(" ");
		}
		printf("\n");
	}
}