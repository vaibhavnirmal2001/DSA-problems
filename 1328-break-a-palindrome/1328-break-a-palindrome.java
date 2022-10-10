class Solution {
    public String breakPalindrome(String palindrome) {
        int len = palindrome.length();
        if(len ==1) return "";
        StringBuilder sb = new StringBuilder(palindrome);
        //let's traverse the string
       // System.out.printf("Before:%s\n",sb.toString());
        int i=0;
        for( i =0;i<len;i++)
        {
            if(sb.toString().charAt(i)!='a'&&len-i-1!=i)
            { sb.replace(i,i+1,"a");break;}
            
        }
        if(i==len)sb.replace(i-1,i,"b");
      //  System.out.printf("After:%s",sb.toString());
        
        return sb.toString();
        
    }
}