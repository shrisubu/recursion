
#include <stdio.h>
#include <math.h>

int main()
 {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients of the quadratic equation
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check if roots are real or imaginary
    if (discriminant > 0) 
    {
        // Real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        // Imaginary roots
        printf("Roots are imaginary.\n");
    }

    return 0;
}