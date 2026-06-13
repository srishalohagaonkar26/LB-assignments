class Logic
{
    void checkPerfect(int num)
    {
        int iSum = 0;

        for(int i = 1; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == num)
        {
            System.out.println(num + " is a Perfect Number");
        }
        else
        {
            System.out.println(num + " is not a Perfect Number");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}