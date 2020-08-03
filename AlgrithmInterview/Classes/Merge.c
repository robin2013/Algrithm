//
//  Merge.c
//  AlgrithmInterview
//
//  Created by RobinCui on 2020/7/28.
//  Copyright © 2020 RobinCui. All rights reserved.
//

#include "Merge.h"
#include "ArrayHelper.h"

void mergeArray(int *array, int left, int middle, int right) {
    int arr[right-left+1];
    int i = left;
    int j = middle + 1;
    int k = 0;
    while (i<=middle && j<=right) {
        if (array[i]<array[j]) {
            arr[k++] = array[i++];
        } else  {
            arr[k++] = array[j++];
        }
    }
    while (i<=middle) arr[k++] = array[i++];
    
    while (j<=right) arr[k++] = array[j++];
    // 把临时数组复制到原数组
     for (i = 0; i < k; i++) {
         array[left++] = arr[i];
     }
}

void sortArray(int *arr, int left, int right) {
    if (left < right) {
        //获取中轴元素所处的位置
        int mid = (left + right)/2;
        //进行分割
        sortArray(arr, left, mid);
        sortArray(arr, mid + 1, right);
        mergeArray(arr, left, mid, right);
    }
}

void mergeSort(int *array, int size) {
    int dst[size];
    printf("\n \n \n mergeSort begin ----\n");
    for (int i=0; i<size; i++) {
        printf("  %d  ", array[i]);
    }
    
    printf("\n mergeSort sorted ----\n");

    copy(dst, array, size);
    sortArray(dst, 0, size-1);
    
    for (int i=0; i<size; i++) {
        printf("  %d  ", dst[i]);
    }
    printf("\n");

    printf(" mergeSort end ----\n");

}

