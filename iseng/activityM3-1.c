#include <stdio.h>

enum JenisTiket {
    reguler = 30000, 
    vip = 100000, 
    vvip = 150000};

enum Film {
    spiderman = 50000, 
    batman = 55000, 
    superman = 60000, 
    avengers = 70000, 
    joker = 45000};

int main(){
    enum JenisTiket tiket;
    enum Film film;
    int pilihanFilm, pilihanTiket;
    int totalHarga;
    int uang;
    char isMember;

    int *p;
    p = &totalHarga;

    printf("\n\n============ ACTIVITY #3 EXECUTION STARTED ===========");
    printf("\n======= BIOSKOP =======\n\n");
    printf("Film yang tersedia: \n");
    printf("1. Spiderman - Rp.50,000\n");
    printf("2. Batman - Rp.55,000\n");
    printf("3. Superman - Rp.60,000\n");
    printf("4. Avengers - Rp.70,000\n");
    printf("5. Joker - Rp.45,000\n");
    printf("\nPilih film (1-5): ");
    scanf("%d", &pilihanFilm);

    switch(pilihanFilm) {
        case 1: film = spiderman; break;
        case 2: film = batman; break;
        case 3: film = superman; break;
        case 4: film = avengers; break;
        case 5: film = joker; break;
        default: printf("Pilihan film tidak valid.\n"); return 1;
    }

    printf("Jenis tiket (1-3):\n");
    printf("1. Reguler - Rp.30,000\n");
    printf("2. VIP - Rp.100,000\n");
    printf("3. VVIP - Rp.150,000\n");
    printf("\nPilih jenis tiket (1-3): ");
    scanf("%d", &pilihanTiket);

    switch(pilihanTiket) {
        case 1: tiket = reguler; break;
        case 2: tiket = vip; break;
        case 3: tiket = vvip; break;
        default: printf("Pilihan tiket tidak valid.\n"); return 1;
    }

    printf("\n\nApakah anda adalah member? (y/n): ");
    scanf(" %c", &isMember); //c menghindari buffer

    if(isMember == 'y' || isMember == 'Y'){
        totalHarga  = (tiket + film) * 0.90;
        printf("\n\nTotal harga tiket setelah diskon: Rp.%d", totalHarga);
    } else{
        totalHarga = tiket + film;
        printf("\n\nTotal harga tiket: Rp.%d", totalHarga);
    }

    printf("\n\nAlamat memori variabel total: %p", &totalHarga);
    printf("\n\nMasukkan uang pembayaran: Rp.");
    scanf("%d", &uang);

    if(uang >= totalHarga){
        printf("\n\nKembalian anda: Rp.%d", uang - totalHarga);
    } else{
        printf("\n\nUang anda tidak cukup! Silahkan coba lagi.");
    }
    
    printf("\n\n============ CODE EXCECUTION SUCCESSFUL ===========\n");
    printf("============ ACTIVITY #3 EXECUTION ENDED ===========\n\n");
    return 0;
}