#include<stdio.h>

int main(){
  int n;
  printf("Enter the size of array you want to test\n");
  scanf("%d", &n);
 int array[];
 printf("Enter the elements you want to test");
 for(int i = 0; i < n; i++){
  scanf("%d", & array[i]);
 }

 int target;
 printf("Enter Number to search\n");

// algorithm

while(left <= right){
mid = (left + right) / 2; //Find the midle Index

if(array[mid] == target){
printf("Number %d found at index %d\n", target, mid);
int found = 1;
break;
}else if(array[mid] < target){ // search right half
left = mid + 1;
}else{
//search left half
right = mid - 1;
}
}
if (!found){
printf("Number Not found in the Array.\n");
}
return 0;
}
