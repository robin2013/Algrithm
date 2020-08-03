//
//  Select.c
//  AlgrithmInterview
//
//  Created by RobinCui on 2020/7/28.
//  Copyright © 2020 RobinCui. All rights reserved.
//

#include "Select.h"
#include "ArrayHelper.h"

void selectSort(int *array, int size) {
    int dst[size];
    printf("\n \n \n selectSort begin ----\n");
    for (int i=0; i<size; i++) {
        printf("  %d  ", array[i]);
    }
    
    printf("\n selectSort sorted ----\n");

    copy(dst, array, size);
    for (int i=0; i<size; i++) {
        int min = i;
        for (int j = i+1; j<size; j++) {
            if (dst[j] < dst[min]) {
                min = j;
            }
        }
        if (min != i) {
            int tmp = dst[min];
            dst[min] = dst[i];
            dst[i] = tmp;
        }
    }
    for (int i=0; i<size; i++) {
        printf("  %d  ", dst[i]);
    }
    printf("\n");

    printf(" selectSort end ----\n");

}

