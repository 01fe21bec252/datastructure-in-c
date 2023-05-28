#include <stdio.h>

int countDigitOccurrences(int arr[], int size, int digit) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        int number = arr[i];

        while (number > 0) {
            int lastDigit = number % 10;
            if (lastDigit == digit) {
                count++;
            }
            number /= 10;
        }
    }

    return count;
}

void printDuplicateElements(int arr[], int size) {
    printf("Duplicate elements in the array: ");

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    printf("\n");
}

void printDigitOccurrences(int arr[], int size) {
    printf("Digit occurrences in the array:\n");

    for (int digit = 0; digit <= 9; digit++) {
        int digitCount = countDigitOccurrences(arr, size, digit);
        printf("%d occurred %d times\n", digit, digitCount);
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int myArray[size];


    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &myArray[i]);
    }

    printDigitOccurrences(myArray, size);

    printDuplicateElements(myArray, size);

    return 0;
}
