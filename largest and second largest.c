#include <stdio.h>
#include <stdlib.h>
int main()
{

int size,i,arr[50];//variable declaration for size of array

int large=0, secondLarge=0;

printf("Enter the size of array: ");

scanf("%d",&size);//taking input from user for number of elements in array

for(i=0; i<size; i++){
    
    printf("\n Enter the array element ");
    printf("%d :",(i+1));
    
    scanf("%d",&arr[i]);//Taking input for array elements 

    if(large<arr[i]){
      secondLarge=large;
      large=arr[i];
    }
    else if(secondLarge<arr[i]){
    secondLarge=arr[i];
    }
}

//display result on the screen
printf("\n\n\n");
printf("The largest number in array is %d",large);
printf("\n The second largest number in array is %d",secondLarge);


return 0;
}
