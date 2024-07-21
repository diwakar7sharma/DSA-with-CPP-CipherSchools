#include<iostream>
using namespace std;

int partition(int *arr,int start,int end){
    //To find Correct Position of partition element
    int num_less_index=0;
    for(int i=start+1;i<end+1;i++){
        if(arr[i]<arr[start]){
            num_less_index++;
        }
    }

    int correct_index=start+num_less_index;

    int temp=arr[start];
    arr[start]=arr[correct_index];
    arr[correct_index]=temp;

    int i=start,j=end;
    while(i<correct_index && j>correct_index){
        while(arr[i]<arr[correct_index]){
                i++;
        }
        while(arr[j]>arr[correct_index]){
            j--;
        }
        if(i<correct_index && j>correct_index){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    return correct_index;
}

void quickSort(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    int index_partition;
    index_partition=partition(arr,start,end);

    quickSort(arr,start,index_partition-1);
    quickSort(arr,index_partition+1,end);
}

int main(){
    int size;

    int arr[7]={5,1,3,10,7,14,2};
    size=7;
    quickSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}