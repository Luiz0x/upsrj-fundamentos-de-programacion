#include <stdio.h>

int main() {
    float side, area, volume;

    
    printf("Enter the side length: ");
    
    // Epic Insane scan
    if (scanf("%f", &side) != 1) {
        
        return 1;
    }

    // Insane Calculations
    area = side * side;
    volume = side * side * side;

    printf("\nResults:\n");
    printf("- Square area is: %.2f\n", area);
    printf("- Volume cube is: %.2f\n", volume);

    return 0;
}