#include<iostream>
using namespace std;
int main(){
    int intt = -150;
    float floatt = 123.125;
    int intAssignment = floatt;
    printf("Assignment: %f assigned to an int produces %d\n",floatt,intAssignment);
    float floatAssignment = intt;
    printf("Assignment: %d assigned to a float produces %f\n",intt,floatAssignment);

    float floatCasting = (float) intt;
    printf("Type Casting:  %d produces %f\n",intt,floatAssignment);

    int intCasting = (int) floatt;
    printf("Type Casting:  %.3f produces %d",floatt,intAssignment);
}