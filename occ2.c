#include <stdio.h>

int main()
{
    int size;
    int arr[size],  i;
    int no, count;

    printf("Enter size of array: ");
    scanf("%d", &size);

    //read array elements
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);//to index =
        scanf("%d", &arr[i]);
    }

    printf("Enter nober to find Occurrence: ");
    scanf("%d", &no);

    //count occurance of no
    count = 0;
    for (i = 0; i < size; i++) {
        if (arr[i] == no)
            count++;
    }
    printf("Occurrence of %d is: %d\n", no, count);
    return 0;
}