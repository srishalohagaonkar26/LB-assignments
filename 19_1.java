int iProduct = 1;

while(num != 0)
{
    int iDigit = num % 10;
    iProduct = iProduct * iDigit;
    num = num / 10;
}

System.out.println("Product of digits: " + iProduct);