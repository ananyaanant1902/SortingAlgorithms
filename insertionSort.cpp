void insertionSort(int arr[], int n){
    for(int i=0;i<=n-1;i++){
     //   int key=arr[i];
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
           //arr[j+1]=arr[j];
            swap(arr[j],arr[j-1]);
            j--;
        }
      // arr[j+1]=key; // no use if swap is used
    }
}
