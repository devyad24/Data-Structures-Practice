#include<bits/stdc++.h>

using namespace std;
class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        vector<int> ans;
        stack<int> st;
        
        for(int i = 0; i<n; i++){
            while(!st.empty() && st.top() >= a[i]){
                st.pop();
            }
            
            if(st.empty()) ans.push_back(-1);
            else ans.push_back(st.top());
            
            st.push(a[i]);
        }
        
        return ans;
    }
};