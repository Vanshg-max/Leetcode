class Solution {
    public List<Integer> addToArrayForm(int[] num, int k) {
        ArrayList<Integer> list = new ArrayList<>();
        int i = num.length-1; //start from last digit of num

        // loop until both digit from num and k are finished
        while(i>=0 || k>0)
        {
            // if there is still a digit left in num add it to k
            if(i>=0){
                k += num[i];
                i--;// move to the next left digit
            }
            // Get the last digit of k ->this becomes part of result
            list.addFirst(k%10);
            // Carry->remove the last digit from k
            k /=10;
        }
        return list;

        
    }
}