#include <stdint.h>
#include <stdio.h>
// #include <string.h>
// demo modul 1 - fiaa infor h

int main(){
    char nama[30]; 
    char nim[16];
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;

    // input data
    printf("\n\n--- PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA ---\n\n");
    printf("Masukkan Nama Mahasiswa: ");
    //scanf("%s", nama); // g pake spasi :) buffer klo kepanjangan input
    //gets(nama); //sering buffer overflow klo user input >= char yg bs ditampung 
    fgets(nama, sizeof(nama), stdin); // g buffer overflow, menentukan panjang maksimum karakter yang dibaca dari input, termasuk newline.
    printf("Masukkan NIM Mahasiswa: ");
    fgets(nim, sizeof(nim), stdin);
    printf("Masukkan Nilai tugas (0-100): ");
    scanf("%f", &nilaiTugas);
    printf("Masukkan Nilai UTS (0-100): ");
    scanf("%f", &nilaiUTS);
    printf("Masukkan Nilai UAS (0-100): ");
    scanf("%f", &nilaiUAS);

    // hitung nilai akhir
    nilaiAkhir = (nilaiTugas * 0.2) + (nilaiUTS * 0.35) + (nilaiUAS * 0.45);

    // print hasil
    printf("\n---------------------------------------------------\n\n");
    printf("Nama Mahasiswa: %s", nama);
    printf("NIM Mahasiswa: %s\n", nim);
    printf("Nilai Tugas: %.2f\n", nilaiTugas);
    printf("Nilai UTS: %.2f\n", nilaiUTS);
    printf("Nilai UAS: %.2f\n", nilaiUAS);
    printf("Nilai Akhir: %.2f", nilaiAkhir);

    printf("\n\n---------------------------------------------------");
    
    printf("\n\n============ CODE EXECUTION SUCCESSFULL ===========\n\n");

    return 0;
}