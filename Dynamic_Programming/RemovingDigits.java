import java.util.*;

public class RemovingDigits {
	public static void main(String[] args) {
		Scanner obj = new Scanner(System.in);
		int n = obj.nextInt();
		ArrayList<Long> dp = new ArrayList<Long>();
		for (int i = 0; i <= n; ++i) {
			dp.add(Long.MAX_VALUE);
		}
		dp.set(0, 0L);

		for (int i = 1; i <= n; ++i) {
			int tmp = i;
			while(tmp > 0) {
				int dig = tmp % 10; tmp /= 10;
				if (dig == 0) {continue;}
				dp.set(i, Math.min( dp.get(i), dp.get(i-dig) + 1) );
			}
		}
		System.out.println(dp.get(n));
	}
};
