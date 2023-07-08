#include<stdio.h>
#include<math.h>
int sumprint();
int sum();
int advancesum();
int matrixsum();
int subprint();
int sub();
int absolutesub();
int mulprint();
int mul();
int divprint();
int div();
int advancediv();
int equprint();
int simpleequ();
int compequ();
int miscprint();
int areaprint();
int trianglearea();
int circlearea();
int recarea();
void agecalculator();
int main()
{
    int n;
    while(1)
    {
        printf("\tMain Menu\nWhich operation you would like to perform?\nPress 1 for add\nPress 2 for subtract\nPress 3 for divide\nPress 4 for multiply\nPress 5 for solving equations\nPress 6 for Miscellaneous\nPress 7 for Exit\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            sumprint();
            int a;
            scanf("%d",&a);
            switch(a)
            {
            case 1:
                sum();
                break;
            case 2:
                advancesum();
                break;
            case 3:
                matrixsum();
                break;
            default:
                return main();
            }
            break;

        case 2:
            subprint();
            int b;
            scanf("%d",&b);
            switch(b)
            {
            case 1:
                sub();
                break;
            case 2:
                absolutesub();
                break;
            default:
                return main();
            }
            break;
        case 3:
            divprint();
            int c;
            scanf("%d",&c);
            switch(c)
            {
            case 1:
                div();
                break;
            case 2:
                advancediv();
                break;
            default:
                return main();
            }
            break;
        case 4:
            mulprint();
            int d;
            scanf("%d",&d);
            switch(d)
            {
            case 1:
                mul();
                break;
            case 2:
                printf("This is for modulo multiply\n");
                break;
            case 3:
                printf("This is for matrix multiplication\n");
                break;
            case 4:
                printf("This is for exponentiation\n");
                break;
            default:
                return main();
            }
            break;
        case 5:
            equprint();
            int e;
            scanf("%d",&e);
            switch(e)
            {
            case 1:
                simpleequ();
                break;
            case 2:
                compequ();
                break;
            default:
                return main();
            }
            break;
        case 6:
            miscprint();
            int f;
            scanf("%d",&f);
            switch(f)
            {
            case 1:
                areaprint();
                int g;
                scanf("%d",&g);
                switch(g)
                {
                case 1:
                    trianglearea();
                    break;
                case 2:
                    recarea();
                    break;

                case 3:
                    circlearea();
                    break;
                default:
                    return main() ;
                    break;
                }
                break;
            case 2:
                agecalculator();
                printf("This is for Age calculation\n");
                break;
            default:
                return main();
            }
            break;
        default:

            return main ();
        }
    }
}
int sum()
{
    float a,b,sum=0;
    printf("Input any two number:");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("The sum is:%.3f\n",sum);
    return (sum)+(sum);
}
int sub()
{

    int a,b,sub=0;
    printf("Input any two number:");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("The sub is:%d\n",sub);
    return sub;
}
int mul()
{


    float a,b,mul=0;
    printf("Input any two number:");
    scanf("%f%f",&a,&b);
    mul=a*b;
    printf("The mul is:%.3f\n",mul);
    return mul;
}
int div()
{

    float a,b,div=0;
    printf("Input any two number:");
    scanf("%f%f",&a,&b);
    div=a/b;
    printf("The div is:%.3f/%.3f\n",a,b);
    return div;
}
int advancesum()
{
    int n;
    float sum=0;
    printf("How many numbers you want to add?\n");
    scanf("%d",&n);
    float arr[n];
    printf("The numbers are:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Advanced sum=%.3f\n",sum);
    return 0;
}
int sumprint()
{
    printf("\tAddition Menu\nWhich type of addition you would like to perform?\nPress 1 for Simple addition\nPress 2 for Advanced addition\nPress 3 for Matrix addition\nPress 4 for Returning to the Main Menu\n");
    return 0;
}
int absolutesub()
{
    float a,b,sub=0;
    printf("Input any two number:");
    scanf("%f%f",&a,&b);
    sub=a-b;
    printf("The sub is:%.3f\n",sub);
    return sub ;
}
int subprint()
{
    printf("\tSubtruction Menu\nWhich type of Subtruction you would like to Perform?\nPress 1 for Simple Subtruction\nPress 2 for Absolute difference\nPress 3 for Returning to the Main Menu\n");

}
int divprint()
{
    printf("\tDivision Menu\nWhich type of division you would like to perform\nPress 1 for Simple division\nPress 2 for Advanced division\nPress 3 for Returning to the Main Menu\n ");

}
int mulprint()
{
    printf("\tMultiplication Menu\nWhich type of multiplication you would like to perform\nPress 1 for Simple Multiply\nPress 2 for Modulo Multiply\nPress 3 for Matrix Multiplication\nPress 4 for Exponentiation\nPress 5 for REturning to the Main Menu\n");

}
int equprint()
{
    printf("\tEquation Solving Menu\nPress 1 for Simple Equation\nPress 2 for Complex Equation\nPress 3 for Returning to the Main Menu\n");

}
int miscprint()
{
    printf("\tMiscellaneous menu\nWhich type of Miscellan you would like to perform?\nPress 1 for Area Calculator\nPress 2 for Age Calculator\nPress 3 for Returning to the Main Menu\n");
}
int areaprint()
{
    printf("\tArea Calculation Menu\nWhich type of Area you would like to calculate?\nPress 1 for Triangle\nPress 2 for Rectangle\nPress 3 for Circle\nPress 4 for Returning to the Main Menu\n");

}
int matrixsum()
{
    int mat1[100][100],mat2[100][100],mat3[100][100],i,j,rows,columns;
    printf("Enter the numbers of row :");
    scanf("%d",&rows);
    printf("Enter the numbers of column:");
    scanf("%d",&columns);
    printf("Enter the elements of first matrix:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("\nResult of matrix addition:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            printf("% d",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int advancediv()
{
    float a,b,div=0;
    int y;
    printf("Enter the number you want to divide:");
    scanf("%f%f",&a,&b);
    div=a/b;
    y=a/b;
    printf("The div is:%.3f\n",div);
    printf("The quotient is:%d\n",y);
    return 0;
}
int compequ()
{
    float a,b,c,dis,X1,X2,main,comp;
    printf("Enter the coeficients of a,b and c:");
    scanf("%f%f%f",&a,&b,&c);
    dis=((b*b)-(4*a*c));
    if(dis==0)
    {
        X1=X2=(-b/(2*a));
        printf("The roots are equal and they are X1 = X2 = %.3f\n",X1);
    }
    else if(dis>0)
    {
        X1=(-b+sqrt(dis))/(2*a);
        X2=(-b-sqrt(dis))/(2*a);
        printf("The roots if the equation are X1 = %.3f and X2 = %.3f\n",X1,X2);

    }
    else
    {
        main=-b/2*a;
        comp=sqrt(-dis)/2*a;
        printf("The roots of the equations are X1 = %.3f+%.3fi and X2 = %.3f-%.3fi\n",main,comp,main,comp);

    }
    return 0;
}
int simpleequ()
{
    float a,b,c,d,e,f,x,y;
    printf("Enter the coeficients of a , b and c:");
    scanf("%f%f%f",&a,&b,&c);
    printf("Enter the coeficients of d , e and f:");
    scanf("%f%f%f",&d,&e,&f);
    x=((c*e)-(b*f))/((a*e)-(b*d));
    y=((c*d)-(a*f))/((b*d)-(a*e));
    printf("The solve of these two equations are x = %.3f and y = %.3f\n",x,y);
    return 0;
}
int trianglearea()
{
    float a,b,c,s,area;
    printf("Enter the values of the length of triangle a , b and c:");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c&&(b+c)>a&&(c+a)>b)
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of the triangle is = %.3f\n",area);
    }
    else
    {
        printf("This is not a valid Triangle.\n");
    }
    return 0;
}

int circlearea()
{
    float r,area;
    printf("Enter the Radius of the circle:\n");
    scanf("%f",&r);
    area=3.1416*r*r;
    printf("The area of the Circle is:%.3f\n",area);
    return 0;
}

int recarea()
{
    float l,w,area;
    printf("Enter the Length of the Rectangle:",l);
    scanf("%f",&l);
    printf("Enter the width of the Rectangle:",w);
    scanf("%f",&w);
    area=l*w;
    printf("The area of the Rectangle is:%.3f\n",area);
    return 0;
}
void agecalculator()
{
    int d1,m1,y1,d2,m2,y2;
    printf("enter your birth year..\n");
    scanf("%d",&y1);
    printf("enter your birth month \n");
    scanf("%d",&m1);
    printf("enter your birth day\n");
    scanf("%d",&d1);
    printf("---------------------------------------------------\n");
    printf("enter your present year..!\n");
    scanf("%d",&y2);
    printf("enter your present month\n");
    scanf("%d",&m2);
    printf("enter your present day\n");
   scanf("%d",&d2);
    if (d1==d2 && m1==m2)
    {
        printf("congregation....!\n your birthday is today.\nHAPPY BIRTHDAY......!\n");
    }
    if (d2>=d1)
    {
        d2=d2-d1;
    }
    else
    {
       m2--;
       d2=d2+30;
       d2=d2-d1;


}
if (m2>=m1)
{
    m2=m2-m1;
    }
    else
    {
        y2--;
        m2=m2+12;
        m2=m2-m1;
    }
    y2=y2-y1;
    printf("your age is =DD : %d MM : %d YY : %d\n",d2,m2,y2);
}
