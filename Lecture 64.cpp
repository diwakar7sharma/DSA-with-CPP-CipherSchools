#include<iostream>
using namespace std;
void merge(int *arr,int start,int end){
    int mid=(start+end)/2;
    int len1,len2;

    len1=mid-start+1;
    len2=end-mid;

    int *arr1=new int[len1];
    int *arr2=new int[len2];

    int main_arr_index=start;
    for(int i=0;i<len1;i++){
        arr1[i]=arr[main_arr_index];
        main_arr_index++;
    }
    for(int i=0;i<len2;i++){
        arr2[i]=arr[main_arr_index];
        main_arr_index++;
    }

    int index1=0,index2=0;
    main_arr_index=start;


    while(index1<len1 &&index2<len2){
        if(arr1[index1]<arr2[index2]){
            arr[main_arr_index]=arr1[index1];
            main_arr_index++;
            index1++;
        }
        else{
            arr[main_arr_index]=arr2[index2];
            main_arr_index++;
            index2++;
        }
    }


    while(index1<len1){
        arr[main_arr_index]=arr1[index1];
        main_arr_index++;
        index1++;
    }
    while(index2<len2){
        arr[main_arr_index]=arr2[index2];
        main_arr_index++;
        index2++;
    }
}

void mergeSort(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    
    int mid=(start+end)/2;

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,end);
}
int main(){
    int arr[5]={1,5,3,2,10};
    int size=5;
    mergeSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}