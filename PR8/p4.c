#include <stdio.h>
#include <math.h>
double getLength(int point_1_x, int point_1_y, int point_2_x, int point_2_y)
{
    return sqrt(pow(point_2_x - point_1_x, 2) + pow(point_2_y - point_1_y, 2));
}
double getArea(double side_1, double side_2, double side_3)
{
    double s = (side_1 + side_2 + side_3) / 2; 
    return sqrt(s * (s - side_1) * (s - side_2) * (s - side_3));
}
int checkPointLocation(int x[], int y[], int new_x, int new_y)
{
    double side1 = getLength(x[0], y[0], x[1], y[1]);
    double side2 = getLength(x[1], y[1], x[2], y[2]);
    double side3 = getLength(x[2], y[2], x[0], y[0]);
    double main_area = getArea(side1, side2, side3);
    double area1 = getArea(
        getLength(x[0], y[0], x[1], y[1]),
        getLength(x[1], y[1], new_x, new_y),
        getLength(new_x, new_y, x[0], y[0]));

    double area2 = getArea(
        getLength(x[1], y[1], x[2], y[2]),
        getLength(x[2], y[2], new_x, new_y),
        getLength(new_x, new_y, x[1], y[1]));

    double area3 = getArea(
        getLength(x[2], y[2], x[0], y[0]),
        getLength(x[0], y[0], new_x, new_y),
        getLength(new_x, new_y, x[2], y[2]));
    double total_area = area1 + area2 + area3;
    return fabs(total_area - main_area) < 1e-6;
}
int main()
{
    int x[3], y[3];
    printf("Enter the coordinates of the three points of the triangle:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Point %d (x, y): ", i + 1);
        scanf("%d %d", &x[i], &y[i]);
    }
    double side1 = getLength(x[0], y[0], x[1], y[1]);
    double side2 = getLength(x[1], y[1], x[2], y[2]);
    double side3 = getLength(x[2], y[2], x[0], y[0]);
    printf("Sides of the triangle: %.2f, %.2f, %.2f\n", side1, side2, side3);
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        printf("The points can form a triangle.\n");
        double area = getArea(side1, side2, side3);
        printf("Area of the triangle: %.2f\n", area);
        int new_x, new_y;
        printf("Enter the coordinates of a point to check (x, y): ");
        scanf("%d %d", &new_x, &new_y);
        if (checkPointLocation(x, y, new_x, new_y))
        {
            printf("The point (%d, %d) lies inside the triangle.\n", new_x, new_y);
        }
        else
        {
            printf("The point (%d, %d) lies outside the triangle.\n", new_x, new_y);
        }
    }
    else
    {
        printf("The points cannot form a triangle.\n");
    }

    return 0;
}
