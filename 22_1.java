class Logic
{
    void sumEvenNumbers(int n)
    {
        int iSum = 0;

        for(int i = 2; i <= n; i = i + 2)
        {
            iSum = iSum + i;
        }

        System.out.println("Sum of even numbers: " + iSum);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}