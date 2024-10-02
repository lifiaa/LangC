#include <stdio.h>
#include <stdbool.h>
#define PHI 3.14159

// Fungsi untuk menghitung luas lingkaran
float hitungLuas(float radius)
{
    return PHI * radius * radius;
}

// Fungsi untuk menghitung keliling lingkaran
float hitungKeliling(float radius)
{
    return 2 * PHI * radius;
}

int main()
{
    float radius, luas, keliling;
    char ulang;
    do
    {
        // Input radius dari user
        printf("Masukkan jari-jari lingkaran: ");
        scanf("%f", &radius);
        // Memastikan radius tidak negatif atau nol
        if (radius <= 0)
        {
            printf("Error: Radius tidak boleh negatif atau nol. Silakan coba lagi.\n");
        }
        else
        {
            // Menghitung luas dan keliling lingkaran
            luas = hitungLuas(radius);
            keliling = hitungKeliling(radius);

            // Menampilkan hasil perhitungan
            printf("Luas lingkaran: %.2f\n", luas);
            printf("Keliling lingkaran: %.2f\n", keliling);
        }
        // Tanya apakah ingin menghitung ulang
        printf("Apakah Anda ingin menghitung ulang? (y/n): ");
        while (getchar() != '\n')
            ; // Bersihkan buffer input
        scanf("%c", &ulang);
        // Jika user memasukkan selain 'y' atau 'Y', keluar program
        if (ulang == 'n' || ulang == 'N')
        {
            printf("Terima kasih telah menggunakan program ini. Sampai jumpa!\n");
            break;
        }
    } while (ulang == 'y' || ulang == 'Y');
    return 0;
}
