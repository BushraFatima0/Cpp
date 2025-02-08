import java.util.Scanner;
import java.math.*;
public class ques1b
{
    public static void main (String[] args) 
    {
        Scanner in = new Scanner (System.in);
        System.out.println(" Enter three numbers");
        double x= in.nextInt();
        double y= in.nextInt();
        double z= in.nextInt();
        double g= Math.max(x,y);
        double h= Math.max(g,z);
        System.out.print("The greatest Number is: "+h);
    }
}