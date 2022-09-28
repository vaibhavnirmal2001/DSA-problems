class Solution {
     public int[] numsSameConsecDiff(int n, int k) {
        ArrayList<Integer> list=new ArrayList<>();
        for(int i=1; i<10; i++){
            req(n,k,list,i,i);
        }
        
        int[] arr=new int[list.size()];
        for(int i=0; i<list.size(); i++){ arr[i]=list.get(i); }
        return arr;
    }
    public void req(int n,int k,ArrayList<Integer> list,int ans,int pre){
        if(n==1){ list.add(ans); return; }
        int a=pre-k;
        int b=pre+k;
        if(a>=0){ req(n-1,k,list,(ans*10)+a,a); }
        if(b<10 && k!=0){ req(n-1,k,list,(ans*10)+b,b); }
    }
}