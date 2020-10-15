import java.util.Scanner;

public class Java0017_FunctionsSample2 {

    public static int isPentagonal(int number) {

        for (int i = 0; number > 0; i++)
            number -= 1+3*i;
        if(number == 0)
            return 1;
        return 0;
    }

    public static void main(String[] args) {

        int x;
        Scanner s = new Scanner(System.in);
        x = s.nextInt();
        do {

            if (isPentagonal(x) == 1)
                System.out.println(x+" is a pentagonal number");
            else
                System.out.println(x+" is NOT a pentagonal number");
            x = s.nextInt();
        } while(x > 0);
    }
}
