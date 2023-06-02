// Find all the missing numbers
// Problem link:
// https://www.codingninjas.com/codestudio/problems/missing-numbers_762938?topList=45-day-coding-challenge&leftPanelTab=0

#include <bits/stdc++.h> 
vector<int> missingNumbers(vector<int> &arr, int n) {
    vector<int> ans;
    sort(arr.begin(), arr.end());
    int val = arr[0];
    int i = 0;
    while(i < n){
      if(val < arr[i]) {
        ans.push_back(val);
        val++;
      }
      else{
        val++;
        i++;
      }
    }
    while(val < arr[n-1]){
        ans.push_back(val);
        val++;
    }
    return ans;
}
