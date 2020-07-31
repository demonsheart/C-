#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char *strAdd(char *s1, char *s2){
    int l1=strlen(s1),l2=strlen(s2),cnt=0;
    char *p=new char[l1+l2+1];
    for(int i=0;i<l1;i++){
        p[cnt++]=s1[i];
    }
    for(int i=0;i<l2;i++){
        p[cnt++]=s2[i];
    }
    p[cnt]=0;
    return p;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        char s1[100],s2[100];
        cin>>s1>>s2;
        cout<<s1<<' '<<s2<<' '<<strAdd(s1,s2)<<endl;
    }
}

zj07:Problem1038:ÔËÐÐ´íÎó
import java.util.Scanner;
import java.io.*;
import java.util.*;
public class Main {

    public static void main(String args[]) throws Exception{
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

