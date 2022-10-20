import java.util.Scanner;
class Heap_Sort{
	void heapify(int arr[],int n, int i) {
		int largest =i;
		int left=2*i+1;
		int right=2*i+2;
		if(left<n && arr[left]>arr[largest]) {
			largest=left;
		}
		if(right<n && arr[right]>arr[largest]) {
			largest=right;
		}
		if(largest!=i) {

			int temp=arr[i];
			arr[i]=arr[largest];
			arr[largest]=temp;
			heapify(arr,n,largest);
		}
	}
	void heapsort(int arr[],int n) {
		for(int i=n/2-1;i>=0;i--) {
			heapify(arr,n,i);
		}
		for(int i=n-1;i>=0;i--) {
			int a= arr[0];
			arr[0]=arr[i];
			arr[i]=a;
			heapify(arr,i,0);		
						
		}
		
	}
	
}
public class HeapSort {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the size of the array: ");
		int n=sc.nextInt();
		int arr[]=new int[100];
		System.out.println("Enter the elements in the array:  ");
		for(int i=0;i<n;i++) {
			arr[i]=sc.nextInt();
		}
		
		Heap_Sort ob =new Heap_Sort();
		ob.heapsort(arr,n);
		for(int i=0;i<n;i++) {
			System.out.println(arr[i]);
		}
		
	}

}
