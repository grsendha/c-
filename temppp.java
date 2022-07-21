import java.util.Scanner;

public class temppp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        double tip = 0;
        if (b == 1) {
            tip = a * 0.05;
        } else if (b == 2) {
            tip = a * 0.01;
        } else if (b == 3) {
            tip = a * 0.15;
        } else if (b == 4) {
            tip = a * 0.2;
        } else if (b == 5) {

            tip = a * 0.25;
        }
        int total = (int) tip;
        System.out.println(total);
        sc.close();

    }
}