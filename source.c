//
// Created by Jordan on 9/19/2019.
//
#include <stdio.h>
#include "header.h"

int read_age(FILE *infile){
    int val;
    fscanf(infile,"%d",&val);
    return val;
}
char read_gender(FILE *infile){
    char c;
    fscanf(infile," %c",&c);
    return c;
}
double read_weight(FILE *infile){
    double val;
    fscanf(infile,"%lf",&val);
    return val;
}
int read_height(FILE *infile){
    int val;
    fscanf(infile,"%d",&val);
    return val;
}
int read_activity_level(FILE *infile){
    int val;
    fscanf(infile,"%d",&val);
    return val;
}
