import java.util.Scanner;

class OnBit 
{
    static int OnBit(int iNo, int iPos) 
    {
        int iMask = 0;
        int iResult = 0;

        iMask = iMask << (iPos - 1);

        iResult = (iNo ^ iMask);
        return iResult;
    }
}
public class assignment35_4
{
    public static void main(String[] args) 
    {
        int iValue = 0, iLocation = 0 , iRet = 0;
        
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter number : \n");
        iValue = scanner.nextInt();
        
        System.out.print("Enter 1st bit position : \n");
        iLocation = scanner.nextInt();
        
        iRet = OnBit.OnBit(iValue, iLocation);
        
        System.out.printf("Updated no : %d\n", iRet);
    }
        
}