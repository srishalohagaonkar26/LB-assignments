int iCnt = 0;

for(int i = 1; i <= num; i++)
{
    if(num % i == 0)
    {
        iCnt++;
    }
}

System.out.println("Total factors: " + iCnt);