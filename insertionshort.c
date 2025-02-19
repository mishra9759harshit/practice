/*
  This program Demonstartes the use of insertion sorty.
  The algorithm picks elements one by one and inserts
  them in the correct position by shifting elements.

  Steps:
  1. Assume the first element is sorted.
  2. pick the next element.
  3. Compare it with previous elements.
  4. shift elements if necessary.
  5. insert at the correct position.
*/

  /*
    Step-by-Step Explanation:
  Think of an array as a deck of cards.
Consider the first element as already sorted.
  you don't need to move it anywhere.
  Step 2:
  pick the next card (element)
Compare it with the sorted part (left side).
If it is smaller, shift the larger elements to the right.
Step 3:
Insert it into the correct position.
   Once you find the correct place, insert it there.

Step 4:
   repeat for all elements.
  Continue this process for all elements until the array is fully sorted.

*/


// Here is the Practical Example 

#include<stdio.h>
int main(){
  int n;
printf("Numbers you want to Input\n");
scanf("%d", &arr[i]);

int arr[n];
printf("please Enter %d numbers \n");
for(int i = 0; i < n; i++){
 scanf("%d", &arr[i]);
}
// Sorting Algorithm

for(int i = 1; i < n; i++){
 int key = arr[i];
int j = i - 1;

//Right sift untill Big element not found

while(j >= 0 && arr[j] > key){
arr[j + 1] =arr[j];
j--;
}
arr[j + 1] = key;
// put the element into right place

printf(" Shorted Array :\n");
for(int i = 0; i < n; i++){
printf("%d", arr[i]);
}
return 0;
}
// lets test this program 
