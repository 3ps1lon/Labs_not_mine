using System;

namespace Задание_3_1_Миронов_1216
{
    class Program
    {
        static void Ma2in(string[] args)
        {

            int[,] a;
            int r;
            int c;
            int nn;

            Console.Title = "test " + DateTime.Now;

            Random rnd = new Random();

            Console.Write("Введите: ");
            int N = int.Parse(Console.ReadLine());
            Console.Write("Введите: ");
            int M = int.Parse(Console.ReadLine());
            a = new int[N, M];
            for (c = 0; c < M;c ++) for (r = 0; r < N; r++)
                {
                    Console.Write((r + 1) + " , " + (c + 1) + " : ");
                    nn = rnd.Next(-100, 100);
                    a[r, c] = nn;
                    Console.WriteLine(nn);
                }

            Console.WriteLine(DateTime.Now);
        }
    }
}
