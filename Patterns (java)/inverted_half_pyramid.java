import java.util.*;

public class inverted_half_pyramid {
    public static void main(String[] args) {
        int n=4;
        int m=5;
        
        for(int i=n; i>=1;i--){
            for(int j=i; j>=1; j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
