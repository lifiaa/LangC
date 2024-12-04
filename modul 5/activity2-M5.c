#include <stdio.h>

int main(){
    float data[10][3];
    int input;
    float rataMatematika = 0, rataFisika = 0, rataKimia = 0;

    printf("\n\n=== ACTIVITY 2 EXECUTION STARTED ===\n\n");

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &input);

    for(int i = 0; i < input; i++){
        printf("Masukkan nilai untuk mahasiswa ke-%d (Matematika, Fisika, Kimia): ", i+1);
        scanf("%f %f %f", &data[i][0], &data[i][1], &data[i][2]);

        rataMatematika += data[i][0];
        rataFisika += data[i][1];
        rataKimia += data[i][2];
    }

    rataMatematika /= input;
    rataFisika /= input;
    rataKimia /= input;

    printf("\nData Nilai Ujian: \n");
    printf("=================================================================\n");
    printf("| Mahasiswa | Matematika | Fisika | Kimia |\n");
    printf("=================================================================\n");

    for (int i = 0; i < input; i++) {
        printf("|Mhs %-6d | %-10.2f | %-5.2f | %-5.2f |\n", i+1, data[i][0], data[i][1], data[i][2]);
    }
    printf("=================================================================\n");
    printf("Rata-rata nilai: \n");
    printf("Matematika: %.2f\n", rataMatematika);
    printf("Fisika: %.2f\n", rataFisika);
    printf("Kimia: %.2f\n", rataKimia);    

    printf("\n=== CODE EXECUTION SUCCESS ===\n\n");
    return 0;
}