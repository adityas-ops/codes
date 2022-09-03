class Solution {
    public boolean isPalindrome(int x) {
         String s = Integer.toString(x);
        String b = s;
        StringBuffer sb = new StringBuffer(b);
        sb.reverse();
        // int n = b.length();
        // reverse(b,b+n);
        String ss = sb.toString();
        if (s.equals(ss)) {
            return true;
        } else {
           return false;
        }
    }
}