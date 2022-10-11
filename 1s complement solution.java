class Solution{
    static String onesComplement(String S,int N){
        //code here
        String str="";
       for(int i=0; i<N; i++){
           if(S.charAt(i)=='0'){
               str=str+'1';
           }else{
               str=str+'0';
           }
       }
       return str;
    }
}
