 //Q22.  Write a program to Convert binary to decimal.

 #include<stdio.h>
 int main()
 {
    char binary[65];  //size 65 safely hold up to 64 1s and 0s.
    int decimal=0, i=0;

    printf("Enter a Binary Number: ");
    scanf("%s", binary);  //taking input n one take.

    while(binary[i]!='\0')  //converting binary into decimal.
    {
        decimal = (decimal*2) + (binary[i] - '0'); //using ASCII value.
        i++;
    }

    printf("The Binary number %s is equal to %d in Decimal.", binary, decimal);  //printing result.

    return 0;
 }