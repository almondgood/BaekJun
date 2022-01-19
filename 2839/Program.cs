﻿using System;

namespace ConsoleApp1
{

    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int nMod = n % 5;
            int cnt = n / 5;

            while (true)
            {
                if (cnt == -1) break;

                if (nMod % 3 == 0)
                {
                    cnt += nMod / 3;
                    break;
                }
                else
                {
                    cnt--;
                    nMod += 5;
                }
            }

            Console.WriteLine(cnt);
        }
    }
}

