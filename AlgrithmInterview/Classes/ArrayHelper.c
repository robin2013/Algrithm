//
//  ArrayHelper.c
//  AlgrithmInterview
//
//  Created by RobinCui on 2020/7/28.
//  Copyright © 2020 RobinCui. All rights reserved.
//

#include "ArrayHelper.h"

void copy(int *dst, int *src, int size) {
    for (int i = 0; i<size; i++) {
        dst[i] = src[i];
    }
}
