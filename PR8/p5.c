#include <stdio.h>
double feetToInches(double feet)
{
    return feet * 12; 
}
double inchesToCentimeters(double inches)
{
    return inches * 2.54;
}
double centimetersToMeters(double centimeters)
{
    return centimeters / 100; 
}

int main()
{
    double feet, inches, centimeters, meters;
    printf("Enter measurement in feet: ");
    scanf("%lf", &feet);
    inches = feetToInches(feet);
    centimeters = inchesToCentimeters(inches);
    meters = centimetersToMeters(centimeters);
    printf("%.2f feet is equal to %.4f meters.\n", feet, meters);

    return 0;
}
