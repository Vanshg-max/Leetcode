class Solution {
    public int lengthOfLongestSubstring(String s) {
        int left = 0;
        int right = 0;
        int maxLength = -1;
        Map<Character,Integer> lastIndex = new HashMap<>();
        for(right = 0; right < s.length(); right++){
            char rightChar = s.charAt(right);
            if(lastIndex.containsKey(rightChar)){
                left = Math.max(left,lastIndex.get(rightChar)+1);
            }
            lastIndex.put(rightChar,right);
            maxLength = Math.max(maxLength,right-left +1);
        }
        return maxLength;
        
    }
}