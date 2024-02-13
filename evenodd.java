import java.util.Scanner; 
class Evenorodd 
{
static void check(int number) 
{
 if(number%2==0)
{ 
System.out.print("The value "+number+" is a even number");
} 
else 
{
System.out.print("The value "+number+" is a odd number");
} 
} 
public static void main(String[] args) 
{
     int number;
System.out.print("Enter the value of number : "); 
Scanner input=new Scanner(System.in); 
number=input.nextInt();
 input.close(); 
check(number);
} 
}
