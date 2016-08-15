class Solution {
public:
    bool canWinNim(int n) 
    {
        int counter = 0;
        for(int x = 1; x < 3; x++)
        {
            int nsx = n-x;
            if(nsx < 4 && nsx > 0)
            {
                counter++;
            }
        }
        if(counter == 2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
