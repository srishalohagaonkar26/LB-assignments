class Logic
{
    void findSmallestDigit(int num)
    {
        int iSmallest = 9;

        while(num != 0)
        {
            int iDigit = num % 10;

            if(iDigit < iSmallest)
            {
                iSmallest = iDigit;
            }

            num = num / 10;
        }

        System.out.println("Smallest digit: " + iSmallest);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}