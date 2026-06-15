import java.util.Scanner;

class PatternApp 
{
    public static void pattern(int row, int col) 
    {
        char ch = 'A';
        
        for (int i = 1; i <= row; i++) 
        {
            for (int j = 1; j <= col; j++) 
            {
                System.out.print(ch + "\t");
            }
            ch++;
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter number of rows: ");
        int value1 = sobj.nextInt();
        System.out.print("Enter number of columns: ");
        int value2 = sobj.nextInt();
        
        pattern(value1, value2);
        
        sobj.close();
    }
}