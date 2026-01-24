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
    
    printf("Ingrese un numero: ");
    scanf("%i", &number);

   result = is_even(number);

if (result == 1){

    printf("El numero es par\n");
  }else{
    printf("El numero es impar\n");
  }  
   
    return 0;
}