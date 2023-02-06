#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
void file();
void view_list();
int marks;
void swap();
void shuffle();
void menu();
void instructions();
void quiz();
int subt_r1();
int subt_r2();
int subt_r3();
int div_r1();
int div_r2();
int div_r3();
int add_r1();
int add_r2();
int add_r3();
int Multi_r1();
int Multi_r2();
int Multi_r3();
struct
    {
    char name[60];
    int id;
    }add;
int main()
{
    int a,ins,key,view,add,mul,sub,div;
    menu:
    menu();
    printf("\n\t\t\tPlease Enter Your Choice[1-4]: ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        system("cls");
        quiz();
    printf("\nPlease Enter Your key[1-4]: ");
    scanf("%d",&key);
    if (key == 1)
    {
        system("cls");
        marks=add_r1();
        file();
        printf("\n\nPress 0 for main menu: ");
        scanf("%d",&add);
        if (add == 0)
        {
            system("cls");
            goto menu;
        }
    }
    else if(key == 2)
    {
        system("cls");
        marks=subt_r1();
        file();
        printf("\n\nPress 0 for main menu: ");
        scanf("%d",&sub);
        if (sub == 0)
        {
            system("cls");
            goto menu;
        }
    }
    else if (key == 3)
    {
        system("cls");
        marks=Multi_r1();
        file();
        printf("\n\nPress 0 for main menu: ");
        scanf("%d",&mul);
        if (mul == 0)
        {
            system("cls");
            goto menu;
        }
    }
    else if (key == 4)
    {
         system("cls");
        marks=div_r1();
        file();
        printf("\n\nPress 0 for main menu: ");
        scanf("%d",&div);
        if (div == 0)
        {
            system("cls");
            goto menu;
        }
    }
    else
    {
        exit(0);
    }
    break;
    case 2:
        system("cls");
        instructions();
    printf("Press 0 for Main Menu.\n");
    printf("");
    scanf("%d",&ins);
    if (ins == 0)
    {
        system("cls");
        goto menu;
    }
        break;
    case 3:
        system("cls");
        view_list();
        printf("\n\n\n\nPress 0 for main menu ");
        scanf("%d",&view);
        if (view == 0)
        {
            system("cls");
            goto menu;
        }
        break;
    case 4:
        system("cls");
        exit(0);
        break;
    default:
        printf("\t\t\tINCORRECT CHOICE!!!");
        Sleep(500);
        system("cls");
        goto menu;
    }

}
void menu()
{
         system("color 3");
    printf("\n\n\t\t\t\tMATHS QUIZ CONDUCTOR");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t\t\t>> 1.Start The Quiz\n");
    printf("\t\t\t>> 2.Instructions\n");
    printf("\t\t\t>> 3.Previous Scores\n");
    printf("\t\t\t>> 4.Exit\n");
}
void instructions()
{
    printf("\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 INSTRUCTIONS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\n");
    printf(">>The quiz consists of 4 arithmetic operators, the user has to choose whichever quiz He/She wants to start with.\n");
    printf(">> Each operator quiz has 3 rounds\n");
    printf(">> To move forward in the rounds he/she must obtain a certain score.\n");
    printf(">> The quiz will tally all scores and give you the total at the end.\n");
    printf("\t\t\tGOOD LUCK AND ENJOY.\n");
    printf("\n\n\n");
}
void quiz()
{
    printf("\n\n\n");
    printf("------------------------------------------------------------------------\n");
    printf("\t  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TYPES OF QUIZ \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("------------------------------------------------------------------------\n");
    printf("\n\n");
    printf(">> 1.Addition\n");
    printf(">> 2.Subtraction\n");
    printf(">> 3.Multiplication\n");
    printf(">> 4.Division\n");
}
void swap(int arr[], int i, int j)
 {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void shuffle(int arr[], int n)
{
    int i;
	for ( i = 0; i <= n - 2; i++)
	{
		int j = i + rand() % (n - i);
		swap(arr, i, j);
	}
}
int subt_r3()
{
    srand(time(0));
    int n1,n2,n3,n4,ans,num,den;
    int arr[4],arr2[1];
    char A,a,B,b,C,c,D,d;
    int i,s4=0,x,j;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(i=1;i<=5;i++)
     {
       printf("***************************************************\n");
       printf("---------------------------------------------------\n");
       printf("\t\t  ROUND 3\n");
       printf("---------------------------------------------------\n");
       printf("***************************************************\n");
       n1=rand()%12+1;
       n2=rand()%12+1;
       n3=rand()%12+1;
       n4=rand()%12+1;
       if (n2 == n4)
        {
          num=(n1-n3);
          den=n4;
        }
      else
         {
          num=((n1*n4)-(n2*n3));
          den=(n2*n4);
         }
      arr[0]=num;
      arr2[0]=den;
      arr[1]=rand()%12+1;
      arr[2]=rand()%12+1;
      arr[3]=rand()%20+1;
      shuffle(arr, n);
      printf("\n%d) %d/%d - %d/%d\n\n",i,n1,n2,n3,n4);
      printf("A: %d/%d\n",arr[0],arr2[0]);
      printf("B: %d/%d\n",arr[1],arr2[0]);
      printf("C: %d/%d\n",arr[2],arr2[0]);
      printf("D: %d/%d\n",arr[3],arr2[0]);
      printf("\n\nPlease Enter Character as Your Answer = ");
      ans=getche();
      printf("\n");

    if(ans == 'A' || ans == 'a')
    {
        if ((arr[0] == num) && (arr2[0] == den))
        {
       s4++;
        }
    }
      else if (ans == 'B' || ans == 'b')
      {
        if ((arr[1] == num) && (arr2[0] == den))
        {
       s4++;
        }
      }
      else if (ans == 'C' || ans == 'c')
      {

       if ((arr[2] == num) && (arr2[0] == den))
        {
       s4++;
        }
      }
     else if(ans == 'D' || ans == 'd')
      {
    if ((arr[3] == num) && (arr2[0] == den))
        {
       s4++;
        }
      }
    Sleep(300);
    system("cls");
    }
     if(s4>=3)
        {
             printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONGRATULATIONS!!! YOU HAVE COMPLETED SUBTRACTION. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
             Sleep(300);
             system("cls");

        }
    else
        {
           printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORRY!!! YOU FAILED. PLEASE TRY AGAIN. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
           Sleep(300);
           system("cls");
           s4=subt_r3();
        }
                     return s4;
}

int subt_r2()
{
    srand(time(0));
    char ans;
    int s2=0,s3,s4;
    float n1,n2,diff;
    int i;
    float arr[4];
    char A,B,C,D,a,b,c,d;
	 int n = sizeof(arr) / sizeof(arr[0]);
    for(i=1;i<=5;i++)
    {
    printf("***************************************************\n");
    printf("---------------------------------------------------\n");
    printf("\t\t  ROUND 2\n");
    printf("---------------------------------------------------\n");
    printf("***************************************************\n");
     n1=(float)rand()/1250.5;
     n2=(float)rand()/1250.5;
     diff=n1-n2;
     arr[0]=diff;
     arr[1]=(float)rand()/1000.5;
     arr[2]=(float)rand()/1250.5;
     arr[3]=(float)rand()/1050.5;
     shuffle(arr,n);
     printf("\n%d) %.2f - %.2f = ?",i,n1,n2);
     printf("\n");
     printf("\nA) %.2f",arr[0]);
     printf("\nB) %.2f",arr[1]);
     printf("\nC) %.2f",arr[2]);
     printf("\nD) %.2f",arr[3]);
     printf("\n\nAnswer is to the nearest value.");
     printf("\nPlease Enter Character as Your Answer = ");
     ans=getche();
     printf("\n");
      if(ans == 'A' || ans == 'a')
      {
        if (arr[0] == diff)
        {
        s2++;
        }
      }
      else if (ans == 'B' || ans == 'b')
      {
        if (arr[1] == diff)
        {
        s2++;
        }
      }
      else if (ans == 'C' || ans == 'c')
      {

       if (arr[2] == diff)
        {
        s2++;
        }
      }
     else if(ans == 'D' || ans == 'd')
      {
    if (arr[3] == diff)
        {
        s2++;
        }
      }
    Sleep(300);
    system("cls");
}

   if(s2>=3)
        {
             printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONGRATULATIONS!!! YOU HAVE REACHED ROUND 3. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
             Sleep(300);
             system("cls");
             s4=subt_r3();
             s3=s4+s2;
             return s3;
        }
    else
       {
           printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORRY!!! YOU FAILED. PLEASE TRY AGAIN. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
           Sleep(300);
           system("cls");
           s2=subt_r2();
       }

}

int subt_r1()
{
    srand(time(0));
    char ans;
    int diff;
    int ssum=0,s1=0;
    int s3;

    int n1,n2;
    int i,arr[4];
    char A,B,C,D,a,b,c,d;
	 int n = sizeof(arr) / sizeof(arr[0]);
    for(i=1;i<=5;i++)
    {
    printf("***************************************************\n");
    printf("---------------------------------------------------\n");
    printf("\t\t  ROUND 1\n");
    printf("---------------------------------------------------\n");
    printf("***************************************************\n");
     n1=rand()%25;
     n2=rand()%30;
     diff=n1-n2;
     arr[0]=diff;
     arr[1]=rand()%100;
     arr[2]=rand()%12;
     arr[3]=rand()%10;
     shuffle(arr, n);
     printf("\n%d) %d - %d = ?",i,n1,n2);
     printf("\n");
     printf("\nA) %d",arr[0]);
     printf("\nB) %d",arr[1]);
     printf("\nC) %d",arr[2]);
     printf("\nD) %d",arr[3]);
     printf("\n\nPlease Enter Character as Your Answer = ");
     ans=getche();
     printf("\n");
      if(ans == 'A' || ans == 'a')
      {
        if (arr[0] == diff)
        {
        s1++;
        }
      }
      else if (ans == 'B' || ans == 'b')
      {
        if (arr[1] == diff)
        {
        s1++;
        }
      }
      else if (ans == 'C' || ans == 'c')
      {

       if (arr[2] == diff)
        {
        s1++;
        }
      }
     else if(ans == 'D' || ans == 'd')
      {
    if (arr[3] == diff)
        {
        s1++;
        }
      }
    Sleep(300);
    system("cls");
    }
    if(s1>=3)
         {

             printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONGRATULATIONS!!! YOU HAVE REACHED ROUND 2. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
             Sleep(300);
             system("cls");
              s3=subt_r2();
              ssum=s1+s3;
              return ssum;
          }
    else
    {
           printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORRY!!! YOU FAILED. PLEASE TRY AGAIN. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
           Sleep(300);
           system("cls");
            s1=subt_r1();
    }

}
int div_r1()
{
    srand(time(0));
    int i,dividend,divisor,quotient,remainder,q,r;
    char A,B,C,D,a,b,c,d;
    char ans;
     int dsum=0,d1=0;
    int d3;
    for(i=1;i<=5;i++)
  {
    printf("***************************************************\n");
    printf("---------------------------------------------------\n");
    printf("\t\t  ROUND 1\n");
    printf("---------------------------------------------------\n");
    printf("***************************************************\n");
    dividend=rand()%12+1;
    divisor=rand()%10+1;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("%d) %d / %d = ?\n",i,dividend,divisor);
    printf("\nQuotient = ");
    scanf("%d",&q);
    printf("Remainder = ");
    scanf("%d",&r);
    printf("\n");

    if ((quotient == q) && (remainder == r))
    {
        d1++;
    }
    Sleep(500);
    system("cls");
    }
    if(d1>=3)
        {
        printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONGRATULATIONS!!! YOU HAVE REACHED ROUND 2. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(500);
        system("cls");
         d3=div_r2();
    	dsum=d1+d3;
    return dsum;
        }
        else
        {
          printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORRY!!! YOU FAILED. PLEASE TRY AGAIN. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
          Sleep(500);
          system("cls");
        }
           d1=div_r1();
}
int div_r2()
{
     srand(time(0));
      int d2=0,d3,d4;
    int i;
    float n1,n2,divide;
    char A,B,C,D,a,b,c,d;
    char ans;
    float arr[4];
    int n = sizeof(arr) / sizeof(arr[0]);
    for(i=1;i<=5;i++)
  {
    printf("***************************************************\n");
    printf("---------------------------------------------------\n");
    printf("\t\t  ROUND 2\n");
    printf("---------------------------------------------------\n");
    printf("***************************************************\n");
    n1=(float)rand()/1000;
    n2=(float)rand()/1000;
    divide=n1/n2;
    arr[0]=divide;
    arr[1]=(float)rand()/1000;
    arr[2]=(float)rand()/5000;
    arr[3]=(float)rand()/1000;
    shuffle(arr, n);
    printf("%d) %.1f / %.1f = ?\n",i,n1,n2);
    printf("\nA: %.1f",arr[0]);
    printf("\nB: %.1f\n",arr[1]);
    printf("C: %.1f",arr[2]);
    printf("\nD: %.1f",arr[3]);
    printf("\n\nAnswer is to the nearest value.");
    printf("\nPlease Enter Character as Your Answer = ");
    ans=getche();
    printf("\n");

    if(ans == 'A' || ans == 'a')
    {
        if (arr[0] == divide)
        {
        d2++;
        }
    }
      else if (ans == 'B' || ans == 'b')
      {
        if (arr[1] == divide)
        {
        d2++;
        }
      }
      else if (ans == 'C' || ans == 'c')
      {

       if (arr[2] == divide)
        {
        d2++;
        }
      }
     else if(ans == 'D' || ans == 'd')
      {
    if (arr[3] == divide)
        {
        d2++;
        }
      }
    Sleep(500);
    system("cls");
    }
     if(d2>=3)
        {
        printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONGRATULATIONS!!! YOU HAVE REACHED ROUND 2. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(500);
        system("cls");
        d4=div_r3();
        d3=d4+d2;
        return d3;
        }
        else
        {
          printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORRY!!! YOU FAILED. PLEASE TRY AGAIN. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
          Sleep(500);
          system("cls");
          d2=div_r2();
        }
}
int div_r3()
{
     srand(time(0));
    int n1,n2,n3,n4,ans,num,den;
    int arr[4],arr2[1];
    char A,a,B,b,C,c,D,d;
    int i,d4=0,x,j;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(i=1;i<=5;i++)
   {
     printf("***************************************************\n");
     printf("---------------------------------------------------\n");
     printf("\t\t  ROUND 3\n");
     printf("---------------------------------------------------\n");
     printf("***************************************************\n");
     n1=rand()%12+1;
     n2=rand()%12+1;
     n3=rand()%12+1;
     n4=rand()%12+1;
     num=(n1*n4);
     den=(n2*n3);
     arr[0]=num;
     arr2[0]=den;
     arr[1]=rand()%12+1;
     arr[2]=rand()%12+1;
     arr[3]=rand()%20+1;
     shuffle(arr, n);
     printf("\n%d) %d/%d / %d/%d\n",i,n1,n2,n3,n4);
     printf("\nA: %d/%d",arr[0],arr2[0]);
     printf("\nB: %d/%d\n",arr[1],arr2[0]);
     printf("C: %d/%d",arr[2],arr2[0]);
     printf("\nD: %d/%d",arr[3],arr2[0]);
     printf("\n\nPlease enter character as answer: ");
     ans=getche();
     printf("\n");

     if(ans == 'A' || ans == 'a')
     {
        if ((arr[0] == num) && (arr2[0] == den))
        {
        d4++;
        }
    }
      else if (ans == 'B' || ans == 'b')
      {
        if ((arr[1] == num) && (arr2[0] == den))
        {
        d4++;
        }
      }
      else if (ans == 'C' || ans == 'c')
      {

       if ((arr[2] == num) && (arr2[0] == den))
        {
            d4++;
        }
      }
     else if(ans == 'D' || ans == 'd')
      {
    if ((arr[3] == num) && (arr2[0] == den))
        {
        d4++;
        }
      }
    Sleep(500);
    system("cls");
    }
    if(d4>=3)
        {

        printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONGRATULATIONS!!! YOU HAVE COMPLETED DIVISION\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(500);
        system("cls");
        }
    else
    {
        printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORRY!!! YOU FAILED. PLEASE TRY AGAIN. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(500);
        system("cls");
        d4=div_r3();
     }
    return d4;

}

int add_r1()
{
    srand(time(0));
    char ans;
    int asum=0,a1=0;
    int a3;
    int n1,n2,sum;
    int i,arr[4];
    char A,B,C,D,a,b,c,d;
	 int n = sizeof(arr) / sizeof(arr[0]);
    for(i=1;i<=5;i++)
    {
    printf("***************************************************\n");
    printf("---------------------------------------------------\n");
    printf("\t\t  ROUND 1\n");
    printf("---------------------------------------------------\n");
    printf("***************************************************\n");
     n1=rand()%25;
     n2=rand()%30;
     sum=n1+n2;
     arr[0]=sum;
     arr[1]=rand()%100;
     arr[2]=rand()%12;
     arr[3]=rand()%10;
     shuffle(arr, n);
     printf("\n%d) %d + %d = ?",i,n1,n2);
     printf("\n\n");
     printf("A) %d",arr[0]);
     printf("\nB) %d",arr[1]);
     printf("\nC) %d",arr[2]);
     printf("\nD) %d",arr[3]);
     printf("\n\nPlease Enter Character as Your Answer = ");
     ans=getche();
     printf("\n");
      if(ans == 'A' || ans == 'a')
      {
        if (arr[0] == sum)
        {
            a1++;
            }
          }
          else if (ans == 'B' || ans == 'b')
          {
            if (arr[1] == sum)
            {
            a1++;
            }
          }
          else if (ans == 'C' || ans == 'c')
          {

           if (arr[2] == sum)
            {
            a1++;
            }
          }
         else if(ans == 'D' || ans == 'd')
          {
        if (arr[3] == sum)
            {
            a1++;
            }
          }
        Sleep(500);
        system("cls");
       }
       if(a1>=3)
        {
        printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONGRATULATIONS!!! YOU HAVE REACHED ROUND 2. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(500);
        system("cls");
        a3=add_r2();
   	asum=a1+a3;
    return asum;
    }
    else
    {
    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORRY!!! YOU FAILED. PLEASE TRY AGAIN. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    Sleep(500);
    system("cls");
    a1=add_r1();
    }
}

int add_r2()
{
    int a2=0,a3,a4;
     srand(time(0));
    char ans;
    float n1,n2,sum;
    int i;
    float arr[4];
    char A,B,C,D,a,b,c,d;
	 int n = sizeof(arr) / sizeof(arr[0]);
    for(i=1;i<=5;i++)
    {
    printf("***************************************************\n");
    printf("---------------------------------------------------\n");
    printf("\t\t  ROUND 2\n");
    printf("---------------------------------------------------\n");
    printf("***************************************************\n");
     n1=(float)rand()/1250.5;
     n2=(float)rand()/1250.5;
     sum=n1+n2;
     arr[0]=sum;
     arr[1]=(float)rand()/1000.5;
     arr[2]=(float)rand()/1250.5;
     arr[3]=(float)rand()/1050.5;
     shuffle(arr,n);
     printf("\n%d) %.2f + %.2f =?",i,n1,n2);
     printf("\n");
     printf("\nA) %.2f",arr[0]);
     printf("\nB) %.2f",arr[1]);
     printf("\nC) %.2f",arr[2]);
     printf("\nD) %.2f",arr[3]);
    printf("\n\nAnswer is to the nearest value.");
    printf("\nPlease Enter Character as Your Answer = ");
     ans=getche();
     printf("\n");
      if(ans == 'A' || ans == 'a')
      {
        if (arr[0] == sum)
        {
        a2++;
        }
      }
      else if (ans == 'B' || ans == 'b')
      {
        if (arr[1] == sum)
        {
        a2++;
        }
      }
      else if (ans == 'C' || ans == 'c')
      {

       if (arr[2] == sum)
        {
        a2++;
        }
      }
     else if(ans == 'D' || ans == 'd')
      {
    if (arr[3] == sum)
        {
        a2++;
        }
      }
    Sleep(500);
    system("cls");
}
  if(a2>=3)
  {
        printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONGRATULATIONS!!! YOU HAVE REACHED ROUND 3. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(500);
        system("cls");
    a4=add_r3();
   a3=a4+a2;
    return a3;
   }
   else
    {
    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORRY!!! YOU FAILED. PLEASE TRY AGAIN. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    Sleep(500);
    system("cls");
    a2=add_r2();
    }

}

int add_r3()
{
    srand(time(0));
    int n1,n2,n3,n4,ans,num,den;
    int arr[4],arr2[1];
    char A,a,B,b,C,c,D,d;
int i,a4=0,x,j;
int n = sizeof(arr) / sizeof(arr[0]);
for(i=1;i<=5;i++)
{
    printf("***************************************************\n");
    printf("---------------------------------------------------\n");
    printf("\t\t  ROUND 3\n");
    printf("---------------------------------------------------\n");
    printf("***************************************************\n");
    n1=rand()%12+1;
    n2=rand()%12+1;
    n3=rand()%12+1;
    n4=rand()%12+1;
    if (n2 == n4)
    {
        num=(n1+n3);
        den=n4;
    }
    else
    {
        num=((n1*n4)+(n2*n3));
        den=(n2*n4);
    }
    arr[0]=num;
    arr2[0]=den;
    arr[1]=rand()%12+1;
    arr[2]=rand()%12+1;
    arr[3]=rand()%20+1;
    shuffle(arr, n);
    printf("\n%d) %d/%d + %d/%d",i,n1,n2,n3,n4);
    printf("\n");
    printf("\nA) %d/%d",arr[0],arr2[0]);
    printf("\nB) %d/%d",arr[1],arr2[0]);
    printf("\nC) %d/%d",arr[2],arr2[0]);
    printf("\nD) %d/%d",arr[3],arr2[0]);
     printf("\n\nPlease Enter Character as Your Answer = ");
    ans=getche();
printf("\n");

    if(ans == 'A' || ans == 'a')
    {
        if ((arr[0] == num) && (arr2[0] == den))
        {
        a4++;
        }
    }
      else if (ans == 'B' || ans == 'b')
      {
        if ((arr[1] == num) && (arr2[0] == den))
        {
        a4++;

        }
      }
      else if (ans == 'C' || ans == 'c')
      {

       if ((arr[2] == num) && (arr2[0] == den))
        {
        a4++;
        }
      }
     else if(ans == 'D' || ans == 'd')
      {
    if ((arr[3] == num) && (arr2[0] == den))
        {
        a4++;
        }
      }
    Sleep(500);
    system("cls");
    }
    if(a4>=3)
  {
        printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONGRATULATIONS!!! YOU HAVE COMPLETED ADDITION. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(500);
        system("cls");
  }
   else
    {
        printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORRY!!! YOU FAILED. PLEASE TRY AGAIN. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(500);
        system("cls");
      a4=add_r3();
    }
    return a4;
}
void file()
{
  FILE *fp;
    fp=fopen("StudentScore.txt","a+");
    system("cls");
        printf("\nENTER YOUR FIRST NAME: ");
    scanf("%s",&add.name);
    printf("\nENTER ID:");
    scanf("%d",&add.id);
    printf("\nSCORE: %d",marks);
    fprintf(fp,"\t%s\t\t\t%d\t\t%d\n",add.name,add.id,marks);
    fclose(fp);
    printf("\nScore Saved!");
}
void view_list()
{
    FILE *fp ;
 char ch ;
 fp=fopen("StudentScore.txt","r");
 printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SCORE BOARD \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
 printf("----------------------------------------------------------------------\n");
 printf("\tNAME\t\t   STUDENT ID\t\tSCORE\n");
 printf("----------------------------------------------------------------------\n");
 while (1)
 {
    ch=fgetc(fp);
 if (ch == EOF)
    break;
        printf ("%c",ch);
 }
 fclose (fp);
}
int Multi_r1()
{
srand(time(0));
    int i,n1,n2,product;
    char A,B,C,D,a,b,c,d;
    char ans;
    int arr[4];
    int msum=0,m1=0;
    int m3;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(i=1;i<=5;i++)
  {
    printf("***************************************************\n");
    printf("---------------------------------------------------\n");
    printf("\t\t  ROUND 1\n");
    printf("---------------------------------------------------\n");
    printf("***************************************************\n");
    n1=rand()%25;
    n2=rand()%25;
    product=n1*n2;
    arr[0]=product;
    arr[1]=rand()%625;
    arr[2]=rand()%25;
    arr[3]=rand()%50;
    shuffle(arr, n);
    printf("%d) %d x %d = ?\n",i,n1,n2);
    printf("\n");
    printf("A) %d",arr[0]);
    printf("\nB) %d\n",arr[1]);
    printf("C) %d",arr[2]);
    printf("\nD) %d",arr[3]);
    printf("\n\nPlease Enter Character as Your Answer = ");
    ans=getche();
    printf("\n");
    if(ans == 'A' || ans == 'a')
    {
        if (arr[0] == product)
        {
       m1++;
        }
    }
      else if (ans == 'B' || ans == 'b')
      {
        if (arr[1] == product)
        {
       m1++;
        }
      }
      else if (ans == 'C' || ans == 'c')
      {
       if (arr[2] == product)
        {
       m1++;
        }
      }
     else if(ans == 'D' || ans == 'd')
      {
    if (arr[3] == product)
        {
       m1++;
        }
      }
    Sleep(500);
    system("cls");
    }
   if(m1>=3)
    {
        printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONGRATULATIONS!!! YOU HAVE REACHED ROUND 2. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(500);
        system("cls");
        m3=Multi_r2();
    	msum=m1+m3;
    return msum;
     }
    else
    {
      printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORRY!!! YOU FAILED. PLEASE TRY AGAIN. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
      Sleep(500);
      system("cls");
     }
     m1=Multi_r1();
}
int Multi_r2()
{
    srand(time(0));
    int i;
    float n1,n2,product;
    char A,B,C,D,a,b,c,d;
    char ans;
    float arr[4];
    int m2=0,m3,m4;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(i=1;i<=5;i++)
  {
    printf("***************************************************\n");
    printf("---------------------------------------------------\n");
    printf("\t\t  ROUND 2\n");
    printf("---------------------------------------------------\n");
    printf("***************************************************\n");
    n1=(float)rand()/1200.5;
    n2=(float)rand()/1200.5;
    product=n1*n2;
    arr[0]=product;
    arr[1]=(float)rand()/653.5;
    arr[2]=(float)rand()/45.7;
    arr[3]=(float)rand()/1000.5;
    shuffle(arr, n);
    printf("%d) %.2f x %.2f = ?\n",i,n1,n2);
    printf("\n");
    printf("A: %.2f",arr[0]);
    printf("\nB: %.2f\n",arr[1]);
    printf("C: %.2f",arr[2]);
    printf("\nD: %.2f",arr[3]);
    printf("\n\nAnswer is to the nearest value.");
    printf("\nPlease Enter Character as Your Answer = ");
    ans=getche();
printf("\n");
    if(ans == 'A' || ans == 'a')
    {
        if (arr[0] == product)
        {
        m2++;
        }
    }
      else if (ans == 'B' || ans == 'b')
      {
        if (arr[1] == product)
        {
        m2++;
        }
      }
      else if (ans == 'C' || ans == 'c')
      {

       if (arr[2] == product)
        {
        m2++;
        }
      }
     else if(ans == 'D' || ans == 'd')
      {
    if (arr[3] == product)
        {
        m2++;
        }
      }
    Sleep(500);
    system("cls");
    }
     if(m2>=3)
    {
        printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONGRATULATIONS!!! YOU HAVE REACHED ROUND 3. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(500);
        system("cls");
        m4=Multi_r3();
        m3=m4+m2;
        return m3;
     }
    else
    {
      printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORRY!!! YOU FAILED. PLEASE TRY AGAIN. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
      Sleep(500);
      system("cls");
      m2=Multi_r2();
     }
}
int Multi_r3()
{
    srand(time(0));
    int i,w,x,y,z;
    int prod1,prod2;
    char A,B,C,D,a,b,c,d;
    char ans;
    int arr[4],arr2[1];
    int m4=0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(i=1;i<=5;i++)
  {
    printf("***************************************************\n");
    printf("---------------------------------------------------\n");
    printf("\t\t  ROUND 3\n");
    printf("---------------------------------------------------\n");
    printf("***************************************************\n");
    w=rand()%12+1;
    x=rand()%12+1;
    y=rand()%12+1;
    z=rand()%12+1;
    prod1=w*y;
    prod2=x*z;
    arr[0]=prod1;
    arr2[0]=prod2;
    arr[1]=rand()%12+1;
    arr[2]=rand()%50+1;
    arr[3]=rand()%26+1;
    shuffle(arr, n);
    printf("%d) %d/%d x %d/%d = ?\n",i,w,x,y,z);
    printf("\n");
    printf("A: %d/%d",arr[0],arr2[0]);
    printf("\nB: %d/%d\n",arr[1],arr2[0]);
    printf("C: %d/%d",arr[2],arr2[0]);
    printf("\nD: %d/%d",arr[3],arr2[0]);
    printf("\n");
     printf("\n\nPlease Enter Character as Your Answer = ");
    ans=getche();
printf("\n");

    if(ans == 'A' || ans == 'a')
    {
        if ((arr[0] == prod1) && (arr2[0] == prod2))
        {
        m4++;
        }
    }
      else if (ans == 'B' || ans == 'b')
      {
        if ((arr[1] == prod1) && (arr2[0] == prod2))
        {
        m4++;
        }
      }
      else if (ans == 'C' || ans == 'c')
      {

       if ((arr[2] == prod1) && (arr2[0] == prod2))
        {
        m4++;
        }
      }
     else if(ans == 'D' || ans == 'd')
      {
    if ((arr[3] == prod1) && (arr2[0] == prod2))
        {
        m4++;
        }
      }
    Sleep(500);
    system("cls");
    }
       if(m4>=3)
        {
        printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONGRATULATIONS!!! YOU HAVE COMPLETED MULTIPLICATION \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        Sleep(500);
        system("cls");
    }
    else
    {
    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SORRY!!! YOU FAILED. PLEASE TRY AGAIN. \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    Sleep(500);
    system("cls");
     m4=Multi_r3();
     }
    return m4;
}

