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

