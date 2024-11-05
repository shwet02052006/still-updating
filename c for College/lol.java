public class SumPrimes {
    public static void main(String[] args) {
        long limit = 2000000;
        long sum = 2;  // Start with 2, as it's the only even prime number

        // Loop through odd numbers only, starting from 3
        for (long num = 3; num < limit; num += 2) {
            if (isPrime(num)) {
                sum += num;
            }
        }

        System.out.println("Sum of primes below 2,000,000 = " + sum);
    }

    // Helper function to check if a number is prime
    public static boolean isPrime(long n) {
        if (n < 2) return false;
        if (n == 2 || n == 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;

        // Check divisibility from 5 up to the square root of n, skipping even numbers
        for (long i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}
