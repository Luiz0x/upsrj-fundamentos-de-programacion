#include <stdio.h>

int is_even(int num) {
    if (num % 2 == 0){
        return 1;
    } else{
        return 0;
    }
   }
   
   int main(){
   int number;
   int result;
    
    printf("Enter the number: ");
    scanf("%i", &number);

   result = is_even(number);

if (result == 1){

    printf("The number is pair\n");
  }else{
    printf("the number isn't pair lol\n");
  }  
   
    return 0;
}