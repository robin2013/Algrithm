//
//  Quick.c
//  AlgrithmInterview
//
//  Created by RobinCui on 2020/7/28.
//  Copyright © 2020 RobinCui. All rights reserved.
//

#include "Quick.h"
#include "ArrayHelper.h"
int partition(int *array, int left, int right) {
    int pivot = array[left];
       int i = left + 1;
       int j = right;
    
    while (1) {
        while (array[i]<=pivot && i<=j) i++;
        while (array[j]>=pivot && j>=i) j--;
        if (j <= i) {
            break;
        }
        
        int tmp = array[j];
        array[j] = array[i];
        array[i] = tmp;
    }
    array[left] = array[j];
    array[j] = pivot;
    return j;
}

void sort(int *arr, int left, int right) {
    if (left < right) {
        //获取中轴元素所处的位置
        int mid = partition(arr, left, right);
        //进行分割
        sort(arr, left, mid - 1);
        sort(arr, mid + 1, right);
    }
}


void quickSort(int *array, int size) {
    int dst[size];
    printf("\n \n \n quickSort begin ----\n");
    for (int i=0; i<size; i++) {
        printf("  %d  ", array[i]);
    }
    
    printf("\n quickSort sorted ----\n");

    copy(dst, array, size);
    sort(dst, 0, size-1);
    
    for (int i=0; i<size; i++) {
        printf("  %d  ", dst[i]);
    }
    printf("\n");

    printf("quickSort end ----\n");

}

