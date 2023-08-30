#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main() {
    srand(time(NULL));
    char a[] = {'S', 'P', 'T'};
    int b = sizeof(a) / sizeof(a[0]);
    char key[30];

    while (1) {
        printf("Enter a Character (S/P/T to play, Q to quit): ");
        scanf(" %s", key); 

        if (toupper(key[0]) == 'Q') {
            break; 
        }

        int c = rand() % b;
        printf("Random Choice: %c\n", a[c]);

        if (toupper(key[0]) == a[c]) {
            printf("You Win!\n");
        } else {
            printf("You Lose!\n");
        }
    }

    
}
