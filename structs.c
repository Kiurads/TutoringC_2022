#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int main(int argc, char **argv) {
    Date date;

    date.day = 10;
    date.month = 4;
    date.year = 2022;

    printf("%d %d %d\n", date.day, date.month, date.year);
}