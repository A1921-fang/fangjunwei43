#include"sort.h"


//冒泡排序
void bubble_sort(int a[],int n)

{
        int i, j,t;
        for(i=1;i< n;i++)
        {for (j=0;j<n-i;j++)
                {

                        if (a[j]>a[j+1])
                        {
                                t=a[j];
                                a[j]=a[j+1];
                                a[j+1]=t;
                        }
                }
        }
}
//选择排序
void selection_sort(int a[], int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    for(j=1+i;j<n;j++)
    if(a[i]>a[j])
    {
        t=a[j];
        a[j]=a[i];
        a[i]=t;
        }

}
//插入排序
void insert_sort(int a[], int n)
{
        int i,j,temp;
        for(i=1;i<n;i++)
        {
                temp=a[i];
                j=i-1;

                while (j>=0 && a[j]>temp)
                {
                        a[j+1]=a[j];
                        j--;
               }
                 a[j+1]=temp;

        }
}
//快速排序
void  quick_sort(int a[],int start,int n)
{
    int i,j;
    i=start;
    j = n;
    a[0]=a[start];
    while(i<j)
    {
        while(i<j&&a[0]<a[j])
        j--;
        if(i<j)
        {
            a[i]=a[j];
            i++;
        }
        while(i<j&&a[i]<=a[0])
            i++;
        if(i<j)
        {
            a[j]=a[i];
            j--;
        }
    }
    a[i]=a[0];
    if (start<i)
        quick_sort(a,start,j-1);
    if (i<n)
        quick_sort(a,j+1,n);
    return;
}
void out(int a[], int n){
                for(int i=0;i<n;i++){
                                        printf("  %d  ",a[i]);
                                                }

                                }
                                                                       
