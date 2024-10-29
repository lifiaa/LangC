#include <stdio.h>

int main(){
    int day, month, year;
    char dash;

    printf("Masukkan tanggal (day-month-year): ");
    scanf("%d%c%d%c%d", &day, &dash, &month, &dash, &year);

    char* monthName;
    switch (month){
    case 1: monthName = "Januari"; break;
    case 2: monthName = "Februari"; break;
    case 3: monthName = "Maret"; break;
    case 4: monthName = "April"; break;
    case 5: monthName = "Mei"; break;
    case 6: monthName = "Juni"; break;
    case 7: monthName = "Juli"; break;
    case 8: monthName = "Agustus"; break;
    case 9: monthName = "September"; break;
    case 10: monthName = "Oktober"; break;
    case 11: monthName = "November"; break;
    case 12: monthName = "Desember"; break;
    default: monthName = "Invalid Month"; break;
    }
    
    if(month >= 1 && month <= 12){
        printf("Tanggal: %d %s %d", day, monthName, year);
    }else{
        printf("Tanggal tidak valid");
    }
}