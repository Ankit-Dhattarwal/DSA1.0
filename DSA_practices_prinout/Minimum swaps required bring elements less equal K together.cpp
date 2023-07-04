//
//  Minimum swaps required bring elements less equal K together.cpp
//  c++
//
//  Created by Ankit on 21/05/23.
//

//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
//#include <bits/stdc++.h>
//using namespace std;
//
//
//
//// } Driver Code Ends
//
//class Solution
//{
//public:
//    int minSwap(int arr[], int n, int k) {
//      int countK = 0;
//        for (int i = 0; i < n; i++) {
//            if (arr[i] <= k) {
//                countK++;
//            }
//        }
//
//        int countGreater = 0;
//        for (int i = 0; i < countK; i++) {
//            if (arr[i] > k) {
//                countGreater++;
//            }
//        }
//
//        int minSwaps = countGreater;
//
//        int left = 0, right = countK;
//        while (right < n) {
//            if (arr[right] > k) {
//                countGreater++;
//            }
//            if (arr[left] > k) {
//                countGreater--;
//            }
//            minSwaps = min(minSwaps, countGreater);
//            left++;
//            right++;
//        }
//
//        return minSwaps;
//    }
//};
//
//
//
////{ Driver Code Starts.
//
//// Driver code
//int main() {
//
//    int t,n,k;
//    cin>>t;
//    while(t--)
//    {
//        cin>>n;
//        int arr[n];
//        for(int i=0;i<n;i++)
//            cin>>arr[i];
//        cin>>k;
//        Solution ob;
//        cout << ob.minSwap(arr, n, k) << "\n";
//    }
//    return 0;
//}

// } Driver Code Ends
