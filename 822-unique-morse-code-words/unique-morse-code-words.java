class Solution {
    public static int uniqueMorseRepresentations(String[] words) {


    	String[] morseArray = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
            "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
            "..-", "...-", ".--", "-..-", "-.--", "--.." };
    	
    	HashSet<String> ans = new HashSet<>();
    	
   
    	for(String word : words) {
    		
    		StringBuilder sb = new StringBuilder();
    		
    		for(char add : word.toCharArray()) {
    			int index =  add - 'a';
    			sb.append(morseArray[index]);
    			
			}
    		
    		ans.add(sb.toString());
    	}
        return ans.size();
    }
}