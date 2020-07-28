//
//  Bubble.c
//  AlgrithmInterview
//
//  Created by RobinCui on 2020/7/28.
//  Copyright © 2020 RobinCui. All rights reserved.
//

#include "Bubble.h"
#include "ArrayHelper.h"

void bubbleSort(int *array, int size) {
    int dst[size];
    printf("bubbleSort begin ----\n");
    for (int i=0; i<size; i++) {
        printf("  %d  ", array[i]);
    }
    
    printf("\n bubbleSort sorted ----\n");

    copy(dst, array, size);
    for (int i=1; i<size; i++) {
        int sorted = 1;
        for (int j = 0; j<size-i; j++) {
            if (dst[j+1] < dst[j]) {
                int tmp = dst[j];
                dst[j] = dst[j+1];
                dst[j+1] = tmp;
                if (sorted == 1) {
                    sorted = 0;
                }
            }
            
        }
        if (sorted == 1) {
            printf("执行 %d 遍历\n", i);
            break;
        }
    }
    for (int i=0; i<size; i++) {
        printf("  %d  ", dst[i]);
    }
    printf("\n");

    printf("bubbleSort end ----\n");

}
