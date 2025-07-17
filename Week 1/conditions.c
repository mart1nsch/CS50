#include <cs50.h>
#include <stdio.h>

int main(void) {
    int num = get_int("Digit a number: ");

    if (num > 10) {
        printf("Number bigger than 10!\n");
    } else if (num == 10) {
        printf("Number is equal to 10\n");
    } else {
        printf("Number isn't bigger than 10!\n");
    }
}
