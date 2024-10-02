#include <stdint.h>
#include <stdio.h>
#include <string.h>
// demo modul 1 - fiaa infor h
int main(){
    char nama[40]; 
    int nim, nilaiTugas, nilaiUTS, nilaiUAS;
    float nilaiAkhir;

    // input data
    printf("\n\n--- PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA ---\n\n");
    printf("Masukkan Nama Mahasiswa: ");
    gets(nama); //sering buffer overflow klo user input >= char yg bs ditampung 
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
    printf("\n---------------------------------------------------\n\n");
    printf("Nama Mahasiswa: %s", nama);
    printf("NIM Mahasiswa: %d\n", nim);
    printf("Nilai Tugas: %d\n", nilaiTugas);
    printf("Nilai UTS: %d\n", nilaiUTS);
    printf("Nilai UAS: %d\n", nilaiUAS);
    printf("Nilai Akhir: %.2f", nilaiAkhir);

    printf("\n\n---------------------------------------------------");
    
    printf("\n\n============ CODE EXECUTION SUCCESSFULL ===========\n\n");

    return 0;
}