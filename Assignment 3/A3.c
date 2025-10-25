#include <stdio.h>

void main() {
    int num, digit1, digit2, digit3, digit4;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Please enter a valid 4-digit number.\n");
    } else {
    digit1 = num / 1000;
    digit2 = (num / 100) % 10;
    digit3 = (num / 10) % 10;
    digit4 = num % 10;

    printf("In words: ");

    switch (digit1) {
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        case 4: printf("Four"); break;
        case 5: printf("Five"); break;
        case 6: printf("Six"); break;
        case 7: printf("Seven"); break;
        case 8: printf("Eight"); break;
        case 9: printf("Nine"); break;
    }
    printf(" Thousand ");

    switch (digit2) {
        case 0: break;
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        case 4: printf("Four"); break;
        case 5: printf("Five"); break;
        case 6: printf("Six"); break;
        case 7: printf("Seven"); break;
        case 8: printf("Eight"); break;
        case 9: printf("Nine"); break;
    }
    printf(" Hundred ");
    if (digit3 == 1) {
        switch (digit4) {
            case 0: printf("Ten"); break;
            case 1: printf("Eleven"); break;
            case 2: printf("Twelve"); break;
            case 3: printf("Thirteen"); break;
            case 4: printf("Fourteen"); break;
            case 5: printf("Fifteen"); break;
            case 6: printf("Sixteen"); break;
            case 7: printf("Seventeen"); break;
            case 8: printf("Eighteen"); break;
            case 9: printf("Nineteen"); break;
        }
    } else {
        switch (digit3) {
            case 2: printf("Twenty "); break;
            case 3: printf("Thirty "); break;
            case 4: printf("Forty "); break;
            case 5: printf("Fifty "); break;
            case 6: printf("Sixty "); break;
            case 7: printf("Seventy "); break;
            case 8: printf("Eighty "); break;
            case 9: printf("Ninety "); break;
        }

        switch (digit4) {
            case 1: printf("One"); break;
            case 2: printf("Two"); break;
            case 3: printf("Three"); break;
            case 4: printf("Four"); break;
            case 5: printf("Five"); break;
            case 6: printf("Six"); break;
            case 7: printf("Seven"); break;
            case 8: printf("Eight"); break;
            case 9: printf("Nine"); break;
        }
    }
    }
    printf("\n");
}

