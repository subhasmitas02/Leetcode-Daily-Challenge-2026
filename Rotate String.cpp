class Solution {
public:
    bool rotateString(string s, string goal) {
        /*first check if both the strings length are equal or not. if not then ans will be false
        then concatenate both the strings and check if the goal string exists in the combined string then return true else false.*/
        bool flag;
        if(s.length()!=goal.length())
            return false;
        string result=s+s;
        
        if(result.find(goal)!=string::npos)
            flag=true;
        else
            flag=false;
        return flag;
    }
};