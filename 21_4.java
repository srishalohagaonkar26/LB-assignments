class Logic
{
    void findMin(int a, int b, int c)
    {
        int iMin = a;

        if(b < iMin)
        {
            iMin = b;
        }

        if(c < iMin)
        {
            iMin = c;
        }

        System.out.println("Minimum is: " + iMin);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }
}