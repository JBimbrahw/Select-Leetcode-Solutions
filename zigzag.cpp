class Solution {
public:
    string convert(string s, int numRows) {
        string sAns = "";
        int len = s.length();
        for(int row = 0; row <numRows; row++){
            int i = row;
            sAns+=(s[i]);

            while(i<len){
                //travel down and up the zig to the same row
                int num =(numRows-1)*2-2*row;
                if(num==0)
                    num=(numRows-1)*2;
                i+=num;
                if(i>=len)
                    break;
                sAns+=(s[i]);

                //now travel up and down the zag to the same row
                num=2*row;
                if(num==0)
                    num=(numRows-1)*2;
                i+=num;
                if(i>=len)
                    break;
                sAns+=(s[i]);

            }
        }
        return sAns;
    }
};
