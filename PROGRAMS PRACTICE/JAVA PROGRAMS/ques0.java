import java.util.Scanner;

public class ques0
{
    public static void main(String args[])
    {
        Scanner in = new Scanner ( System.in);
        System.out.println("Enter a number");
        int y=in.nextInt();
        System.out.println("The number is:"+y);
        while ( y<=9)
        {
            if (y%2==0)
        {
            System.out.println("It is an even Number");
        }
        else
        {
            System.out.println("It is an odd Number");
        }
        y++;
    }
}
}
