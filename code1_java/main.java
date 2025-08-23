

public class main {

    public static void main (String[] args) {
        
        System.out.println("hello world ");
       
        main2 ob = new main2();

        int p,s;
        p=5;
        s=4;
        int r= ob.add(p,s);
        System.out.println(r);

        int n= ob.sub(p,s);
        System.out.println(n);

        int t= ob.mul(p,s);
        System.out.println(t);
        
        int m= ob.div(p,s);
        System.out.println(m);
        
        
    }

}
