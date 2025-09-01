class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int keyIndex =0;
        int count = 0;
        if(ruleKey.equals("type")){
            keyIndex = 0;
        }
        if(ruleKey.equals("color")){
            keyIndex = 1;
        }
         if(ruleKey.equals("name")){
            keyIndex = 2;
        }
        for( int  i=0;i<items.size();i++){
            if(items.get(i).get(keyIndex).equals(ruleValue)){
                count++;
            }
        }
        return count;

    }
}