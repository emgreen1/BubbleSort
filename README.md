# BubbleSort in C
Implementation of BubbleSort Algorithm in C, Java, and Python

This is just a simple implementation of a classic Bubble Sort sorting algorithm in three widely used languages. 

#### This version generates a random integer array and prints each pass within the bubbleSort algorithm to make the steps it took exceedingly clear. 
Using it consists of pulling the repo and entering the C directory. There you will find a Makefile that already sets everything up, so all you need to do is the following: 

//bash

make  
./bubbleSort

The program will run and show you the steps it took to get to the sorted array. The array lengths range from 10 - 25 elements and the values of the elements are within the range of -5000 to 5000. Those values can be changed as you see fit by changing the neccessary macros within the header file more specifically: 

//bubbleSort.h  

ELE_UPPER  
ELE_LOWER  
LEN_UPPER  
LEN_LOWER  
