#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    
    int x;
    int n;
    int result;
    
    printf("\nEnter Number:");
           scanf("%d",&x);
    
    printf("Enter Number:");
           scanf("%d",&n);

    result = pow(x, n);

    printf("\n%d raised to the power of %d is %d\n\n", x, n, result);

    return 0;
}
