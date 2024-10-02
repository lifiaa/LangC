#include <stdio.h>

// Fungsi untuk mengonversi Celcius ke Fahrenheit
float celciusToFahrenheit(float celcius) {
    return (celcius * 9 / 5) + 32;
}

// Fungsi untuk mengonversi Celcius ke Kelvin
float celciusToKelvin(float celcius) {
    return celcius + 273.15;
}

// Fungsi untuk mengonversi Fahrenheit ke Celcius
float fahrenheitToCelcius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Fungsi untuk mengonversi Kelvin ke Celcius
float kelvinToCelcius(float kelvin) {
    return kelvin - 273.15;
}

int main() {
    int pilihan;
    float suhu, hasil;

    // Menampilkan menu pilihan konversi
    printf("Program Konversi Suhu\n");
    printf("1. Celcius ke Fahrenheit\n");
    printf("2. Celcius ke Kelvin\n");
    printf("3. Fahrenheit ke Celcius\n");
    printf("4. Kelvin ke Celcius\n");
    printf("Pilih konversi (1-4): ");
    scanf("%d", &pilihan);

    // Memproses pilihan pengguna
    switch (pilihan) {
        case 1:
            printf("Masukkan suhu dalam Celcius: ");
            scanf("%f", &suhu);
            hasil = celciusToFahrenheit(suhu);
            printf("%.2f Celcius = %.2f Fahrenheit\n", suhu, hasil);
            break;
        case 2:
            printf("Masukkan suhu dalam Celcius: ");
            scanf("%f", &suhu);
            hasil = celciusToKelvin(suhu);
            printf("%.2f Celcius = %.2f Kelvin\n", suhu, hasil);
            break;
        case 3:
            printf("Masukkan suhu dalam Fahrenheit: ");
            scanf("%f", &suhu);
            hasil = fahrenheitToCelcius(suhu);
            printf("%.2f Fahrenheit = %.2f Celcius\n", suhu, hasil);
            break;
        case 4:
            printf("Masukkan suhu dalam Kelvin: ");
            scanf("%f", &suhu);
            hasil = kelvinToCelcius(suhu);
            printf("%.2f Kelvin = %.2f Celcius\n", suhu, hasil);
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }

    return 0;
}
