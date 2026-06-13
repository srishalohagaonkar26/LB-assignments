class Logic
{
    void sumEvenOddDigits(int num)
    {
        int iEvenSum = 0;
        int iOddSum = 0;

        while(num != 0)
        {
            int iDigit = num % 10;

            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }

            num = num / 10;
        }

        System.out.println("Sum of even digits: " + iEvenSum);
        System.out.println("Sum of odd digits: " + iOddSum);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}