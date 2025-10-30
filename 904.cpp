class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0,right=0;
        int maxlen=0;
        int b1=fruits[0];
        int b2;
        for(right=0;right<fruits.size();right++){
            if(fruits[right]!=b1){
                b2=fruits[right];
                break;
            }
        }
        for(right=0;right<fruits.size();right++){
            if(fruits[right]!=b1 && fruits[right]!=b2){
                left=right-1;
                if(fruits[left]==b1){
                    b2=fruits[right];
                    while(fruits[left-1]==b1){
                        left--;
                    }
                }
                else{
                    b1=fruits[right];
                    while(fruits[left-1]==b2){
                        left--;
                    }
                }
            }
            if(right-left+1>maxlen){
                maxlen=right-left+1;
            }
        }
        return maxlen;
    }
};