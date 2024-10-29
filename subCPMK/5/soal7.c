#include <stdio.h>

int main(){
    int jam, menit, detik;
    char colon1, colon2;

    printf("Masukkan waktu dalam format jam:menit:detik (contoh: 12:34:56): ");
    scanf("%d%c%d%c%d", &jam, &colon1, &menit, &colon2, &detik);

    if((colon1 == ':' && colon2 == ':') && 
    (jam >= 0 && jam < 24) && 
    (menit >= 0 && menit < 60) && 
    (detik >= 0 && detik < 60))
    {
        printf("Waktu dalam format 24 jam: %02d:%02d:%02d\n", jam, menit, detik);
    } else{
        printf("Format waktu tidak valid.\n");
    }

    return 0;
}