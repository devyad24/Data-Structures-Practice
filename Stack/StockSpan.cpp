#include<bits/stdc++.h>

using namespace std;
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> ans;
       vector<int> nge;
      
       stack<pair<int,int>> st;
       
       
       
       for(int i = 0; i<n; i++){
           
           while(!st.empty() && st.top().first <= price[i]){
               st.pop();
           }
           
           if(st.empty()) nge.push_back(-1);
           else nge.push_back(st.top().second);
           
           
           st.push({price[i], i});
               
       }
       for(int i = 0; i<n; i++){
           ans.push_back(i - nge[i]);
       }
       
       return ans;
    }
};