import java.util.Scanner;

public class ques1a
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner (System.in);
        System.out.println(" Enter three numbers");
        int x= in.nextInt();
        int y= in.nextInt();
        int z= in.nextInt();
        System.out.print("The greatest Number is: ");
        if (x>y && x>z)
        {
            System.out.println(x);
        }
        if (y>x && y>z)
        {
            System.out.println(y);
        }
        else
        {
            System.out.println(z);
        }

    }
}