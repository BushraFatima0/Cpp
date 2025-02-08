import java.util.Scanner;
public class ques4 
{

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int a,rev;
        rev=0;
        System.out.println("ENTER a number");
        a=in.nextInt();
        for(;a!=0;a=a/10)
        {
            int rem= a%10;
            rev= (rev*10) +rem;
        }
        System.out.println(rev);


    }
}