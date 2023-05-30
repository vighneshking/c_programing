#include<stdio.h>
int main() {
    int conversion;
    printf("\n\t Enter '1' for degree to radian conversion \n\t Enter '2' for radian to degree");
    printf("\n\tEnter your choice:");
    scanf("%d", &conversion);
    switch (conversion)
    {
    case 1: { int dig;
    printf("Enter degree: ");
    scanf("%d", &dig);

    int rad = dig*3.14/90*2;
    printf("Radian is: %d", rad);
        break;
    }
    case 2:{int rad;
    printf("Enter radian: ");
    scanf("%d", &rad);

    int dig = 2*rad*90/3.14;
    printf("digree is: %d", rad);
        break;
    
    }
    default:
    printf("Enter valid choice");
        break;
    }
    
    return 0;


}