# include<iostream>
# include<vector>

int pivotUsingBinary(std::vector<int> &arr){
    int low = 0;
    int high = arr.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(mid<high && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid>low && arr[mid]<arr[mid-1]){
            return mid-1;
        }
        if(arr[low]>=arr[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return -1;
}

int main(){
    std::vector<int> arr = {5,6,7,8,9,10,1,2,3};
    std::cout<<pivotUsingBinary(arr);
    return 0;
}