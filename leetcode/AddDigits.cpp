class Solution {
public:
    int intsize(int x)
    {
        int length = 1;
        while ( x /= 10 )
        {
            length++;
        }
        return length;
    }
    int addDigits(int num) 
    {
        if(intsize(num) > 1)
        {
            int sum = 0;
            while ( num > 0 ) 
            {
                sum += num % 10;
                num /= 10;
            }
        }
    }
};
