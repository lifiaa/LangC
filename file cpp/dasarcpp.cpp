//header file untuk input output
#include <iostream> 
// #include <algorithm>
// #include <string>
// #include <vector>
// #include <stack>
// #include <set>
// #include <queue>
// #include <map>
// #include <bits/stdc++.c>  rather use this, but dunno how
// using namespace std; digunakan untuk mempersingkat code yg awalnya std::cout menjadi cout aja (simpel kan wkwk)


/*
tipe data dan varible
int umur = 25;
float tinggi = 1.75;
char inisial = 'A';
bool isActive = true;
*/

/*std::cout digunakan untuk mengirimkan output ke console(layar),
<< digunakan untuk mengarahkan data ke std::cout
std::endl berguna ketika debugging atau ketika menulis log yang penting.

Anda juga bisa menggunakan \n untuk membuat baris baru, namun tidak seperti std::endl, itu tidak membersihkan buffer output.

// std::cout digunakan untuk mengirim output ke konsol.
std::endl digunakan untuk memulai baris baru dan membersihkan buffer output.
\n digunakan untuk memulai baris baru tanpa membersihkan buffer output.*/
#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

// if-else
int main()
{ // untuk titik masuk program
    int a = 21;
    if (a > 17)
    {
        std::cout << "Lebih besar dari 17" << std::endl;
    }
    else
    {
        std::cout << "Tidak lebih besar dari 17" << std::endl;
    }
}

// switch
int main()
{
    char grade = 'A';
    switch (grade)
    {
    case 'A':
        std::cout << "Excellent!" << std::endl;
        break;
    case 'B':
        std::cout << "Good!" << std::endl;
        break;
    default:
        std::cout << "Invalid Grade!" << std::endl;
    }
}

// looping
int main(){
    for(int i = 0; i < 5; ++i){
        std::cout << "i: " << i << std::endl;
    }
    // while
    int num = 0;
    while(num < 5){
        std::cout << "num: " << num << std::endl;
        ++num;
    }
    // do-while loop
    int nmbr = 0;
    do{
        std::cout << "nmbr: " << nmbr << std::endl;
        ++nmbr;
    } while (nmbr < 5);
}