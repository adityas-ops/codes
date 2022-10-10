class Solution {
public:
    string breakPalindrome(string palindrome) {
        string ans= "";
        if (palindrome.size()==2){
            if (palindrome[0]!='a'){
                string dem; dem+= 'a'; dem+=palindrome[1];
                return dem;
            }
            else{ // phela a hai
                if (palindrome[1]=='a'){
                    string dem="ab"; return dem;
                }
                else{
                    string dem; dem+= palindrome[0]; dem+= 'a'; return dem;
                }
            }
        }
        int i= 0; int j= palindrome.size()-1;
        int mid = palindrome.size() /2;
        if (j==0)return "";
        for (; i<=j ; i++){
            if (palindrome[i]!= 'a'){
                if ((j+1)&1 && i==mid)continue;
                for (int x=0; x<i; x++){
                    ans+= palindrome[x];
                }
                ans+= 'a';
                for (int x= i+1; x<=j; x++)ans+= palindrome[x];
                return ans;
            }
        }
        for (int x=0; x<j; x++)ans+= palindrome[x];
        ans+= 'b';
        return ans;
        
    }
};