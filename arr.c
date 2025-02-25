// #include <stdio.h>

// int main() {
//     int arr2[] = {423, 5621, 785, 20, 11, 52, 36, 1, 0, 25, 1, 698, 44444};
//     int n = sizeof(arr2) / sizeof(arr2[0]);  // Calculate the number of elements in the array
//     int y = arr2[0];  // Assume the first element is the largest initially

//     for (int i = 1; i < n; i++) {  // Start loop from the second element
//         if (arr2[i] > y) {
//             y = arr2[i];  // Update y if a larger number is found
//         }
//     }

//     printf("Largest Number in Array is : %d \n", y);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[100], n, element, i;

//     // Input the number of elements in the array
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     // Input elements of the array
//     printf("Enter the elements of the array:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Input the element to insert at the end
//     printf("Enter the element to insert at the end: ");
//     scanf("%d", &element);

//     // Insert the element at the end
//     arr[n] = element;
//     n++;

//     // Output the updated array
//     printf("Updated array:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// #include <stdio.h>

// void removeSpaces(char str[]) {
//     int i = 0, j = 0;
    
//     // Traverse through the string
//     while (str[i]) {
//         // If the current character is not a space, copy it to the same index
//         if (str[i] != ' ') {
//             str[j++] = str[i];
//         }
//         i++;
//     }
    
//     // Null-terminate the string
//     str[j] = '\0';
// }

// int main() {
//     char str[100];
    
//     // Input the string
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
    
//     // Remove spaces
//     removeSpaces(str);
    
//     // Output the modified string
//     printf("String after removing spaces: %s\n", str);
    
//     return 0;
// }


#include <stdio.h>

int main() {
    int arr[100], n, i;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the elements in reverse order
    printf("Array elements in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
