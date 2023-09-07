import java.util.*;
public class String_Builder {
    public static void main(String[] args) {
        // declaration
        StringBuilder sb=new StringBuilder("AMY");
        System.out.println(sb);

        // char at an index
        System.out.println(sb.charAt(0));

        // set char index
        sb.setCharAt(1,'w');
        System.out.println(sb);

        // insert char at index
        sb.insert(sb.length(),'S');
        System.out.println(sb);

        // delete char at index
        sb.delete(sb.length()-1,sb.length());
        System.out.println(sb);

        // append string
        sb.append(" Santiago");
        System.out.println(sb);

    }
}
