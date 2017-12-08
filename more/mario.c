#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = 0;
    bool reinput = true;
    while(reinput) {
        printf("Choose a pyramid height: ");
        a = get_int();
        if(a>=0 && a<24) {
            reinput = false;
        }
        else {
            printf("That height is invalid.  Please enter a positive integer between 0 and 23.\n");
        }
    }
    for(int i = 1; i<=a; i++) {
        for (int n = i; n<a; n++) {
            printf(" ");
        }
        for (int m = a; m > a-i; m--) {
            printf("#");
        }
        printf("  ");
        for (int m = a; m > a-i; m--) {
            printf("#");
        }
        printf("\n");
    }
}