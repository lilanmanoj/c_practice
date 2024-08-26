#include <stdio.h>

void print_array(unsigned int length, float arr[])
{
    for (int i = 0; i < length; i++) {
        if (i > 0) {
            printf(", %.2f", arr[i]);
        } else {
            printf("%.2f", arr[i]);
        }
    }

    printf("\n");
}

void bubble_sort(unsigned int length, float arr[])
{
    for (int i = 0; i < length; i++) {
        printf("\nPass %d:\n", i + 1);

        for (int j = 0; j < length - 1; j++) {
            if (arr[j] > arr[j+1]) {
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        print_array(length, arr);
    }
}

int main()
{
    unsigned int length;

    printf("Enter number of elements: ");
    scanf(" %d", &length);

    float arr[length];

    printf("Enter %d floating point numbers to sort:\n", length);
    
    for (int i = 0; i < length; i++) {
        scanf(" %f", &arr[i]);
    }

    bubble_sort(length, arr);

    return 0;
}