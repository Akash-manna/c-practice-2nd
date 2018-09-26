#include <stdio.h>
int main()
{
	int side1, side2, side3;
	/* Input three side of a triangle */
	printf("Enter first side of triangle: ");
	scanf("%d", &side1);
	printf("Enter second side of triangle: ");
	scanf("%d", &side2);
	printf("Enter third side of triangle: ");
    scanf("%d", &side3);
    
    if((side1 + side2) > side3)
    {
        if((side2 + side3) > side1)
        {
            if((side1 + side3) > side2) 
            {
                /*
                 * If side1 + side2 > side3 and
                 *    side2 + side3 > side1 and
                 *    side1 + side3 > side2 then
                 * the triangle is valid.
                 */
                printf("Triangle is valid.\n");
				if ((side1==side2)&&(side2==side3))
				{
					printf("The Triangle is Equilateral");
				}
				else if((side1==side2)||(side2==side3)||(side3==side1))
				{
					printf("The Triangle is Isosceles");
				}
				else
				{
					printf("The Triangle is Scalene");
				}
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}