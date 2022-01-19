# 문제 주소
https://www.acmicpc.net/problem/2869

# 문제 이름
달팽이는 올라가고 싶다

# 코드
using System;

namespace ConsoleApp1
{

    class Program
    {
        static void Main(string[] args)
        {
            string input;
            string[] token;
            int a, b, v, cnt = 0;

            input = Console.ReadLine();
            token = input.Split(' ');

            a = Convert.ToInt32(token[0]);
            b = int.Parse(token[1]);
            v = int.Parse(token[2]);

            v -= a;
            cnt++;
            a -= b;

            if (v > a && v > 0)
            {
                cnt += v / a;
                v %= a;

                if (v > 0) cnt++;
            }
            else if (v > 0) cnt++;
            
            
            Console.WriteLine(cnt); 
        }
    }
}

# 유의점
C#은 입력값을 여러 개 받을 때 string으로 받고, 파싱해주어야 한다.
파싱할 때, 입력 값 사이에 공백이 여러 개 있을 경우 
.Split(나눌 문자, StringSplitOptions.RemoveEmptyEntries)를 사용하면 된다.

v / (a - b)
a % v가 0 일 경우
a % v + 1

1일 경우
a % v + 2
