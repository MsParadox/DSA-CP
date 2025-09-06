import java.util.ArrayList;
import java.util.Collections;
public class sorting {
    public static void main(String[] args) {
        ArrayList<Integer> l = new ArrayList<>();
        l.add(1);
        l.add(5);
        l.add(3);
        l.add(9);
        l.add(2);

    System.out.println("Before :" +l);
    
    Collections.sort(l);
    System.out.println("ascending :"+l);

    Collections.sort(l,Collections.reverseOrder());
    System.out.println("Descending :"+l);
    
    ArrayList<String> s =new ArrayList<>();
    s.add("My");
    s.add("Name");
    s.add("Is");
    s.add("Mohit");
    s.add("Sharma");
    System.out.println(s);
    Collections.sort(s);
    System.out.println(s);






    }
}
