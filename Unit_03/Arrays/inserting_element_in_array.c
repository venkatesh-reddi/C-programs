/* This programs adds a number to the array of numbers
    User can specify the location of the new element and its value*/
#include <stdio.h>
void main()
{
    int N, y;  // defined the variabels which represent the available spaces in array
    int num, pos, list[N]; // defined "num" variable which represents the new value to be added to list
    printf("Enter the number of elements in the list: ");
    scanf("%d", &y); // This is the temporary length of the array, which is further increased by 1
    N = y + 1;
    printf("Enter the elements: ");
    for(int i = 0; i < N - 1; i++) // iterated to take all the values of the elements for the array
    scanf("%d", &list[i]);
    printf("Enter the number to be inserted in the list: ");
    scanf("%d", &num); // This value is the number we want to insert in the array
    printf("Enter the position of the above entered number: ");
    scanf("%d", &pos); // The variable "pos" represents the position of the element in the array
    for(int i = N; i > pos; i--) // Moving the elements in the list to make space for the new value
    list[i] = list[i - 1]; 
    list[pos] = num;  // inserting the new number to the array
    for(int i = 0; i < N; i++) // Itterating over the array elements and printing all of them.
    printf("%d\t", list[i]);
}