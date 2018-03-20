publicclass FindLargestSmallestNumber {
 
	public static void main(String[] args) {
		
		
		int num[] = new int[]{32,43,53,54,32,65,63,98,43,23};
		
		
		int smallest = num[0];
		int largest = num[0];
		
		for(int i=1; i< num.length; i++)
		{
			if(num[i] > largest)
				largest = num[i];
			else if (num[i] < smallest)
				smallest = num[i];
			
		}
		
		System.out.println("Largest Number is : " + largest);
		System.out.println("Smallest Number is : " + smallest);
	}
}
