class Logic
{
    void printOddNumbers(int n)
    {
        for(int i = 1; i <= n; i = i + 2)
        {
            System.out.println(i);
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}