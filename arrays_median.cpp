//This is the solution to the problem posted here:
//https://leetcode.com/problemset/all/
//Refer to the problem - Median of Two Assorted Arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> vCombined;
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size())
        {
            if(nums1.at(i) < nums2.at(j))
            {
                vCombined.push_back(nums1.at(i));
                i++;
            }
            else
            {
                vCombined.push_back(nums2.at(j));
                j++;
            }
        }
        
        //by here at least one of the arrays has been processed
        //check if the other array still has to be processed
        
        while(i < nums1.size())
        {
           vCombined.push_back(nums1.at(i));
           i++;
        }
        
        while(j < nums2.size())
        {
           vCombined.push_back(nums2.at(j));
           j++;
        }
        
        //now vComined is populated
        int nLen = vCombined.size();
        
        //Now we can find the median
        //if nLen is odd, we want the middle element, given by size/2
        if(nLen%2==1)
            return vCombined.at(nLen/2);
        else
            return (float)(vCombined.at(nLen/2 - 1) + vCombined.at(nLen/2))/2;
    }
};


//C# Solution is given below:

public class Solution {
    public double FindMedianSortedArrays(int[] nums1, int[] nums2) {
     
        List<int> vCombined = new List<int>();
        int i = 0, j = 0;
        while(i < nums1.Count() && j < nums2.Count())
        {
            if(nums1[i] < nums2[j])
            {
                vCombined.Add(nums1[i]);
                i++;
            }
            else
            {
                vCombined.Add(nums2[j]);
                j++;
            }
        }
        
        //by here at least one of the arrays has been processed
        //check if the other array still has to be processed
        
        while(i < nums1.Count())
        {
           vCombined.Add(nums1[i]);
           i++;
        }
        
        while(j < nums2.Count())
        {
           vCombined.Add(nums2[j]);
           j++;
        }
        
        //now vComined is populated
        int nLen = vCombined.Count();
        
        //Now we can find the median
        //if nLen is odd, we want the middle element, given by size/2
        if(nLen%2==1)
            return vCombined[nLen/2];
        else
            return (float)(vCombined[nLen/2 - 1] + vCombined[nLen/2])/2;
        
        
    }
}


