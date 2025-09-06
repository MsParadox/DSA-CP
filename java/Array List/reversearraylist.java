import java.util.ArrayList;
import java.util.Collections;
public class reversearraylist {

  static void reverarraylist(ArrayList<Integer> l){
    int x = 0;
    int y = l.size()-1;
    while(x<y){
   // int temp =l.get(x);
    Integer temp =  Integer.valueOf(l.get(x));
    l.set(x, l.get(y));
    l.set(y,temp);

    x++;
    y--;
    }
    return;
 }

    public static void main(String[] args) {
        ArrayList<Integer> l = new ArrayList<>();
        l.add(1);
        l.add(2);
        l.add(3);
        l.add(4);
        l.add(5);

    System.out.println("Before :" +l);
    reverarraylist(l);
    System.out.println(("After :" +l));
    Collections.reverse(l);
    System.out.println("By in built Class :-"+l);

    }
}
