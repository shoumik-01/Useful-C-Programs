#include <stdio.h>
#include <math.h>

// Function to simplify square root terms
void simplifySquareRoot(double underRoot) {
    int i;
    int largest_perfect_square = 1;

    // Find the largest perfect square factor
    for (i = 1; i * i <= underRoot; i++) {
        if (((int)underRoot % (i * i)) == 0) {
            largest_perfect_square = i * i;
        }
    }

    // If the number can be simplified
    if (largest_perfect_square > 1) {
        double coefficient = sqrt(largest_perfect_square);
        double remaining = underRoot / largest_perfect_square;
        printf("%.2f√%.0f", coefficient, remaining);
    } else {
        printf("√%.0f", underRoot);
    }
}

int main() {
    double x1, y1, z1, x2, y2, z2;

    // Get input for first point
    printf("Enter coordinates for first point (x1 y1 z1): ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);

    // Get input for second point
    printf("Enter coordinates for second point (x2 y2 z2): ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    // Calculate differences
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dz = z2 - z1;

    // Calculate sum of squares
    double sumOfSquares = dx*dx + dy*dy + dz*dz;

    // Calculate decimal result
    double distance = sqrt(sumOfSquares);

    // Print result in decimal form
    printf("\nDistance in decimal form: %.6f\n", distance);

    // Print result in rational form
    printf("Distance in rational form: ");
    simplifySquareRoot(sumOfSquares);
    printf("\n");

    return 0;
}
