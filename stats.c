/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Implementation file for my C-programming code >
 *
 * <this is a couple of functions that can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. In addition, it reorder this data set from large to small. All statistics would be be rounded down to the nearest integer. After analysis and sorting is done, the program will print that data to the screen in nicely formatted presentation.>
 *
 * @author <Saad Elkheety>
 * @date <February 13 2018>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/*  A function that prints the statistics of an array including minimum, maximum, mean, and median. */
void print_statistics() {

}

/*Given an array of data and a length, prints the array to the screen */
void print_array(unsigned char* a, unsigned int b ) {

}

/*Given an array of data and a length, returns the median value */
unsigned char find_median(unsigned char* a, unsigned int b ) {

}
/*Given an array of data and a length, returns the mean */
unsigned char find_mean(unsigned char* a, unsigned int b ) {

}

/*Given an array of data and a length, returns the maximum */
unsigned char find_maximum(unsigned char* a, unsigned int b ) {

}

/*Given an array of data and a length, returns the minimum */
unsigned char find_minimum(unsigned char* a, unsigned int b ) {

}

/*Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value.*/
void sort_arry(unsigned char* a, unsigned char b ) {

}

