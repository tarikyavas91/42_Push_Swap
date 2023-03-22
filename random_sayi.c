#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10000 // En yüksek olası sayı

int main(int ac, char **av) {
    int my_sayi = atoi(av[1]);
    int i, j, n;
    int sayilar[MAX];
    //printf("%d\n", my_sayi);
    srand(time(NULL)); // Rastgele sayı üretmek için zamanı kullan

    // Diziyi sıfırla
    for (i = 0; i < MAX; i++) {
        sayilar[i] = 0;
    }

    // 10 tane tekrar etmeyen rastgele sayı üret
    for (i = 0; i <= my_sayi; i++) {
        do {
            n = rand() % MAX;
        } while (sayilar[n] != 0);

        sayilar[n] = 1;
        printf("%d ", n);
    }

    return 0;
}