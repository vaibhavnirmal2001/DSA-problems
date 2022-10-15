import java.util.*;

public class DivideandConqure {

  public static void printArr(int arr[]){
    for (int i = 0; i< arr.length; i ++){
      System.out.print( arr[i] + " ");
    }
    System.out.println();
  }


  // recursive funtion for merge Short

  public static void mergeShort(int arr[] , int si , int ei ){
      if (si >= ei){
        return;
      }

      // kaam 

      int mid = si + (ei - si)/ 2;
      mergeShort(arr, si, mid); // left side
      mergeShort(arr, mid+1, ei); // right side 
      merge(arr,si,mid,ei);
  }

  // merge short funtion
  public static void merge(int arr[] , int si , int mid , int ei){
    int temp[] = new int [ei - si + 1]; 
    int i = si;// iteration for left sidse
    int j = mid+1;//iteration for right side
    int k = 0; // iteration for temp array

    while(i <= mid && j <= ei){
      if (arr[i] < arr[j]){
        temp[k] = arr[i];
        i++;
      }else{
        temp[k] = arr[j];
        j++;
      }
      k++;
    }
     //left part
    while(i <= mid){
      temp[k++] = arr[i++];
    }
   // right part
    while(j <= ei ){
      temp[k++] = arr[j++];
    }
      //copy to the origion
    for(k = 0, i = si; k<temp.length; k++, i++){
       arr[i] = temp[k];
    }

  }



    // recursive funtion for Quick short 

    public static void quickShort(int arr[] , int si, int ei){
      if(si >= ei){
        return;
      }

      //last element(that we will use as pivot)
      int pIdx = partition(arr, si, ei);
      quickShort(arr, si, pIdx-1); // for left side
      quickShort(arr, pIdx+1, ei);

    }
     //quick sort partition funtion
    public static int partition(int arr[] , int si , int ei){
      int pivot = arr[ei];
      int i = si- 1; // to make space for element than pivot

      for(int j = si ; j< ei; j++){
        if (arr[j] <= pivot){
          i++;
          //swap 
          int temp = arr[j];
          arr[j] = arr[i];
          arr[i] = temp;
        }
      }

      i++;
      int temp = pivot;
      arr[ei] = arr[i];
      arr[i] = temp;
      return i;
    }



   // Find key in rotated and sorted array  also array is rotated in pivot point


   public static int search ( int arr[] , int si , int target , int ei){
       //base case 
       if (si>ei){
        return -1; // means invalid
       }
    int mid = si + (ei - si);
    // best case 
    if(arr[mid] == target){
      return mid ;
    }
   
    //Case found 

    // mid in line 1 

    if (arr[si] <= arr[mid]){

      // case a: left
      if ( arr[si] <= target && target <= arr[mid]){
          return search(arr, si, target, mid-1);

      }
      //case b: right
      else{
         return search(arr, mid + 1, target, ei);
      }

    }
    //else case for mid in line 2
    else{ // case c : right 
          if ( arr[mid] <= target && target <= arr[ei]){
              return search(arr, mid + 1, target, ei);
          }
          // case d : left
          else{
            return search(arr, si, target, mid-1);
          }
        
    }
  
   }










  public static void main (String atgs[]){
    // int arr[] = {6,3,9,5,2,8 ,-2,-1};

    //  mergeShort(arr, 0, arr.length-1);

  
    // quickShort(arr, 0, arr.length-1);

    // printArr(arr);


  int arr[]  = {4,5,6,7,0,1,2};
  int target = 0;

  int tarIdx = search(arr, 0 , target, arr.length-1);
  System.out.println(tarIdx);
  

  }
}
