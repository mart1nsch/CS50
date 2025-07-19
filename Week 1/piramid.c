#include <cs50.h>
#include <stdio.h>

void print_rows(int levels);
void print_columns(int total_levels, int levels_row);

int main(void) {
    int levels;

    do {
        levels = get_int("Levels of piramid: ");
    } while (levels < 1);

    print_rows(levels);
}

void print_rows(int levels) {
    for (int i=1; i<=levels; i++) {
        print_columns(levels, i);
        printf("\n");
    }
}

void print_columns(int total_levels, int levels_row) {
    for (int i=0; i<(total_levels - levels_row); i++) {
        printf(" ");
    }

    for (int i=0; i<levels_row; i++) {
        printf("#");
    }
}
