class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int Greatest = Integer.MIN_VALUE;
        ArrayList<Boolean> list = new ArrayList <>();
        for(int i =0; i< candies.length; i++ ){
            if(Greatest< candies[i]){
                Greatest = candies[i];
            }
        }
        int maxCandie = 0;
        int sum = 0;
        for(int i = 0; i < candies.length; i++){
            sum = candies[i] + extraCandies ;
            maxCandie = sum;
            if(maxCandie >= Greatest){
               list.add(true);
            }
            else{
                list.add(false);
            }
            sum = 0;
        }
        return list;
    }
}