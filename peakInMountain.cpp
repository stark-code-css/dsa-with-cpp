# include<iostream>
# include<vector>
using namespace std;

  int Peak(vector<int>& arr) {
    int l = 0;
    int r = arr.size() - 1;

    while (l < r) {
      const int m = (l + r) / 2;
      if (arr[m] >= arr[m + 1])
        r = m;
      else
        l = m + 1;
    }

    return arr[l];
  }

int main(){
    vector<int> arr = {4,3,2,1};
    int ans = Peak(arr);
    cout<<ans;
    return 0;
}