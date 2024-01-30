#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Invalid array size. Please enter a size of at least 2.\n");
        return 1; 
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int secondLargest = arr[1];

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
            printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int secondLargest = arr[1];

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
             printf("2nd largest elements:\n", largest);
            return 0;
    }   
    }
      }  
}
}
       
        
            
         
    
    
    
    
    
    