#include<stdio.h>

int main(){
   int n;
   printf("Enter the number you want to enter\n");
   scanf("%d", &n);

   int array[n];
   printf("Enter %d elements:", n);
   for(int i= 0; i < n; i++){
     scanf("%d", &array[i]);
   }
 // Bubble sort Algorithm 

 for(int i = 0; i < n - 1; i++) {// Number of passes
   for(int j = 0; j < n - i - 1; j++){// Comparing adjacent elements
      if(array[j] > array[j + 1]){// swap if in wrong order
         int temp = array[j];
         array[j] = array[j + 1];
         array[j + 1] = temp;
      }
   }
 }

// printing sorted array
printf("Sorted Array:");
for(int i = 0; i < n; i++){
printf("%d", array[i]);
}
printf("\n");

return 0;
}
