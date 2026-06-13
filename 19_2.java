int iEven = 0;
int iOdd = 0;

for(int i = 1; i <= n; i++)
{
    if(i % 2 == 0)
    {
        iEven++;
    }
    else
    {
        iOdd++;
    }
}

System.out.println("Even numbers: " + iEven);
System.out.println("Odd numbers: " + iOdd);