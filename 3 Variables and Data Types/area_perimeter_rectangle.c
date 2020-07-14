#include <stdio.h>
#include <stdlib.h>

int main()
{
    double height = 50.0, width = 24.5, area = 0.0, permeter = 0.0;

    permeter = 2 * (height + width);
    area = height * width;

    printf("\nThe height is %f width is %f and perimeter is %f of the rectangle.",height,width,permeter);
    printf("\nThe height is %f width is %f and area is %f of the rectangle.",height,width,area);

    return 0;
}
