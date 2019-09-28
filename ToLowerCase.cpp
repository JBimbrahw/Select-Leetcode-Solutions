class Solution {
public:
    string toLowerCase(string str) {
        //Capitals have ASCII decimal values of   65 - 90
        //lower case have ASCII decimal values of 97-122
        //Therefore, just bumb of the value of the char by 32
        
        for(int i = 0; i < str.length(); i++){
            if(str[i] >= 65 && str[i] < 97)
                str[i] = str[i] + 32;
        }
        return str;
    }
};
