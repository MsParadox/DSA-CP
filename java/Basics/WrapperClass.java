public class WrapperClass {
    public static void main(String[] args) {

    //Wrapper Class :-
    //(1) a class whose object cotains or wraps primitive datatype(PDT)
    //(2) object of a wrapper class contains a field which stores PDT
    //int -> Integer  , float -> Float , char ->Character   , boolean -> Boolean , long -> Long
    
    //deficit in current version in java 
    //Integer i = new Integer(value:3);
      Integer i = Integer.valueOf(4);
      System.out.println(i);
      Float j = Float.valueOf(4.5f);
      System.out.println(j);

        
    }
}