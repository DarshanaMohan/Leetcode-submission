class Solution {
    public int countOperations(int num1, int num2) {
        int counter = 0; 
            while(true)
            {
                if(num1 == 0 ||	 num2 == 0)
                {
                    break;
                }
                else if(num1 >= num2)
                {
                    num1 = num1 - num2;
                    counter++;
                }
                else if(num2 > num1)
                {
                    num2 = num2 - num1;
                    counter++;
                }
            }

        
       return counter; 
    }
}