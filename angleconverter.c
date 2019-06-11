#include<stdio.h>
#include<ncurses.h>
#include<curses.h>
#include<math.h>
#include<stdlib.h>

#define PI 3.14159265

float DegreesToRadians(float degrees);
float RadiansToDegrees(float radians);

float DegreesToRadians(float degrees)
{
    float radians = degrees*PI/180;
    return radians;
}

float RadiansToDegrees(float radians)
{
    float degrees = radians*180/PI;
    return degrees;
}

int main(void)
{
    int exit = 0, option = 0;
    float degrees = 0, radians = 0, angle = 0;
    while (exit == 0)
    {
        system("clear");
        printf("\n Choose your option: "
               "\n\t[1] Convert degrees to radians"
               "\n\t[2] Convert radians to degrees"
               "\n\t[0] Exit program\n");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("\n Enter the angle in degrees: ");
            scanf("%f",&degrees);
            angle = DegreesToRadians(degrees);
            printf(" The equivalent angle in radians: %.3f",angle);
            getch();
            break;
        case 2:
            printf("\n Enter the angle in radians: ");
            scanf("%f",&radians);
            angle = RadiansToDegrees(radians);
            printf(" The equivalent angle in degrees: %.3f",angle);
            getch();
            break;
        case 0:
            exit = 1;
            break;
        default:
            printf("\nNo such option. Enter again.");
            getch();
            break;
        }
    }
    printf("\n\nPress any key to exit...");
    getch();
    return 0;
}
