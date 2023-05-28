//C Program to find average of three sbjects
/*Name:Sahera H Tahasildar
Roll No.:1720
Div:Q
Program name: Volume and surface of spher
Date:01/02/2022
*/
#include<stdio.h>

int main()

{
    float Radius,volume,surface_area;
    printf("Enter radius of sphere=\n");
    scanf("%f",&Radius);
    volume=(4.0/3)*3.142*Radius*Radius*Radius;
    printf("volume of sphere=%f\n",volume);
    surface_area=4.0*3.142*Radius*Radius;
    printf("surface area of the sphere =%f\n",surface_area);
    return 0;
}

