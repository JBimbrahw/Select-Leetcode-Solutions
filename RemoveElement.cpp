class Solution {
public:
                 
    int removeElement(vector<int>& nums, int val) {
        //strategy is to replace all occurrences of val with the next non val number
        int i = 0;
        int j = i;
        int len = nums.size();
        int lentoreturn=0;
        for(; i<len; i++){
            if(nums[i] != val){
               //nothing to do here
                lentoreturn++;
                if (j==i)
                    j++;
            }
            else{
                //we need to get the next non val number
                for(;j<len;j++){
                    if(nums[j]!=val){
                        break;
                    }
                }
                //now j is either past the array, or it is pointing to the next value of interest
                if(j < len){
                    nums[i]=nums[j];
                    nums[j] = val;
                    j++;
                    lentoreturn++;
                }
                else
                    nums[i]=0;
            }
        }
        return lentoreturn;
        
    }
};
