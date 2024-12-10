#include <stdio.h>
#define MAX_MHS 3

typedef struct{
    char nama[30];
    char nim[16];
    char prodi[100];
} Mahasiswa;

void tulisDataMahasiswa(){
    FILE* file = fopen("data_mahasiswa.txt", "w");
    if(file == NULL){
        printf("File gagal ditambahkan.");
        return;
    }

    Mahasiswa mhs[MAX_MHS];
    for(int i = 0; i < MAX_MHS; i++){
        printf("Masukkan Nama Mahasiswa ke-%d: ", i+1);
        scanf(" %[^\n]", mhs[i].nama);
        printf("Masukkan NIM Mahasiswa ke-%d: ", i+1);
        scanf(" %[^\n]", mhs[i].nim);
        printf("Masukkan Program Studi Mahasiswa ke-%d: ", i+1);
        scanf(" %[^\n]", mhs[i].prodi);
        fprintf(file, "%s\n%s\n%s\n", mhs[i].nama, mhs[i].nim, mhs[i].prodi);
    }
    fclose(file);
    printf("...\nData mahasiswa berhasil ditulis ke dalam file.\n");
}

void bacaDataMahasiswa(){
    FILE *file = fopen("data_mahasiswa.txt", "r");
    if(file == NULL){
        printf("File gagal dibuka.");
        return;
    }

    Mahasiswa mhs[MAX_MHS];
    for(int i = 0; i < MAX_MHS; i++){
        fgets(mhs[i].nama, sizeof(mhs[i].nama), file);
        fgets(mhs[i].nim, sizeof(mhs[i].nim), file);
        fgets(mhs[i].prodi, sizeof(mhs[i].prodi), file);
        printf("=======================================\n");
        printf("Nama: %s", mhs[i].nama);
        printf("NIM: %s", mhs[i].nim);
        printf("Program Studi: %s\n", mhs[i].prodi);
    }
    fclose(file);
    printf("...\nData mahasiswa berhasil dibaca dari file.\n");
}

int main(){
    int pilihan;
    printf("\n\n=== CODE EXCUTION STARTED ===\n\n");
    do{
        printf("\nPilih aksi:\n");
        printf("1. Tulis data mahasiswa\n");
        printf("2. Baca data mahasiswa\n");
        printf("3. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch(pilihan){
            case 1:
                tulisDataMahasiswa();
                break;
            case 2:
                bacaDataMahasiswa();
                break;
            case 3:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    }while(pilihan != '3');

    printf("=== CODE EXCUTION SUCCESS ===\n\n");
    return 0;
}
