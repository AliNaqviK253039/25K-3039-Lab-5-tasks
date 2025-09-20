#include <stdio.h>
int main(){
   int color, red, yellow, green;
   printf("Enter the color of the traffic light (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &color);

    if (color == 'R' || color == 'r') {
        printf("Stop\n");
    } else {
        if (color == 'Y' || color == 'y') {
            printf("Caution\n");
        } else {
            if (color == 'G' || color == 'g') {
                printf("Go\n");
            } else {
                printf("Invalid color. Please enter R, Y, or G.\n");
            }
        }
    }

    return 0;
}

