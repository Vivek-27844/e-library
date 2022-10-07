#include<stdio.h>
void toweofhanoi(int n ,char frompeg,char topeg,char auxpeg)
{
    if(n==1)
    {
        printf("Move disk 1 from peg %c to peg %c",frompeg,topeg);
        return;
    }
    toweofhanoi(n-1,frompeg,auxpeg,topeg);

    printf("\n Move disk %d from peg %c to peg %c  ",n,frompeg,topeg );
    toweofhanoi(n-1,auxpeg,topeg,frompeg);

}
int  main()
{
    int n=4;    
    toweofhanoi(n,'A','c','B');
    return 0;
}