public class Index 
{
       public static int  findIndex (int[] my_array, int t) 
    {
        if (my_array == null) return -1;
        int len = my_array.length;
        int i = 0;
        while (i < len) 
        {
            if (my_array[i] == t) return i;
            else i=i+1;
        }
        return -1;
    }
    public static void main(String[] args)
    {
      int[] my_array = {2,1,3};
      System.out.println("2: " + findIndex(my_array, 2));
      System.out.println("1: " + findIndex(my_array, 1));
      System.out.println("3: " + findIndex(my_array, 3));
    }
}
