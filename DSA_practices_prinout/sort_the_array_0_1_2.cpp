
// By the code studio


//Why use the s example is the :

/*
 0 1 2 2 1 0
 */

/*
#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
   int i = 0;
   int j  = n -1;
   int s = 0 ;

   while(i<=j){
      if(arr[i] == 0){
         int temp = 0;
         temp = arr[i];
         arr[i] = arr[s];
         arr[s] = temp;
         i++;
         s++;
      }
      else if(arr[i]== 2){
         int temp = 0;
         temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
         j--;
      }
      else{
         i++;
      }
   }
}

*/

// Secomd approach of the this problem
// The second aprroach take the larger time
/*
 //{ Driver Code Starts
 #include<bits/stdc++.h>
 using namespace std;



 // } Driver Code Ends
 class Solution
 {
     public:
     void sort012(int a[], int n)
     {
         int i = 0;
         int j = n-1;
         while(i<j){
             if(a[i] == 0){
                 i++;
             }
             else if(a[j] != 0){
                 j--;
             }
             else{
                 int temp = 0;
                 temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
             }
             
         }
         j = n-1;
         while(i<j){
             if(a[i] == 1){
                 i++;
             }
             else if(a[j] == 2){
                 j--;
             }
             else{
                 int temp = 0;
                 temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
             }
         }
     }
     
     
 };

 //{ Driver Code Starts.
 int main() {

     int t;
     cin >> t;

     while(t--){
         int n;
         cin >>n;
         int a[n];
         for(int i=0;i<n;i++){
             cin >> a[i];
         }

         Solution ob;
         ob.sort012(a, n);

         for(int i=0;i<n;i++){
             cout << a[i]  << " ";
         }

         cout << endl;
         
         
     }
     return 0;
 }


 // } Driver Code Ends
 */
