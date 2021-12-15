#include <stdio.h>
void main()
{
    int arr1[30], arr2[30], res[60];
    int i, j, k, n1, n2;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for first array: ", n1);
    for( i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for second array: ", n2);
    for( i = 0; i < n2; i++){
        scanf("%d", &arr2[i]);
    }
    i = 0;
    j = 0; 
    k = 0;
    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            res[k] = arr1[i];
            i++;
            k++;
        }
        else{
            res[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i < n1){
        res[k] = arr1[i];
        i++;
        k++;
    }
    while(j < n2){
        res[k] = arr2[j];
        k++;
        j++;
    }
    printf("\nMerged array is: ");
    for(i = 0; i < n1 + n2; i++)
    printf("%d\t", res[i]);
}