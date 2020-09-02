#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>

#include "bubbleSort.h"


static void printArr(int* arr, int length, const char* message) {
    printf("%s", message); 
    printf("\n[");

    for (int i = 0; i < length; i++) {
        printf(" %d,", arr[i]);
    }
    
    printf("]\n\n"); 
}


int main(int argc, char** argv) {
    int length = RAND_NUM(LEN_UPPER, LEN_LOWER); 
    int* arr = (int*) malloc(sizeof(int) * length);   

    srand(time(0)); //initialize rand seed

    for (int i = 0; i < length; i++) {
        arr[i] = RAND_NUM(ELE_UPPER, ELE_LOWER); 
    }
    
    printArr(arr, length, "Original Array:\n");
    bubbleSort(arr, length); 

    return 0; 
}

static void swap(int* arr, int pos) {
    int temp = arr[pos]; 
    arr[pos] = arr[pos + 1]; 
    arr[pos + 1] = temp; 
}

void bubbleSort(int* arr, int length) {
    #define MAX_LENGTH 25

    bool sorted = false; 
    int step = 0; 
    char message[MAX_LENGTH]; 

    while(!sorted) {
        sorted = true;  //assume the array is sorted

        for (int i = 0; i < length - 1; i++) {      
            if (arr[i] > arr[i + 1]) {      
                swap(arr, i);           
                sorted = false;         //if swap is made, list needs to be checked again
            }    
        }
        
        sprintf(message, "%s %d", "Iteration", ++step); 
        printArr(arr, length, message); 
    }
}







