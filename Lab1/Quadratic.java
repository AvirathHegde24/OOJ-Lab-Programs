import java.util.Scanner;
public class Quadratic
{
    public static void main(String args[])
    {
        double x=0, y=0;
        double a,b,c;
        double det;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of a:");
        a = sc.nextDouble();
        
        System.out.println("enter the value of b:");
        b  = sc.nextDouble();
        
        System.out.println("Enter the value for c:");
        c = sc.nextDouble();
        
        det= (b*b)-(4*a*c);
        double sqrt = Math.sqrt(det);
         if(det>0)
        {
            x = (-b+sqrt)/(2*a);
            y = (-b-sqrt)/(2*a);
            System.out.println("Roots are :: "+x+" and "+y);
        }
        else if(det==0)
        {
             System.out.println("Root is :: "+(-b + sqrt)/(2*a));
        }
        else
        System.out.println("There are no real solutions");
    }
}
