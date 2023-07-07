#include <stdio.h>

void bubbleSort(int array[], int n) {
    int counter = 1;
    for (int i = 0; i < n-1; i++) {
        printf("\n\nswap counter: %d", counter);
        for (int j = 0; j < n-i-1; j++) {
        if (array[j] > array[j+1]) {//then swap
            int temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
        }
    counter++;
    }
}

int main(void) {
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    printf("Array bofore sorting: \n");
    for(int i = 0; i <= 8; i++)
        printf("%d   ", array[i]);
    bubbleSort(array, 9);
    printf("\n\nSorted array: ");
    for(int i = 0; i <= 8; i++)
        printf("%d   ", array[i]);
}