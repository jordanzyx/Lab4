#include <stdio.h>
#include "header.h"
int main() {
    int age,height,level;
    double weight,bmr;
    char gender;

    FILE *infile = NULL;

    infile = fopen("C:\\Users\\Jordan\\CLionProjects\\Lab4\\input.txt","r");

    age = read_age(infile);
    gender = read_gender(infile);
    weight = read_weight(infile);
    height = read_height(infile);
    level = read_activity_level(infile);

    fclose(infile);

    bmr = gender == 'm' ? 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age) : 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);

    if(level == 1)bmr *= 1.2;
    if(level == 2)bmr *= 1.375;
    if(level == 3)bmr *= 1.55;
    if(level == 4)bmr *= 1.725;
    if(level == 5)bmr *= 1.9;

    printf("Your BMR for calories is %.2lf",bmr);

    return 0;
}