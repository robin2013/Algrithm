//
//  Shell.c
//  AlgrithmInterview
//
//  Created by RobinCui on 2020/7/30.
//  Copyright © 2020 RobinCui. All rights reserved.
//

#include "Shell.h"
#include "ArrayHelper.h"

void shellSort(int *array, int size) {
    int dst[size];
    printf("\n \n \n shellSort begin ----\n");
    for (int i=0; i<size; i++) {
        printf("  %d  ", array[i]);
    }
    
    printf("\n shellSort sorted ----\n");

    copy(dst, array, size);

    int gap = size/2;
    while (gap>0) {
        for (int i = gap; i<size; i++) {
            int j = i;
            while (j-gap>=0) {
                if (dst[j] < dst[j-gap]) {
                    int tmp = dst[j];
                    dst[j] = dst[j-gap];
                    dst[j-gap] = tmp;
                }
                j = j-gap;
            }
           
        }
        gap = gap/2;
    }
    
    for (int i=0; i<size; i++) {
        printf("  %d  ", dst[i]);
    }
    printf("\n");

    printf(" shellSort end ----\n");

}

