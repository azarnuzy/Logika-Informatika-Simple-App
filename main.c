#include "library.h"
//Nama : Muhammad Azar Nuzy
//NIM : 2004191
//Program Studi : Ilmu Komputer
//Program ini dibuat untuk memenuhi penialian mata kuliah logika informatika dengan dosen pengampu Drs. H. Eka Fitrajaya Rahman, M.T.

int main(int argc, char const *argv[])
{
	char kembali;
	do{
		//prosedur tampilan menu
		menu1();

		//untuk memilih menu
		int n;
		scanf("%d", &n);

		system("cls");
	
		if(n == 1){
			euclid(n);
		}else if(n == 2){
			modulo();
		}else if(n == 3){
			caesarCipher();
		}else if(n == 4){
			subtitutionCipher();
		}


		printf("	--------------------------------------------------------------------------------\n");
		printf("	Apakah Anda Ingin Kembali Ke Menu Utama (y/n): ");
		scanf(" %c", &kembali);
		system("cls");
	}while(kembali == 'y');

	return 0;
}