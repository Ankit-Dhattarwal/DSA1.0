//#include <bits/stdc++.h>
//int maximumProfit(vector<int> &prices){
//    int maxProfit = 0;
//    int minSoFar = prices[0];
//
//    for(int i = 0 ; i< prices.size() ; i++){
//        if(minSoFar > prices[i]){
//            minSoFar = prices[i];
//        }else{
//            minSoFar = minSoFar;
//        }
//        int profit = prices[i] - minSoFar;
//        if(maxProfit > profit){
//            maxProfit = maxProfit;
//        }
//        else{
//            maxProfit = profit;
//        }
//    }
//    return maxProfit;
//}
