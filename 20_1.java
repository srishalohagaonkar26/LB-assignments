class Logic
{
    void checkPrime(int num)
    {
        boolean bIsPrime = true;

        if(num < 2)
        {
            bIsPrime = false;
        }

        for(int i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                bIsPrime = false;
                break;
            }
        }

        if(bIsPrime == true)
        {
            System.out.println(num + " is Prime");
        }
        else
        {
            System.out.println(num + " is not Prime");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}