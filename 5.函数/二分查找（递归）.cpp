int find(int A[], int low, int high, int key){
    if(low<=high){
        int mid=(low+high)/2;
        if(A[mid]==key)
            return mid;
        else if(A[mid]>key)
            find(A, low, mid-1, key);
        else
            find(A, mid+1, high, key);
    }
    else
        return -1;
}
