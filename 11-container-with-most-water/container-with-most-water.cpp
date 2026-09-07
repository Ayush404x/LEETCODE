class Solution {
public:
    int maxArea(vector<int>& height) {
        //tle code brute force 
        //O(n)
        int n =  height.size();
        // int max_water = 0; //ans
        // for(int i =0 ; i<n;i++)
        // {
        //     for(int j = i+1;j<n;j++)
        //     {
        //         int w = j-i;//w = water
        //         int ht = min(height[i],height[j]); //ht = height
        //         int current_water = w * ht;
                
        //         max_water = max(max_water,current_water);
        //     }
        // }
        // return max_water;

        //two pointer approach
        int ans =0;
        int lp = 0;
        int max_water = 0; // ans
        int rp = n-1;
        while(lp<rp)
        {
          int w = rp - lp;
         int ht = min(height[lp],height[rp]);
         int cw  = w*ht;//current water
        max_water = max(max_water,cw);
        if (height[lp] < height[rp])
        {
            lp++;
        }
        else
        {
            rp--;
        }
        }
        return max_water;

    }
};