#include<stdio.h>
#include"sort.h"                                                                                                                                                                             

int main(int argc, char **argv)
{
        int a[] = {36,55,22,11,13,44};
        int n = 6;
        printf("\n 原 排 序：");
        out(a, n);
        printf("\n  冒泡排序：");
        bubble_sort(a, n);
        out(a, n);
        printf("\n  插入排序：");
        insert_sort(a, n);
        out(a, n);
        printf("\n  选择排序：");
        selection_sort(a, n);
        out(a, n);
        printf("\n  快速排序：");
        quick_sort(a, 0, n);
        out(a, n);
        printf("\n");
        return 0;
}
