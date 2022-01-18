#include<bits/stdc++.h>
using namespace std;


// The following lines of code produce the working of carry look ahead adder
// Till the user inputs the choice as 1, the inputs are computed again and again.

int get1(int a)
{
    char ch='B';
    if(a==1)
        ch='A';
    do
    {
        printf("\n\tENTER VALUE OF %c:",ch);
        scanf("%d",&a);
        if(a<=0)
            printf("\n\t\t!INVALID NUMBER.ENTER VALUE (0< A)!");
    }while(a<=0);
    return(a);
}
int and1(int a,int b)
{
    int c;
    if(a<b)
        c=a;
    else
        c=b;
                                                     //Implementation Of And Gates for Binary Operation
    return (c);
}
int or1(int a,int b)
{
    int x;
    if(a>b)
        x=a;                                           //Implementation of Or Gates for Binary Operation
    else
        x=b;

    return x;
}
int exor1(int a,int b)
{
    int x;
    if(a==b)
        x=0;                                             // Implementation Of Exor Gates for Binary Operation
    else
        x=1;
    return x;
}
void add()
{
    int i=7,A,B,a,b,cin,num;
    int n1[8],n2[8],cg[8],cp[8],sum[8];
    for(i=0;i<=7;i++)
    {
        //Initialising all the bits to 0
        n1[i]=0;                   // Num 1
        n2[i]=0;                  // Num 2
        cg[i]=0;                  // Gi - Carry Generator
        cp[i]=0;                  // Pi - Carry Propagator
        sum[i]=0;                 // Sum - Sum of the two bits
    }
    A = a = get1(1);
    B = b = get1(0);
    i=7;

//This section of Code produces the binary representation of each of the two inputs

    /*do
    {
        n1[i]=a%2;
        a=a/2;
        n2[i]=b%2;
        b=b/2;
        i--;
    }while((a!=0)||(b!=0));
    */

    for(i=7; i>=0 && ((a!=0)||(b!=0)); i--)
    {
        n1[i]=a%2;
        a=a/2;
        n2[i]=b%2;
        b=b/2;
    }

     i=0;
     printf("\n\t\t Binary Form",A);
     printf("\n\t A = %d : ",A);
     //Printing the Binary Representation of the Number A
     for(i=0;i<=7;i++)
        printf("%d ",n1[i]);

    printf("\n\t B = %d : ",B);
     //Printing the Binary Representation of the Number B

     for(i=0;i<=7;i++)
        printf("%d ",n2[i]);

     cin=0;
     for(i=7;i>=0;i--)
    {
        sum[i]=exor1(cin,exor1(n1[i],n2[i]));                  // Sum = Pi exor Gi
        cg[i]=and1(n1[i],n2[i]);                               // Gi = Ai . Bi
        cp[i]=or1(n1[i],n2[i]);                                // Pi = Ai (+) Bi
        cin=or1(cg[i],and1(cp[i],cin));                        // Cin =Gi + PiCi
     }

     printf("\n\n\t\t SUM: ");
     num=0;
     for(i=0;i<=7;i++)
    {
        printf(" %d",sum[i]);
        num=num + (sum[i]*pow(2,7-i));
    }

    printf("\n\n\t\t SUM: %d + %d= %d\n",A,B,num);
    printf("\t\t The Carry Is : %d\n\n",cin);
}
int main()
{
    int ch,a,b,c,d;
    while(1)
        {
            M: printf("******** MENU FOR LOOK AHEAD CARRY ADDER ********");
            printf("\n\t\t1.ADDITION OF TWO NUMBER");
            printf("\n\t\t2.EXIT\n");
            printf("*************************************************");
            printf("\n\t\tEnter Your Option:");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    add();
                    break;
                case 2:
                    exit(0);
                    break;
                default:
                    printf("ERROR!!!!!!!!! INVALID ENTRY...\n");
                    printf("Back To Main Menu\n\n");
                    goto M;
            }
        }
}
/*------------------ OUTPUT --------------------
******** MENU FOR LOOK AHEAD CARRY ADDER ********
1.ADDITION OF TWO NUMBER
2.EXIT
*************************************************
Enter Your Option:1
ENTER VALUE OF A:2
ENTER VALUE OF B:3
Binary Form
A = 2 : 0 0 0 0 0 0 1 0
B = 3 : 0 0 0 0 0 0 1 1
SUM: 0 0 0 0 0 1 0 1
SUM: 2 + 3= 5
The Carry Is : 0
*/
