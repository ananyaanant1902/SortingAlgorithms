void countingSort(int arr[],int n){
    int frequency[100000];
    for(int i=0;i<n;i++){
        frequency[i]=0;
    }
    for(int i=0;i<n;i++){
        frequency[arr[i]]++;
    }
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=min;i<=max;i++){
        while(frequency[i]>0){
            arr[i]=i;
            frequency[i]--;
        }
    }
}
