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
/* @file <stats.c> 
 * @brief <Header file for my C-programming code >
 *
 * <this is a couple of functions that can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. In addition, it reorder this data set from large to small. All statistics would be be rounded down to the nearest integer. After analysis and sorting is done, the program will print that data to the screen in nicely formatted presentation.>
 *
 * @author <Saad Elkheety>
 * @date <February 13 2018>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics();

/**
 * @brief <A function that prints the statistics of an array including minimum, maximum, mean, and median>
 *
 * <Add Extended Description Here>
 *
 * @return <does not return>
 */

void print_array(unsigned char* a, unsigned int b );
/**
 * @brief <Given an array of data and a length, prints the array to the screen>
 *
 * @param pointer to unsigned character to access the array
 * @param unsigned integer to give the elements number
 *
 * @return <does not return>
 */



unsigned char find_median(unsigned char* a, unsigned int b );
/**
 * @brief <Given an array of data and a length, returns the median value>
 *
 * this function calculates the median of the elements of the array
 * by listing the numbers in numerical order from smallest to largest
 * The median is the number that is halfway into the set. To find the median,
 * the data should be arranged in order from least to greatest. If
 * there is an even number of items in the data set, then the median is found
 * by taking the mean (average) of the two middlemost numbers.
 * 
 * @param pointer to unsigned character to access the array
 * @param unsigned integer to give the elements number
 *
 * @return <the median value rounded down to the nearest integer>
 */

unsigned char find_mean(unsigned char* a, unsigned int b );
/**
 * @brief <Given an array of data and a length, returns the mean.>
 *
 * this function calculates the mean by adding all the elements of the array and dividing by the number of elements.
 *
 * @param pointer to unsigned character to access the array
 * @param unsigned integer to give the elements number
 *
 * @return <the median value rounded down to the nearest integer>
 */

unsigned char find_maximum(unsigned char* a, unsigned int b );
/**
 * @brief <Given an array of data and a length, returns the maximum>
 *
 * this function returns the maximum value of the elements in the given array.
 *
 * @param pointer to unsigned character to access the array
 * @param unsigned integer to give the elements number
 *
 * @return <return the maximum element of the array>
 */


unsigned char find_minimum(unsigned char* a, unsigned int b );
/**
 * @brief <Given an array of data and a length, returns the minimum>
 *
 * this function returns the minimum value of the elements in the given array.
 *
 * @param pointer to unsigned character to access the array
 * @param unsigned integer to give the elements number
 *
 * @return <return the minimum element of the array>
 */


void sort_arry(unsigned char* a, unsigned int b );
/**
 * @brief <Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value>
 *
 * @param pointer to unsigned character to access the array
 * @param unsigned integer to give the elements number
 *
 * @return <does not return>
 */
#endif /* __STATS_H__ */
