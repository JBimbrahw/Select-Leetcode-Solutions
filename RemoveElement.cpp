class Solution {
public:
    int retNextNonValIndex(vector<int>& nums, const int val, const int start, int& len) {
    
        int j = start;
        //traverse the vector and get the first non-val index
        //return 0 if we go past the array
        for (; j < nums.size(); j++){
            if(nums[j]!=val){
                cout << "j = " << j << endl;
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

            cout << "numssize = " << nums.size() << endl;

            if ( next <= len){
                cout << "next = " << next << endl;
                nums[i] = nums[next];
                cout << "i = " << i << " , nums = " << nums[i] << " , len = " << len << endl;
                start++;
            }     
            else
                nums[i] = 0;
        }

        return len;
    }
};
