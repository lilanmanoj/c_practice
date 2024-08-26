#include <stdio.h>

int main()
{
    const int length = 10;
    int arr[length];

    printf("Enter %d decimals to sort:\n", length);
    
    for (int i = 0; i < length; i++) {
        scanf(" %d", &arr[i]);
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nSorted decimals: \n");

    for (int i = 0; i < length; i++) {
        if (i > 0) {
            printf(", %d", arr[i]);
        } else {
            printf("%d", arr[i]);
        }
    }

    printf("\n");

    return 0;
}