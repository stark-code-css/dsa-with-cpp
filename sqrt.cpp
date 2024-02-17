# include<iostream>
# include<vector>
using namespace std;

long long int sq_rt(int n){
    int s = 0;
    int e = n - 1;
    
    // For the case of n = 0
    int ans = 0;

    // For the case of n = 1
    if(n == 1)
        return 1;
    
    // For rest of the cases

    while(s<=e){
        int m = s + (e-s)/2;
        int sq = m*m;
        if (sq == n)
            return n;
        else if ( sq < n ){
            ans = m;
            s = m + 1;
        }
        else
            e = m - 1;
    }
    return ans;
}

int main(){
    int n = 48;
    int ans = sq_rt(n);
    cout<<ans;
    return 0;
}