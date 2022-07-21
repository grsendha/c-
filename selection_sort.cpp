#include<bits/stdc++.h>
using namespace std;
void Selection_sort(int arr[],int size){
    for(int i=0; i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[min]>arr[j])
                min=j;
        }
        if(min!=i)
            swap(arr[min],arr[i]);
    }

}
main(){
    int arr[]={74,33,43,64,34,66,55,44,76,54,23,55};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    Selection_sort(arr,size);
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}