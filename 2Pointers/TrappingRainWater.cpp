lclass Solution {
public:
    int trap(vector<int>& height) {
        
        // Optimal Sol

        int l = 0, r = height.size() - 1;
        int water = 0;
        int l_max = 0, r_max = 0;

        //Two Pointer Approach

        while(l <= r){
            if(height[l] <= height[r]){
                
                if(l_max < height[l]) l_max = height[l];
        //If l_max is greater than the given element that means may be water, we don't consider r_max
        // because there definately exists r_max > l_max, so we can get water by just l_max - height[l]
                else{
                    water += l_max - height[l];
                }
                l++;
            }
            else{
                if(r_max < height[r]) r_max = height[r];
        //If r_max is greater than the given element that means may be water, we don't consider l_max
        // because there definately exists l_max > r_max, so we can get water by just r_max - height[r]
                else{
                    water += r_max - height[r];
                }
                r--;
            }
        }

        return water;
    }
};
