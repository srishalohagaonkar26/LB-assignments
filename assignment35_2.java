import java.util.Scanner;

class ToggleBits 
{
    static int toggleBits(int iNo, int iPos1, int iPos2) 
    {
        int iMask1 = 0x1 , iMask2 = 0x1 , iMask = 0;
        int iResult = 0;

        iMask1 = iMask1 << (iPos1 - 1);
        iMask2 = iMask2 << (iPos2 - 1);

        iMask = iMask1 | iMask2;

        iResult = iNo ^ iMask;
        return iResult;
    }
}
public class assignment35_2 
{
    public static void main(String[] args) 
    {
        int iValue = 0, iLocation1 = 0, iLocation2 = 0, iRet = 0;
        
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter number : \n");
        iValue = scanner.nextInt();
        
        System.out.print("Enter 1st bit position : \n");
        iLocation1 = scanner.nextInt();
        
        System.out.print("Enter 2nd bit position : \n");
        iLocation2 = scanner.nextInt();
        
        iRet = ToggleBits.toggleBits(iValue, iLocation1, iLocation2);
        
        System.out.printf("Updated no : %d\n", iRet);
    }
        
}