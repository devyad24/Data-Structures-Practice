class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n  = heights.size();
        int nsl[n], nsr[n];
        stack<int> st;

        for(int i = 0; i<n; i++){
                 while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
                }
                if(st.empty()){
                    nsl[i] = 0;
                }
                else{
                    nsl[i] = st.top() + 1;
                }

            
            st.push(i);
        }

        while(!st.empty()) st.pop();

        for(int i = n - 1; i>=0; i--){
                 while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
                }
                if(st.empty()){
                    nsr[i] = n - 1;
                }
                else{
                    nsr[i] = st.top() - 1;
                }

            
           
            st.push(i);
        }

        int max_area = heights[0];

        for(int i = 0; i<n; i++){
            int area = heights[i] * (nsr[i] - nsl[i] + 1);
            max_area = max(area, max_area);
        }

        return max_area;
    }
};
