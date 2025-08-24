void merge(int arr[],int s, int mid, int e){
    vector<int> temp;
    int i=s;
    int j=mid+1;
    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    for(int k=i;k<=mid;k++){
        temp.push_back(arr[k]);
    }
    for(int k=j;k<=e;k++){
        temp.push_back(arr[k]);
    }
    //copying
    for(int idx = s, x = 0; idx <= e; idx++, x++){
        arr[idx] = temp[x];
    }
    
}
//MERGE SORT
void mergeSort(int arr[],int s,int e){
    if(s==e) return;
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);
}
