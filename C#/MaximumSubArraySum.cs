using System;
using System.Linq;
using static System.Range;
using static System.Index;

public static class Kata
{
  public static int MaxSequence(int[] arr) 
  { 
    //TODO : create code
    int sum = 0, temp;
    temp = arr.Where(x => x < 0).ToArray().Length;
    if (temp == arr.Length || temp == 0) {
      bool isPositive = temp == arr.Length ? true: false;
      if (isPositive) return arr.Sum();
      return sum;
    }
  
    for (int i = 0; i < arr.Length; i++) 
    {
      for (int j = i; j < arr.Length; j++) 
      {
        temp = arr[i..(j + 1)].Sum();
        if (temp > sum) {
          sum = temp;
        }
      }
    }
    return sum;
  }
}
