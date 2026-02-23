import java.util.Scanner;

public class DivisibleBy11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        String num = sc.next();

        int oddSum = 0, evenSum = 0;

        for (int i = 0; i < num.length(); i++) {
            int digit = num.charAt(i) - '0';

            if (i % 2 == 0)
                oddSum += digit;
            else
                evenSum += digit;
        }

        if (Math.abs(oddSum - evenSum) % 11 == 0)
            System.out.println(num + " is divisible by 11");
        else
            System.out.println(num + " is not divisible by 11");
    }
}
