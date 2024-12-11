#include <stdio.h>
#define MAX_MHS 3
#define MAX_CHAR 100

void tulisDataMahasiswa();
void bacaDataMahasiswa();

int main() {
    int pilihan;
    printf("\n\n=== PROGRAM DIMULAI ===\n\n");

    do {
        printf("\nPilih aksi:\n");
        printf("1. Tulis data mahasiswa\n");
        printf("2. Baca data mahasiswa\n");
        printf("3. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
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
    } while (pilihan != 3);

    printf("\n=== PROGRAM BERAKHIR ===\n\n");
    return 0;
}

void tulisDataMahasiswa() {
    FILE* file = fopen("data_mahasiswa.txt", "w");
    if (file == NULL) {
        printf("File gagal ditambahkan.\n");
        return;
    }

    char nama[MAX_MHS][MAX_CHAR];
    char nim[MAX_MHS][MAX_CHAR];
    char prodi[MAX_MHS][MAX_CHAR];

    for (int i = 0; i < MAX_MHS; i++) {
        printf("Masukkan Nama Mahasiswa ke-%d: ", i + 1);
        scanf(" %[^\n]", nama[i]);
        printf("Masukkan NIM Mahasiswa ke-%d: ", i + 1);
        scanf(" %[^\n]", nim[i]);
        printf("Masukkan Program Studi Mahasiswa ke-%d: ", i + 1);
        scanf(" %[^\n]", prodi[i]);
        fprintf(file, "%s\n%s\n%s\n", nama[i], nim[i], prodi[i]);
    }

    fclose(file);
    printf("...\nData mahasiswa berhasil ditulis ke dalam file.\n");
}

void bacaDataMahasiswa() {
    FILE* file = fopen("data_mahasiswa.txt", "r");
    if (file == NULL) {
        printf("File gagal dibuka.\n");
        return;
    }

    char nama[MAX_CHAR];
    char nim[MAX_CHAR];
    char prodi[MAX_CHAR];

    for (int i = 0; i < MAX_MHS; i++) {
        fgets(nama, sizeof(nama), file);
        fgets(nim, sizeof(nim), file);
        fgets(prodi, sizeof(prodi), file);
        nama[strcspn(nama, "\n")] = 0;
        nim[strcspn(nim, "\n")] = 0;
        prodi[strcspn(prodi, "\n")] = 0;

        printf("=======================================\n");
        printf("Nama: %s\n", nama);
        printf("NIM: %s\n", nim);
        printf("Program Studi: %s\n", prodi);
    }

    fclose(file);
    printf("...\nData mahasiswa berhasil dibaca dari file.\n");
}
