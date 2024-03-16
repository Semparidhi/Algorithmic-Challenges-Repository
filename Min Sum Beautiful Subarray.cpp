##Problem statement
You are given an array ‘A’ of ‘N’ integers numbered from ‘0’ to ‘N - 1’. You are also given an integer ‘K’. A subarray is considered to be a beautiful subarray if the length of the subarray is '1', else if absolute difference between any two elements in the subarray is even.


-
Let’s say we have a subarray from ‘i’ to ‘j’, where ‘i’ <= ‘j’. For any two integers ‘p’, ‘q’ where ‘i’ <= ‘p’, ‘q’ <= ‘j’, ‘|A[p] - A[q]|’ should be even. You have to find the minimum sum of a beautiful subarray having length less than or equal to ‘K’.



You have to tell the minimum sum of a beautiful subarray having length less than or equal to ‘K’.

Example:
‘N’ = 4
‘K’ = 2
‘A’ = [-2, -6, 0,  4]

Here, the beautiful subarrays with length less than or equal to ‘2’ are:
[-2], [-2, -6], [-6], [-6, 0], [0], [0, 4], [4].

The subarray having minimum sum is: [-2, -6].

So, the answer for this example is ‘-8’.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= 'T' <= 10
1 <= 'N' <= 10^5
1 <= 'K' <= 'N'
-10^9 <= A[i] <= 10^9

Time Limit: 1 sec 
Sample Input 1:
2
4 3
0 1 -4 2
3 1
1 2 0
Sample Output 1:
-4
0
Explanation of sample input 1:
For test case 1:
Here, the beautiful subarrays with length less than or equal to ‘3’ are: [0], [1], [-4], [-4, 2], [2].

The minimum sum among these subarrays is given by a subarray ‘[-4]’. So, the answer for this test case is -’4’.

For test case 2:
Here, the beautiful subarrays with length less than or equal to ‘1’ are: [1], [2]. [0].

The minimum sum is given by a subarray ‘[0]’. So, the answer for this test case is ‘0’.
Sample Input 2:
2
5 4
-10 0 4 -10 2
3 2
1 1 1
Sample Output 2:
-16
1
#-----------------------------------------------------------------------------------------------------------------------------------
##solution:
long long minSumBeautifulSubarray (int n, int k, vector <int> &a) {
    // Write your code here.
    long long  ans=LLONG_MAX;
    long long sum =0;
    for(int i = 0;i<n;i++){
        int j= i;
        sum =0 ;
        int subArrayLen=0;
        if(a[i]%2==0){
                while (j<n && j<i+k){
                    if(a[j]%2==0){
                        sum+=a[j];
                        ans = min(ans,sum);
                    } else {
                        break;
                    }
                    j++;
                    subArrayLen++;
                }
        }
        else{
            while(j<n&& j<i+k){
                if(a[j]%2!=0){
                    sum+=a[j];
                    ans=min(ans,sum);
                }
                else{
                    break;
                }
                j++;
                subArrayLen++;
            }
        }
   

    }
         return ans;
}  
