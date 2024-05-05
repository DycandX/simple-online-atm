#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void loading_bar(int seconds) {
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading....");
    printf("\n\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t");
    

    int interval = 500; // default interval in milliseconds
    int iterations = seconds * 1000 / interval; // calculate the number of iterations

    char x = 219; // loading character
    int i;  // declare i outside the loop

    for (i = 0; i < iterations; i++) {
        Sleep(interval);
        printf("%c", x);
    }
    system("cls");
    
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading Completed");
    Sleep(2000);

    system("cls");
}

int main() {
    loading_bar(5);
    printf("\n\n\t\t\t\t\t\t\tTest Berhasil\n\n");
    return 0;
}

