////{ Driver Code Starts
//#include <bits/stdc++.h>
//using namespace std;
//
//// } Driver Code Ends
//class Solution{
//    public:
//    long long findMinDiff(vector<long long> a, long long n, long long m){
//        sort(a.begin(), a.end());
//
//        long long minD = INT_MAX;
//        long long i = 0 , j = m-1;
//        while(j<n){
//            minD = min(minD , a[j]- a[i]);
//            i++;
//            j++;
//        }
//    return minD;
//    }
//};
//
////{ Driver Code Starts.
//int main() {
//    long long t;
//    cin>>t;
//    while(t--)
//    {
//        long long n;
//        cin>>n;
//        vector<long long> a;
//        long long x;
//        for(long long i=0;i<n;i++)
//        {
//            cin>>x;
//            a.push_back(x);
//        }
//
//        long long m;
//        cin>>m;
//        Solution ob;
//        cout<<ob.findMinDiff(a,n,m)<<endl;
//    }
//    return 0;
//}
//// } Driver Code Ends





// .......................Coding ninja.............................

//#include <bits/stdc++.h>
///*
//    Time complexity : O(N*log(N))
//    Space complexity : O(1)
//
//    Where N is the number of packets of chocolate.
//*/
//
//int findMinDiff(int n, int m, vector < int > chocolates) {
//
//    // Sort the chocolates.
//    sort(chocolates.begin(), chocolates.end());
//
//    // To store minimum difference.
//    int minVal = INT_MAX;
//
//    // Iterate 'i' from '0' to 'n - m + 1'.
//    for (int i = 0; i < n - m + 1; i++) {
//
//        // Difference of last and first number in 'm' size array.
//        int diff = chocolates[i + m - 1] - chocolates[i];
//
//        // If diff is less than 'minVal'.
//        if (diff < minVal) {
//            minVal = diff;
//        }
//    }
//
//    return minVal;
//}
