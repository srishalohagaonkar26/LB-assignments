class Logic
{
    void findLargestDigit(int num)
    {
        int iLargest = 0;

        while(num != 0)
        {
            int iDigit = num % 10;

            if(iDigit > iLargest)
            {
                iLargest = iDigit;
            }

            num = num / 10;
        }

        System.out.println("Largest digit: " + iLargest);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}