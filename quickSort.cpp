#include<iostream>
#include<vector>
using namespace std;

int pivot(int l,int h, int arr[]){
    int i=l; int j=h+1; int x=arr[l];
    do{
        do{
            i++;
        }while(arr[i]<x);
       do{
        j--;
       }while(arr[j]>x);
       if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }
    }while(i<j);
        int temp=arr[j];
        arr[j]=arr[l];
        arr[l]=temp;
    return j;
}

void quickSort(int arr[], int l,int h){
    if(l>=h) return;
    int j=pivot(l,h,arr);
    quickSort(arr,l,j-1);
    quickSort(arr,j+1,h);
}

