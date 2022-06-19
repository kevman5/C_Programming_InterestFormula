#include <stdio.h>
int main(void)
{
    int p1, r1, t1, total;


    printf("Enter the total principal: ");
    scanf("%d", &p1);
    printf("Enter the rate: ");
    scanf("%d", &r1);
    printf("Enter Length of the loan: (in years)");
    scanf("%d", &t1);
    total = p1 * r1 * t1;
    printf("Total Interest is %d",total);

}
