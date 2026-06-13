class Logic
{
    void checkPalindrome(int num)
    {
        int iOriginal = num;
        int iReverse = 0;

        while(num != 0)
        {
            int iDigit = num % 10;
            iReverse = (iReverse * 10) + iDigit;
            num = num / 10;
        }

        if(iOriginal == iReverse)
        {
            System.out.println(iOriginal + " is a Palindrome");
        }
        else
        {
            System.out.println(iOriginal + " is not a Palindrome");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}