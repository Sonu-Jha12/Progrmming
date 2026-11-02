#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minPlatforms(vector<int> &arr, vector<int> &dep){

    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int n = arr.size();
    int i = 0, j = 0, curr = 0, ans = 0;

    while(i < n){
        if(arr[i] <= dep[j]){
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }

        ans = max(ans, curr);
    }

    return ans;
}

int main(){
    vector<int> arr = {900, 940, 950, 1100, 1500, 1800};
    vector<int> dep = {910, 1200, 1120, 1130, 1900, 2000};

    cout << minPlatforms(arr, dep) << endl;

    return 0;
}