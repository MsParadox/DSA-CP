import java.util.ArrayList;
import java.util.List;
//time O(N!) space O(n)
public class One23permu {
public static  void main(String[] args) {
    int[] nums = {1,2,3};
    List<List<Integer>> result= permute(nums);
    for(var i :result){
        System.out.print(i);
    }
    }

 public static  List<List<Integer>> permute(int[] nums) {
    List<List<Integer>> ans = new ArrayList<>();
    List<Integer> ds = new ArrayList<>();
    boolean[] isValid = new boolean[nums.length];
    helper(nums,ds,isValid,ans);
    return ans;
}
public static  void helper(int[] nums, List<Integer> ds, boolean[] isValid, List<List<Integer>> ans) {
    if(ds.size()==nums.length){
 //copy ds into list
   List<Integer> list = new ArrayList<>();
   for (int i = 0; i < ds.size(); i++) {
    list.add(ds.get(i));
   }
         ans.add(list);
        return;
    }
    for (int i = 0; i < nums.length; i++) {
        if(isValid[i]==false){
        ds.add(nums[i]);
        isValid[i]= true;
        helper(nums, ds, isValid, ans);

        isValid[i] =false;//backtracking
        ds.removeLast();
        }
    }
}    
}
