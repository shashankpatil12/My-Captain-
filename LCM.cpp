#include <stdio.h>


/* Function declaration */
int lcm(int a, int b);


int main()
{
    int num1, num2, LCM;

    printf("Input first number:");
    scanf("%d", &num1);
    printf("Input second number:");
    scanf("%d", &num2);
    if(num1 > num2)
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);
        
    printf("LCM of %d and %d = %d", num1, num2, LCM);
    
    return 0;
}

int lcm(int a, int b)
{
    static int multiple = 0;
    
    /* Increments multiple by adding max value to it */
    multiple += b;
    
    /*
     * Base condition of recursion
     * If found a common multiple then return the multiple.
     */
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}
