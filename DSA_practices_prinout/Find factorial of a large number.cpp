////{ Driver Code Starts
//// Initial Template for C++
//#include <bits/stdc++.h>
//using namespace std;
//
//// } Driver Code Ends
////User function template for C++
//
//class Solution {
//public:
//    vector<int> factorial(int N){
//     vector<int>result;
//     result.push_back(1);
//     int size = 1;
//     int carry = 0;
//
//     for(int val = 2; val<= N; val++){
//         for(int i = size-1; i>=0; i--){
//             int temp = result[i]*val + carry;
//             result[i] = temp % 10;
//             carry = temp / 10;
//         }
//         while(carry != 0){
//             result.insert(result.begin(), carry %10);
//             carry = carry / 10;
//             size++;
//         }
//     }
//     return result;
//    }
//};
//
////{ Driver Code Starts.
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int N;
//        cin >> N;
//        Solution ob;
//        vector<int> result = ob.factorial(N);
//        for (int i = 0; i < result.size(); ++i){
//            cout<< result[i];
//        }
//        cout << endl;
//    }
//    return 0;
//}
//// } Driver Code Ends
