import java.util.Scanner;

class PatternApp 
{
    public static void pattern(int no) 
    {
        char ch = 'A';
        
        for (int cnt = 1; cnt <= no; cnt++) 
        {
            System.out.print(ch + "\t");
            ch++;
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