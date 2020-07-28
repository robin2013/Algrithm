//
//  main.c
//  AlgrithmInterview
//
//  Created by RobinCui on 2020/7/28.
//  Copyright © 2020 RobinCui. All rights reserved.
//

#include <stdio.h>
#include "Bubble.h"
#include "Select.h"
#include "Insert.h"
#include "Quick.h"

int main(int argc, const char * argv[]) {
    int array[] = {5,6,4,7,3,4,5,8,9,1,0,11};
//    int array[] = {1,2,3,4,5,6,9,8};
    int size = sizeof(array)/sizeof(int);
    bubbleSort(array, size);
    
    selectSort(array, size);

    insertSort(array, size);
    
    quickSort(array, size);
    getchar();
    return 0;
}
