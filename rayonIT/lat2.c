#include <stdint.h>
#include <stdio.h>
#include <string.h>
// demo modul 1 - fiaa infor h
int main(){
    char nama[60];
    int nim;
    int nilaiTugas;
    int nilaiUTS;
    int nilaiUAS;
    float nilaiAkhir;

    // input data
    printf("\n--- PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA ---\n");
    printf("Masukkan Nama Mahasiswa: ");
    fgets(nama, sizeof(nama), stdin);
    printf("Masukkan NIM Mahasiswa: ");
    scanf("%d", &nim);
    printf("Masukkan Nilai tugas (0-100): ");
    scanf("%d", &nilaiTugas);
    printf("Masukkan Nilai UTS (0-100): ");
    scanf("%d", &nilaiUTS);
    printf("Masukkan Nilai UAS (0-100): ");
    scanf("%d", &nilaiUAS);

    // hitung nilai akhir
    nilaiAkhir = (nilaiTugas * 0.2) + (nilaiUTS * 0.35) + (nilaiUAS * 0.45);

    // print hasil
    printf("---------------------------------------------------");
    printf("\nNama Mahasiswa: %s", nama);
    printf("\nNIM Mahasiswa: %d", nim);
    printf("\nNilai Tugas: %d", nilaiTugas);
    printf("\nNilai UTS: %d", nilaiUTS);
    printf("\nNilai UAS: %d", nilaiUAS);
    printf("\nNilai Akhir: %2f", nilaiAkhir);

    printf("\n---------------------------------------------------");
    
    printf("\n\n============ CODE EXECUTION SUCCESSFULL ===========\n\n");

    // return 0;
}