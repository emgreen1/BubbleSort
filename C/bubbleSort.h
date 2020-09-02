#ifndef bubble_sort_h
#define bubble_sort_h

#define ELE_UPPER 5000
#define ELE_LOWER -5000
#define LEN_UPPER 25
#define LEN_LOWER 10

#define RAND_NUM(high, low) ((rand() % (high - \
                low + 1)) + low)

void bubbleSort(int* arr, int length); 

#endif
