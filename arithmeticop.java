import java.util.Scanner;
class Compute
{
    public static void main(String[] args)
    {
        int a,b;
        int choice;
    Scanner input=new Scanner(System.in);
    System.out.println("enter the value a : ");
     a=input.nextInt();
    System.out.println("enter the value b : ");
    b=input.nextInt();
    System.out.println("the choices are 1.ADDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISION ");
    System.out.println("enter the choice from 1 to 4:");
    choice=input.nextInt();
    input.close();
    if(choice==1)
    {
        System.out.println("addition is " +a+  " and " +b+ " is"+(a+b));
    }
    else if(choice==2)
    {
      System.out.println("subtraction is"+a+"and"+b+"is"+(a-b));  
    }
    else if(choice==3)
    {
        System.out.println("multiplication is"+a+"and"+b+"is"+(a*b));
    }
    else if(choice==4)
    {
      System.out.println("division is"+a+"and"+b+"is"+(a/b));     

    }
    else
    {
        System.out.println("enter the correct choice");
    }
}
}

