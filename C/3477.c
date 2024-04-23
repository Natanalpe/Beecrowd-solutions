#include <stdio.h>
 
int main() {
 
    int x, y, z;
    double area; 
    scanf("%d %d %d", &x, &y, &z);
    
    if(x * x == (y * y + z * z)) {
        area = (y + 3.0 * z / 4.0) * z / 2.0;
        printf("AREA = %.f\n", area);
    } else {
        printf("Nao eh retangulo!\n");
    }
    return 0;
}