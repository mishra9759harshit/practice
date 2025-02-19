#include<stdio.h>

int main(){
  int array[100], i, n, item, location;
printf("how many numbers you want to enten\n");
scanf("%d", &n);
printf("Enter the elements of Array\n");
for(i = 0; i < n; i++){
scanf("%d", &array[i]);
}
printf("Eneter The number you Want to Search:\n");
scanf("%d", &item);

// Algorithm 
for( i = 0; i < n; i++){
if(item == array[i]){
location = i;
break;
}
}
if(location >= 0){
printf("\n %d is found position %d ", item, location + 1);

}else{
printf("\n item does not found\n");
}
return 0;
}
