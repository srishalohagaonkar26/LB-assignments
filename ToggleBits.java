import java.util.Scanner;


    
    public static void main(String[] args) 
    {
        UINT iValue = 0, iLocation1 = 0, iLocation2 = 0, iRet = 0;
        
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter number : \n");
        iValue = scanner.nextInt();
        
        System.out.print("Enter 1st bit position : \n");
        iLocation1 = scanner.nextInt();
        
        System.out.print("Enter 2nd bit position : \n");
        iLocation2 = scanner.nextInt();
        
        iRet = toggleBits(iValue, iLocation1, iLocation2);
        
        System.out.printf("Updated no : %d\n", iRet);
    }
}