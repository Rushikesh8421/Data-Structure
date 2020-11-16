#include <stdio.h>

int main()
{
    
    int arr[10];
    for(int i = 0; i<10; i++){
         printf("Enter the value for index %d: \n", i);
         scanf("%d", &arr[i]);
    }

     for(int i = 0; i<10; i++){
         printf("The values for index %d is %d \n", i, arr[i]);
    }
    
    return 0;
}
