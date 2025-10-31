class Solution {
public:
    string minWindow(string s, string t) {
        int left=0,right=0;
        int len=INT_MAX,ansr=-1; //知道起始位置和长度可以用substr打印字符串
        unordered_map<char,int> counter;
        for(char tt:t){
            counter[tt]--;
        }
        int sum=t.length();
        for(right=0;right<s.size();right++){
            if(counter[s[right]]++<0){
                sum--;
            }
            if(sum==0){
                while(counter[s[left]]>0){
                    counter[s[left++]]--;
                }
                if(right-left+1<len){
                    len=right-left+1;
                    ansr=left;
                }
            }
        }
        return len==INT_MAX ? "":s.substr(ansr,len);
    }
};