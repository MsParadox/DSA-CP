//in Java
public int firstMissingPostive(int[] nums){
  HashMap<Integer,Integer> map=new HashMap<>();
  int n=nums.length;
  for(int i=0;i<n;i++){
    map.put(nums[i],1);
  }
   for(int i=1;i<=n+1;i++){
    if(!map.containsKey(i)) return i;
  }
  return 0;
}