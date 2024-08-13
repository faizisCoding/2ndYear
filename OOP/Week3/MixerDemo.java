//import java.util.Scanner;
import java.util.*;

class Mixer{

    int arr[];

    void accept(int arr1[])
    {
        arr = arr1.clone();

        return;
    }

    Mixer mix (Mixer A){

        Mixer B = new Mixer();
        B.arr = new int[(A.arr.length+this.arr.length)];

        int put_val = 0;

        for(int i = 0; i < A.arr.length; i++ ) 
        {
            B.arr[put_val] = A.arr[i];
            put_val++;
        }
        
        for(int i = 0; i < this.arr.length; i++ )
        {
            B.arr[put_val] = this.arr[i];
            put_val++;
        }

        Arrays.sort(B.arr);
        
        return B;
    }

}

class MixerDemo{

    public static void main(String[] args){

        Scanner s = new Scanner(System.in);

        int a[] = {1,2,3,4,5};
        int b[] = {6,7,8,9,10};

        Mixer aa = new Mixer();
        Mixer bb = new Mixer();

        aa.accept(a);
        bb.accept(b);

        Mixer cc = new Mixer();
        cc = aa.mix(bb);

        for (int i : cc.arr) {
            System.out.print(i + " ");
        }

        s.close();
        
        return;
    }
}
