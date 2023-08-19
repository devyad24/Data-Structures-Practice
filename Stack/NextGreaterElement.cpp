#include<bits/stdc++.h>

using namespace std;
class Solution
{
    public:
    
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        
        vector<long long> res;
        stack<long long> st;
        
        for(long long i = n - 1; i >= 0; i--){
            
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
            }
            
            if(st.empty()) res.push_back(-1);
            else res.push_back(st.top());
            
            st.push(arr[i]);
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};
