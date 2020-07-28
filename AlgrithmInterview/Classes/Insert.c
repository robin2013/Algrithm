//
//  Insert.c
//  AlgrithmInterview
//
//  Created by RobinCui on 2020/7/28.
//  Copyright © 2020 RobinCui. All rights reserved.
//

#include "Insert.h"
#include "ArrayHelper.h"

void insertSort(int *array, int size) {
    int dst[size];
    printf("\n \n \n insertSort begin ----\n");
    for (int i=0; i<size; i++) {
        printf("  %d  ", array[i]);
    }
    
    printf("\n insertSort sorted ----\n");

    copy(dst, array, size);
    for (int i=1; i<size; i++) {
        int tmp = dst[i];
        int j = i;
        while (j>0) {
            if (tmp<dst[j-1]) {
                dst[j] = dst[j-1];
                j--;
            } else {
                break;
            }
        }
        dst[j] = tmp;
    }
    for (int i=0; i<size; i++) {
        printf("  %d  ", dst[i]);
    }
    printf("\n");

    printf("insertSort end ----\n");

}

