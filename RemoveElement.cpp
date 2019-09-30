class Solution {
public:
    int retNextNonValIndex(vector<int>& nums, const int val, const int start, int& len) {
    
        int j = start;
        //traverse the vector and get the first non-val index
        for (; j < nums.size(); j++){
            if(nums[j]!=val){
                return j;
            }
            else
                len--;
        }
        return j;
    }
                 
    int removeElement(vector<int>& nums, int val) {

        int start = 0;
        int len = nums.size();

        //look at each element and see if it is val
        for (int i = 0; i < nums.size(); i++){

            int next = retNextNonValIndex(nums, val, start, len);
            start = next;

            if ( next <= len){
                cout << "next = " << next << endl;
                nums[i] = nums[next];
                start++;
            }     
            else
                nums[i] = 0;
        }

        return len;
    }
};
