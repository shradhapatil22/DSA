import java.util.*;

public class Basics_java{
    public static void main(String[] args)
    {
        // String declaration
        String name="Amy";
        String fullName="Amy Santiago";

        // user input
        // Scanner in=new Scanner(System.in);
        // System.out.println("Enter name: ");
        // String name2=in.nextLine();
        // System.out.println(name2);

        // Concatenation
        String firstname= "Amy";
        String secondname="Santiago";
        String fullname2=firstname+" "+secondname;
        System.out.println(fullname2);

        // print length of string
        System.out.println(fullname2.length());

        // charAt
        for(int i=0; i<fullname2.length(); i++) {
            System.out.println(fullname2.charAt(i));
        }

        // compare strings
        String name1="Amy";
        String name2="amy";

        if(name1.compareTo(name2)==0)
        {
            System.out.println("strings");
        }
        
        // substring
        String sentence="i dont know what";
        System.out.println(sentence.substring(0, 6));

    }
}
