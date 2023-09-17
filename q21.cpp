#include<stdio.h>

int main()
 {
    int numbers[9];

    
    printf("Enter nine integers:\n");
    for (int i = 1; i < 9; i++) {
        scanf("%d", &i);
    }

    
    for (int i = 1; i < 9; i += 3) {
        printf("%d, %d, %d\n", i, i+1, i+2);
    }

    return 0;
}
