import java.util.ArrayList;
//like vector in c++

/*syntax:
List<AnyClass>list = new ArrayList<AnyClass>();
*/

public class arraylist {


@SuppressWarnings("unchecked")
public static void main(String[] args) {
    
ArrayList<Integer> l1 = new ArrayList<>();
//ArrayList<Boolean> l2 = new ArrayList<>();
//ArrayList<Float> l3 = new ArrayList<>();

// add a element
l1.add(1);
l1.add (2);
l1.add(5);

//get an element at index i

//System.out.println(l1[0]);  error
System.out.println(l1.get(2));

//print with for loop
for (int i = 0; i < l1.size(); i++) {
    System.out.println(l1.get(i));
}

//printing the array list directly
System.out.println(l1);

//add element at some index i
l1.add(1,20);
System.out.println(l1);


//modifying element at index 1
l1.set(2, 9);
System.out.println(l1);

//removing element at index i
l1.remove(3);
System.out.println(l1);

//removing element itself
System.out.println(l1.remove(Integer.valueOf(9)));//return boolean value                   
System.out.println(l1);

//checking if element exist or not
boolean ans = l1.contains(Integer.valueOf(5));
System.out.println(ans);

//if you dont specify class , you can put anything inside l

@SuppressWarnings("rawtypes")
ArrayList l = new ArrayList();
l.add("mohit");
l.add(1);
l.add(true);
System.out.println(l);

}   
}
