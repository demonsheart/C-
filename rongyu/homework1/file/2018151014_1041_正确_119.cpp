#include <iostream>

using namespace std;

int main(void) {
	
	const char *str[13] = {
		NULL, "January", "February", "March",
		"April", "May", "June", "July", "August",
		"September", "October", "November", "December"};
	int t;
	
	cin >> t;
	while (t--) {
		int ask;
		cin >> ask;
		if (ask < 1 || ask > 12) {
			cout << "error\n";
		}
		else {
			cout << str[ask] << '\n';
		}
	}
	
	return 0;
}
zj07:Problem1038:ÔËÐÐ´íÎó
import java.util.Scanner;

public class Main {

    public static void main(String args[]) {
        int t;
        String s_list[] = new String[3];
        int begin_end[][] = new int[3][2];

        Scanner Cin = new Scanner(System.in);

        t = Cin.nextInt();

        while(t!=0)
        {
            for(int i=0;i<3;i++){
                s_list[i] = Cin.next();
            }
            for(int i=0;i<3;i++){
                begin_end[i][0]=Cin.nextInt();
                begin_end[i][1]=Cin.nextInt();
            }

            String res = "";
            for(int i=0;i<3;i++){
                res+=s_list[i].substring(begin_end[i][0]-1,begin_end[i][1]);
            }
            System.out.println(res);
        }
    }

}

