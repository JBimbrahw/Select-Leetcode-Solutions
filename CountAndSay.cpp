class Solution {
public:
    string countAndSay(int n) {
       //first we will populate a vector with the thirty terms, then we will just retrieve the value needed
        
        
        vector<string> firstThirtyTerms;
        firstThirtyTerms.push_back("1");
        string nextval;
        for ( int i = 1; i < 30; i++)
        {
            nextval = "";
            //calculate the next term
            string number = firstThirtyTerms[i-1];
            int count = 1;
            for (int j = 0; j < number.length(); j++){
                char temp = number[j];
                if( (j+1) < number.length() && number[j+1]==temp){
                    count ++;
                }
                else
                {
                    nextval = nextval + to_string(count);
                    nextval = nextval + temp;
                    count=1;
                }
            }
            //Now push it back
            firstThirtyTerms.push_back(nextval);
        }
        return firstThirtyTerms[n-1];
    }
};
