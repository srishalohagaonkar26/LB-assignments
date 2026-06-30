class BitOperations 
{
    // Problem 1: Check if bit at position is ON or OFF
    static boolean ChkBit(int iNo, int iPos) 
    {
        int iResult = 0;
        int iMask = 0;

        if (iPos < 1 || iPos > 32) 
        {
            System.out.println("Invalid Bit position");
            return false;
        }
        
        // Create mask for the position
        iMask = 0x1;
        
        // Shift mask to the required position
        iMask = iMask << (iPos - 1);
        
        // Check if bit is ON using AND operation
        iResult = iNo & iMask;
        
        // If result is non-zero, bit is ON (return TRUE)
        // If result is zero, bit is OFF (return FALSE)
        return iResult;
    }
    
    public static void main(String A[]) {
        // Test Case 1
        int iNo = 10;      // Binary: 1010
        int iPos = 2;      // Check position 2
        
        boolean result = ChkBit(iNo, iPos);
        System.out.println("Input: " + iNo + " " + iPos);
        System.out.println("Output: " + result);
        
        System.out.println();
        
        // Test Case 2
        iNo = 10;          // Binary: 1010
        iPos = 1;          // Check position 1
        result = ChkBit(iNo, iPos);
        System.out.println("Input: " + iNo + " " + iPos);
        System.out.println("Output: " + result);
    }
}