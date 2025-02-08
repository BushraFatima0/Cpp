import java.util.Scanner;
import java.util.*;
public class perfect_sq
{
    public static void main(String[] args) 
    {
     Scanner in= new Scanner (System.in);
     System.out.println("ENTER A NO.");
     int n;
     double s,f;
     n=in.nextInt();
     s=Math.sqrt(n);
     f=Math.floor(s);
     System.out.println(s);
     System.out.println(f);
     if (s==f)
     {
        System.out.println(n+" is a perfect square");  }
     else
     {
        System.out.println(n+" is not a perfect square"); 
    }
}
}