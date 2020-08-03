//
//  Heap.c
//  AlgrithmInterview
//
//  Created by RobinCui on 2020/7/30.
//  Copyright © 2020 RobinCui. All rights reserved.
//

#include "Heap.h"
#include "ArrayHelper.h"

void downAdjust(int *arr, int parent, int size) {
    int value = arr[parent];
    int parentIndex = parent;
    int childIndex = 2*parentIndex+1;
    
    while (childIndex<size) {
        if(childIndex+1<size && (arr[childIndex] < arr[childIndex+1])) childIndex++;
        if (value<arr[childIndex]) {
            arr[parentIndex] = arr[childIndex];
            parentIndex = childIndex;
            childIndex = 2*parentIndex+1;
        } else {
            break;
        }
    }
    arr[parentIndex] = value;
    
}

void buildHeap(int *arr , int size) {
    for (int i = size/2; i>=0; i--) {
        downAdjust(arr, i, size);
    }
}

void heapSort(int *array, int size) {
    int dst[size];
    printf("\n \n \n heapSort begin ----\n");
    for (int i=0; i<size; i++) {
        printf("  %d  ", array[i]);
    }
    
    
    copy(dst, array, size);
    printf("\n heapSort build ----\n");
    
    buildHeap(dst, size);
    for (int i=0; i<size; i++) {
        printf("  %d  ", dst[i]);
    }
    printf("\n");
    
    printf("\n heapSort sorted ----\n");
    
    for (int i = 0; i<size; i++) {
        int tmp = dst[0];
        dst[0] = dst[size-1-i];
        dst[size-1-i]=tmp;
        downAdjust(dst, 0, size-i-1);
    }
    
    for (int i=0; i<size; i++) {
        printf("  %d  ", dst[i]);
    }
    printf("\n");
    
    printf(" heapSort end ----\n");
    
}

