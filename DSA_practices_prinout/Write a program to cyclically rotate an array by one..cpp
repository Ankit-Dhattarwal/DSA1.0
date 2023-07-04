////{ Driver Code Starts
////Initial Template for C++
//
//#include <bits/stdc++.h>
//using namespace std;
//void rotate(int arr[], int n);
//
//int main()
//{
//    int t;
//    scanf("%d",&t);
//    while(t--)
//    {
//        int n;
//        scanf("%d",&n);
//        int a[n] , i;
//        for(i=0;i<n;i++)
//        scanf("%d",&a[i]);
//        rotate(a, n);
//        for (i = 0; i < n; i++)
//            printf("%d ", a[i]);
//        printf("\n");
//    }
//        return 0;
//}
//
//// } Driver Code Ends
//
//
////User function Template for C++
//
//void rotate(int arr[], int n)
//{
//    int last = arr[n-1];
//    for(int i = n-2; i>= 0; i--){
//        arr[i+1] = arr[i];
//    }
//    arr[0] = last;
//}


/////////////////////////////////////
// this below code is given by the code studio
/////////////////////////////////////
///
///
///
///

//#include <bits/stdc++.h>
//#include <iostream>
//using namespace std;
//
//void RotateArr(int arr[], int start, int end){
//
//    while(start<end){
//        int temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//        end--;
//        start++;
//
//    }
//}
//
//int main() {
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i = 0; i< n; i++){
//        cin>>arr[i];
//    }
//
//    int d;
//    cin>>d;
//
//    RotateArr(arr, 0 ,n-1);
//
//    RotateArr(arr, 0 ,n-d-1);
//
//    RotateArr(arr, n-d, n-1);
//
//
//
//    for(int i = 0; i<n; i++){
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}


// This below code give the best time complexcity
/*
 #include<iostream>
 using namespace std;

 void rotateArray(int arr[], int n, int k) {
     // storing 1st k elements in temporary array
     int temp[k];
     for (int i = 0; i < k; i++) {
         temp[i] = arr[i];
     }
     // shifting remaining elements of the array

     for (int i = k; i < n; i++) {
         arr[i - k] = arr[i];
     }

     //storing back the k elements to the orignal array
     for (int i = 0; i < k; i++) {
         arr[n - k + i] = temp[i];
     }
     //printing array
     for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
     }
 }

 int main() {
     int n; // Size of array
     cin >> n;
     int arr[n];
     //initializing array elements
     for (int i = 0; i < n; i++) {
         cin >> arr[i];
     }

     int k; // No. of times to rotate
     cin >> k;
     rotateArray(arr, n, k);

     return 0;
 }
 */
