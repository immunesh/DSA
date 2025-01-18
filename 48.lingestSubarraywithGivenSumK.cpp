//Approach
/*
Approach:
The steps are as follows:

First, we will take two pointers: left and right, initially pointing to the index 0.
The sum is set to a[0] i.e. the first element initially.
Now we will run a while loop until the right pointer crosses the last index i.e. n-1.
Inside the loop, we will do the following:
We will use another while loop and it will run until the sum is lesser or equal to k.
Inside this second loop, from the sum, we will subtract the element that is pointed by the left pointer and increase the left pointer by 1.
After this loop gets completed, we will check if the sum is equal to k. If it is, we will compare the length of the current subarray i.e. (right-left+1) with the existing one and consider the maximum one.
Then we will move forward the right pointer by 1. If the right pointer is pointing to a valid index(< n) after the increment, we will add the element i.e. a[right] to the sum.
Finally, we will return the maximum length.
Intuition: We are using two pointers i.e. left and right. The left pointer denotes the starting index of the subarray and the right pointer denotes the ending index. Now as we want the longest subarray, we will move the right pointer in a forward direction every time adding the element i.e. a[right] to the sum. But when the sum of the subarray crosses k, we will move the left pointer in the forward direction as well to shrink the size of the subarray as well as to decrease the sum. Thus, we will consider the length of the subarray whenever the sum becomes equal to k.
The below dry run will clarify the intuition.
*/

//Code
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &a, long long k){
    int n = a.size();
    int left = 0, right = 0;

    long long sum = a[0];

    int maxLen = 0;
    while(right < n){
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }

        if (sum == k){
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if (right < n){
            sum += a[right];
        }

    }
    return maxLen;
}

int main()
{
    vector<int> a = {4, 1, 1, 1, 2, 3, 5};
    long long k = 5;
    int ans = getLongestSubarray(a, k);
    cout << "The length of the longest subarray with sum " << k << " is: " << ans << endl;
    return 0;
}


//GeeksForGeeks Solution 
int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n= arr.size();
        int len=0;
        int sum=0;
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++){
            sum+= arr[i];
            
            if(sum==k){
                len= i+1;
            }
            
            if(mp.find(sum-k) != mp.end()){
                len= max(len, i-mp[sum-k]);
            }
            
            if(mp.find(sum) == mp.end()){
                mp[sum]= i;
            }
        }
        
        return len;
}