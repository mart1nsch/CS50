#include <cs50.h>
#include <stdio.h>

int main(void) {
    int first_num = get_int("Digit the first number: ");
    int second_num = get_int("Digit the second number: ");
    int result = first_num + second_num;
    printf("The result is: %i\n", result);
}
