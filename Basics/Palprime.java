package com.company;
import java.util.Scanner;

public class Main {
    static boolean prime_number(int num) {
        int flag = 0;
        if(num <= 1)
            return false;
        for(int i = 2; i < num/2; i++) {
            if(num % i == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            return true;
        else
            return false;
    }

    static boolean palindrome(int num) {
        int temp = num, reverse = 0, last_digit =0;

        while(temp != 0) {
            last_digit = temp % 10;
            reverse = reverse * 10 + last_digit;
            temp /= 10;
        }
        if(reverse == num)
            return true;
        else
            return false;
    }



    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 0, m = 0;

        System.out.println("Enter a range : ");
        m = sc.nextInt();
        n = sc.nextInt();

        for(int i = m; i <= n; i++) {
            if(prime_number(i) && palindrome(i))
                System.out.println(i);
        }

    }
}