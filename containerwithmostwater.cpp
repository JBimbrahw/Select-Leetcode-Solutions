class Solution {
public:
    int maxArea(vector<int>& height) {
        //maximize product of min(ai, aj) * abs(i-j);
        int maxprod = 0;
        int prod;
        int minheight;
        int dist;
        for(int i=0; i<height.size(); i++)
        {
            for(int j=i+1; j<height.size(); j++)
            {
                minheight = (height.at(i) > height.at(j)) ? height.at(j) : height.at(i);
                dist = j - i;                
                prod = minheight * dist;
                maxprod = (prod > maxprod) ? prod : maxprod;   
            }
        }
        return maxprod;
    }
};
