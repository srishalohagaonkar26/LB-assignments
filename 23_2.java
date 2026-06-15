import java.util.Scanner;

class PatternApp 
{
    public static void pattern(int no) 
    {
        for (int cnt = no; cnt >= 1; cnt--)
        {
            System.out.print(cnt + "\t#\t");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter number of elements: ");
        int value = sobj.nextInt();
        
        pattern(value);
        
        sobj.close();
    }
}